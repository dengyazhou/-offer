//
//  YZ1.cpp
//  NowCoder
//
//  Created by 邓亚洲 on 2022/5/4.
//
//YZ1 二叉树的Paths

#include <stdio.h>
#include <vector>
#include <string>
using namespace std;

struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
    TreeNode(int x):val(x),left(NULL),right(NULL) {}
};

class Solution {
    
public:
    void preOrder(vector<vector<int>>& res, vector<int> path, TreeNode* root) {
        if (root->left != NULL && root->right != NULL) {
            path.push_back(root->val);
            preOrder(res, path, root->left);
            preOrder(res, path, root->right);
        } else if (root->left != NULL && root->right == NULL) {
            path.push_back(root->val);
            preOrder(res, path, root->left);
        } else if (root->left == NULL && root->right != NULL ) {
            path.push_back(root->val);
            preOrder(res, path, root->right);
        } else {//root->left == NULL && root->right == NULL
            path.push_back(root->val);
            res.push_back(path);
            return;
        }
    }
    
    vector<vector<int>> printTreePaths(TreeNode* root) {
        vector<vector<int>> res;
        if (root == NULL) {
            return res;
        }
        preOrder(res, {}, root);
        return res;
    }
};
