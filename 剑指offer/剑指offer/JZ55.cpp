//
//  JZ55.cpp
//  剑指offer
//
//  Created by 邓亚洲 on 2022/5/2.
//
//JZ55 二叉树的深度

#include <stdio.h>
//max 函数需要引入 <algorithm>
#include <algorithm>
//using namespace std; max 和 std::max 等价
using namespace std;


struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
    TreeNode(int x):val(x),left(NULL),right(NULL) {} //使用参数初始化列表来初始化字段
};

class Solution {
    
    
public:
    int TreeDepth(TreeNode* pRoot) {
        if (pRoot == NULL) { return 0; }
        
        return max(TreeDepth(pRoot->left),TreeDepth(pRoot->right)) + 1;
    }
};
