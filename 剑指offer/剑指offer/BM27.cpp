//
//  BM27.cpp
//  剑指offer
//
//  Created by 邓亚洲 on 2022/5/3.
//
//BM27 按之字形顺序打印二叉树

#include <stdio.h>
//vector 需要引入 <vector>
#include <vector>
//using namespace std; vector 和 std::vector 等价
using namespace std;


struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
    TreeNode(int x):val(x),left(NULL),right(NULL) {} //使用参数初始化列表来初始化字段
};

class Solution {
    void hierarchy(vector<vector<int>>& res, TreeNode* root, int depth) {
        if (root == NULL) { return; }
        if (res.size() == depth) {
            res.push_back(vector<int> {});
        }
        // 按之字形顺序打印二叉树,其实就是层序打印二叉树 加入了一个vector添加元素 从后添加 还是从前插入
        if (depth % 2 == 0) {
            res[depth].push_back(root->val);
        } else {
            res[depth].insert(res[depth].begin(), root->val);
        }
        hierarchy(res, root->left, depth+1);
        hierarchy(res, root->right, depth+1);
    }
    
public:
    vector<vector<int> > print(TreeNode* root) {
        vector<vector<int>> res;
        if (root == NULL) return res;
        hierarchy(res, root, 0);
        return res;
    }
};
