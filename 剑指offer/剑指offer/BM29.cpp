//
//  BM29.cpp
//  剑指offer
//
//  Created by 邓亚洲 on 2022/5/3.
//
//BM29 二叉树中和为某一值的路径(一)

#include <stdio.h>

struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
    TreeNode(int x):val(x),left(NULL),right(NULL) {}
};

class Solution {
            
    
public:

    /**
     *
     * @param root TreeNode类
     * @param sum int整型
     * @return bool布尔型
     */
    bool hasPathSum(TreeNode* root, int sum) {
        //空节点找不到路径
        if (root == NULL) {
            return false;
        }
        //叶子节点，且路径和为sum
        if (root->left == NULL && root->right == NULL && sum - root->val == 0) {
            return true;
        }
        return hasPathSum(root->left, sum - root->val) || hasPathSum(root->right, sum - root->val);
    }
};
