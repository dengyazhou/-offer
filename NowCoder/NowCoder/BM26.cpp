//
//  BM26.cpp
//  剑指offer
//
//  Created by 邓亚洲 on 2022/5/2.
//
//BM26 求二叉树的层序遍历

#include <stdio.h>
#include <vector>
using namespace std;

struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
    TreeNode(int x):val(x),left(NULL),right(NULL) {}
    
};

class Solution {
    
    
public:
    
    void traverse(vector<vector<int>>& res, TreeNode* root, int depth) {
        if (root) {
            if (res.size() == depth) {
                res.push_back(vector<int>{});
            }
            res[depth].push_back(root->val);
        } else {
            return;
        }
        traverse(res, root->left, depth+1);
        traverse(res, root->right, depth+1);
    }
    
    vector<vector<int> > levelOrder(TreeNode* root) {
        vector<vector<int>> res;
        if (root == NULL) { return res;}
        traverse(res, root, 0);
        return res;
    }
};
