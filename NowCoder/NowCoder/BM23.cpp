//
//  BM23.cpp
//  NowCoder
//
//  Created by 邓亚洲 on 2022/5/2.
//
//BM23 二叉树的前序遍历

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
    
    
public:
    void preorder(vector<int> &res, TreeNode* root) {
        if (root == NULL) {
            return;
        }
        //在先左后右的原则下，根据访问根节点的次序不同，二叉树的遍历可以分为3种
#pragma mark 前序遍历
        res.push_back(root->val);
        preorder(res, root->left);
        preorder(res, root->right);
        
#pragma mark 中序遍历
//        preorder(res, root->left);
//        res.push_back(root->val);
//        preorder(res, root->right);
        
#pragma mark 后续遍历
//        preorder(res, root->left);
//        preorder(res, root->right);
//        res.push_back(root->val);
    }
    
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> res;
        
        preorder(res, root);
        return res;
    }
    
};

#pragma mark 递归就是把代码 先全部展开，执行，然后在遇到return开始收缩
//void preorder(vector<int> &res, TreeNode* root) {
//    if (root == NULL) {
//        return;
//    }
//        if (root == NULL) {
//            return;
//        }
//            if (root == NULL) {
//                return;
//            }
//
//                if (root == NULL) {
//                    return;
//                }
//
//                res.push_back(root->val);
//                preorder(res, root->right);
//
//            res.push_back(root->val);
//            preorder(res, root->right);
//
//        res.push_back(root->val);
//        preorder(res, root->right);
//
//    res.push_back(root->val);
//    preorder(res, root->right);
//}
