//
//  main.cpp
//  NowCoder
//
//  Created by 邓亚洲 on 2022/4/25.
//

/**
 1、macOS -> Application -> Command Line Tool -> Language 选C++
 */

#include <iostream>
//#include "JZ6.cpp"
//#include "JZ24.cpp"
//#include "JZ25.cpp"
//#include "JZ52.cpp"

//#include "BM23.cpp"
//#include "BM26.cpp"
//#include "BM27.cpp"
//#include "BM28.cpp"
//#include "BM29.cpp"
//#include "BM31.cpp"

#include "AB30.cpp"

//#include "YZ1.cpp"



int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    
    
#pragma mark JZ6 从尾到头打印链表
//    ListNode node = ListNode(2);
//    ListNode node1 = ListNode(4);
//    ListNode node2 = ListNode(6);
//    ListNode node3 = ListNode(8);
//    node.next = &node1;
//    node1.next = &node2;
//    node2.next = &node3;
//
//    Solution solu;
//    vector<int>obj = solu.printListFromTailToHead(&node);
//    for (int i = 0; i<obj.size(); i++) {
//        int temp = obj.at(i);
//        printf("%d\n",temp);
//    }
    
    
#pragma mark JZ24 反转链表
//    ListNode node = ListNode(2);
//    ListNode node1 = ListNode(4);
//    ListNode node2 = ListNode(6);
//    ListNode node3 = ListNode(8);
//    node.next = &node1;
//    node1.next = &node2;
//    node2.next = &node3;
//    Solution solu;
//    ListNode *pHead = solu.ReverseList1(&node);
//    while (pHead) {
//        printf("%d\n",pHead->val);
//        pHead = pHead->next;
//    }
//    return 0;
    
#pragma mark JZ25 合并两个排序的链表
//    ListNode nodeR = ListNode(2);
//    ListNode nodeR1 = ListNode(4);
//    ListNode nodeR2 = ListNode(5);
//    nodeR.next = &nodeR1;
//    nodeR1.next = &nodeR2;
//
//    ListNode nodeL = ListNode(2);
//    ListNode nodeL1 = ListNode(3);
//    ListNode nodeL2 = ListNode(6);
//    nodeL.next = &nodeL1;
//    nodeL1.next = &nodeL2;
//    
//    Solution solu;
//    ListNode *pHead = solu.Merge(&nodeR, &nodeL);
//    while (pHead) {
//        printf("%d\n",pHead->val);
//        pHead = pHead->next;
//    }
    
#pragma mark JZ52 两个链表的第一个公共结点
//    ListNode nodeR = ListNode(1);
//    ListNode nodeR1 = ListNode(2);
//    ListNode nodeR2 = ListNode(3);
//    ListNode nodeR3 = ListNode(6);
//    ListNode nodeR4 = ListNode(7);
//    nodeR.next = &nodeR1;
//    nodeR1.next = &nodeR2;
//    nodeR2.next = &nodeR3;
//    nodeR3.next = &nodeR4;
//
//    ListNode nodeL = ListNode(4);
//    ListNode nodeL1 = ListNode(5);
//    ListNode nodeL2 = ListNode(6);
//    ListNode nodeL3 = ListNode(7);
//    nodeL.next = &nodeL1;
//    nodeL1.next = &nodeL2;
//    nodeL2.next = &nodeL3;
//
//    Solution solu;
//    ListNode *pHead = solu.FindFirstCommonNode(&nodeR, &nodeL);
//    while (pHead) {
//        printf("%d\n",pHead->val);
//        pHead = pHead->next;
//    }
    
#pragma mark BM23 二叉树的前序遍历
//    TreeNode *node3 = new TreeNode(3);
//    TreeNode *node2 = new TreeNode(2);
//    TreeNode *node1 = new TreeNode(1);
//    node1->right = node2;
//    node2->left = node3;
//    Solution solu;
//    vector<int> obj = solu.preorderTraversal(node1);
//    for (int i = 0; i < obj.size(); i++) {
//        int temp = obj.at(i);
//        printf("%d\n",temp);
//    }
    
#pragma mark BM26 求二叉树的层序遍历
//    TreeNode *node5 = new TreeNode(7);
//    TreeNode *node4 = new TreeNode(15);
//    TreeNode *node3 = new TreeNode(20);
//    TreeNode *node2 = new TreeNode(9);
//    TreeNode *node1 = new TreeNode(3);
//    node1->left = node2;
//    node1->right = node3;
//    node3->left = node4;
//    node3->right = node5;
//    Solution solu;
//    vector<vector<int>> obj = solu.levelOrder(node1);
//    for (int i = 0; i < obj.size(); i++) {
//        vector<int> item = obj[i];
//        for (int j = 0; j < item.size(); j++) {
//            printf("%d ",item[j]);
//        }
//        printf("\n");
//    }
    
#pragma mark BM27 按之字形顺序打印二叉树
//    TreeNode *node5 = new TreeNode(5);
//    TreeNode *node4 = new TreeNode(4);
//    TreeNode *node3 = new TreeNode(3);
//    TreeNode *node2 = new TreeNode(2);
//    TreeNode *node1 = new TreeNode(1);
//    node1->left = node2;
//    node1->right = node3;
//    node3->left = node4;
//    node3->right = node5;
//    Solution solu;
//    vector<vector<int>> list = solu.print(node1);
//    for (int i = 0; i < list.size(); i++) {
//        vector<int> item = list[i];
//        for (int j = 0; j < item.size(); j++) {
//            printf("%d ",item[j]);
//        }
//        printf("\n");
//    }
    
#pragma mark BM28 二叉树的最大深度
//    TreeNode *node7 = new TreeNode(7);
//    TreeNode *node6 = new TreeNode(6);
//    TreeNode *node5 = new TreeNode(5);
//    TreeNode *node4 = new TreeNode(4);
//    TreeNode *node3 = new TreeNode(3);
//    TreeNode *node2 = new TreeNode(2);
//    TreeNode *node1 = new TreeNode(1);
//    node1->left = node2;
//    node1->right = node3;
//    node2->left = node4;
//    node2->right = node5;
//    node3->right = node6;
//    node5->left = node7;
//    Solution solu;
//    int depth = solu.maxDepth(node1);
//    printf("%d\n",depth);
    
#pragma mark BM29 二叉树中和为某一值的路径(一)
//    TreeNode *node8 = new TreeNode(7);
//    TreeNode *node7 = new TreeNode(2);
//    TreeNode *node6 = new TreeNode(9);
//    TreeNode *node5 = new TreeNode(11);
//    TreeNode *node4 = new TreeNode(1);
//    TreeNode *node3 = new TreeNode(8);
//    TreeNode *node2 = new TreeNode(4);
//    TreeNode *node1 = new TreeNode(5);
//    node1->left = node2;
//    node1->right = node3;
//    node2->left = node4;
//    node2->right = node5;
//    node3->right = node6;
//    node5->left = node7;
//    node5->right = node8;
//    Solution solu;
//    bool ret = solu.hasPathSum(node1, 22);
//    printf("%d\n",ret);
    
#pragma mark BM31 对称的二叉树
//    TreeNode *node7 = new TreeNode(3);
//    TreeNode *node6 = new TreeNode(4);
//    TreeNode *node5 = new TreeNode(4);
//    TreeNode *node4 = new TreeNode(3);
//    TreeNode *node3 = new TreeNode(2);
//    TreeNode *node2 = new TreeNode(2);
//    TreeNode *node1 = new TreeNode(1);
//    node1->left = node2;
//    node1->right = node3;
//    node2->left = node4;
//    node2->right = node5;
//    node3->left = node6;
//    node3->right = node7;
//    Solution solu;
//    bool ret = solu.isSymmetrical(node1);
//    printf("%d\n",ret);
    
#pragma mark AB30 排序
    vector<int> arr = {3,2,1,10,7,8,4,6,3};
//    vector<int> arr = {1,2};
    Solution solu;
    vector<int> res = solu.MySort(arr);
    for (int i =0; i < res.size(); i++) {
        printf("%d ",res[i]);
    }
    printf("\n");
    
#pragma mark YZ1 二叉树的Paths
//    TreeNode *node8 = new TreeNode(7);
//    TreeNode *node7 = new TreeNode(2);
//    TreeNode *node6 = new TreeNode(9);
//    TreeNode *node5 = new TreeNode(11);
//    TreeNode *node4 = new TreeNode(1);
//    TreeNode *node3 = new TreeNode(8);
//    TreeNode *node2 = new TreeNode(4);
//    TreeNode *node1 = new TreeNode(5);
//    node1->left = node2;
//    node1->right = node3;
//    node2->left = node4;
//    node2->right = node5;
//    node3->right = node6;
//    node5->left = node7;
//    node5->right = node8;
//    Solution solu;
//    vector<vector<int>> res = solu.printTreePaths(node1);
//    for (int i = 0; i < res.size(); i++) {
//        vector<int> item = res[i];
//        for (int j = 0; j < item.size(); j++) {
//            printf("%d ",item[j]);
//        }
//        printf("\n");
//    }
}
