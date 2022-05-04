//
//  BM31.cpp
//  NowCoder
//
//  Created by 邓亚洲 on 2022/5/3.
//
//BM31 对称的二叉树

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
    void preorderLeft(vector<int>& res, TreeNode* pRoot) {
        if (pRoot == NULL) {
            res.push_back(NULL);//是为了解决 {1,2,#} 和 {1,#,2}
            return;
        }
        res.push_back(pRoot->val);
        preorderLeft(res, pRoot->left);
        preorderLeft(res, pRoot->right);
    }
    
    void preorderRight(vector<int>& res, TreeNode* pRoot) {
        if (pRoot == NULL) {
            res.push_back(NULL);
            return;
        }
        res.push_back(pRoot->val);
        preorderRight(res, pRoot->right);
        preorderRight(res, pRoot->left);
    }
    
    bool isSymmetrical(TreeNode* pRoot) {
        if (pRoot == NULL) {
            return true;
        }
        vector<int> resLeft;
        preorderLeft(resLeft, pRoot);
        vector<int> resRight;
        preorderRight(resRight, pRoot);
        if (resLeft == resRight) {
            return true;
        }
        return false;
    }
};
