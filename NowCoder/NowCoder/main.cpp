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

//#include "BM17.cpp"
//#include "BM23.cpp"
//#include "BM26.cpp"
//#include "BM27.cpp"
//#include "BM28.cpp"
//#include "BM29.cpp"
//#include "BM31.cpp"
//#include "BM42.cpp"
//#include "BM43.cpp"
//#include "BM44.cpp"
//#include "BM47.cpp"
//#include "BM50.cpp"
//#include "BM51.cpp"
#include "BM83.cpp"
//#include "BM87.cpp"
//#include "BM88.cpp"
//#include "BM91.cpp"

//#include "AB30.cpp"

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
    
#pragma mark BM17 二分查找-I
//    vector<int> nums  = {0,1,3,4,6,10,13,14};
//    Solution solu;
//    int ret = solu.search(nums, 10);
//    printf("%d\n",ret);
    
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
    
#pragma mark BM42 用两个栈实现队列
//    Solution solu;
//    solu.push(2);
//    solu.push(3);
//    solu.push(4);
//    printf("%d\n",solu.pop());
//    printf("%d\n",solu.pop());
//    printf("%d\n",solu.pop());
    
#pragma mark BM43 包含min函数的栈
//    Solution solu;
//    solu.push(-1);
//    solu.push(2);
//    printf("%d\n",solu.min());
//    printf("%d\n",solu.top());
//    solu.pop();
//    solu.push(1);
//    solu.top();
//    printf("%d\n",solu.top());
//    printf("%d\n",solu.min());
    
#pragma mark BM44 有效括号序列
//    string str = "]";
//    Solution solu;
//    printf("%d\n",solu.isValid(str));
    
#pragma mark BM47 寻找第K大
//    vector<int> a = {1,3,5,2,2};
//    Solution solu;
//    cout << solu.findKth(a, (int)a.size(), 3) << endl;
    
    
#pragma mark BM50 两数之和
//    vector<int> numbers = {3,2,4};
//    Solution solu;
//    vector<int> res = solu.twoSum(numbers, 6);
//    for (int i = 0; i < res.size(); i++) {
//        printf("%d ",res[i]);
//    }
//    printf("\n");
    
#pragma mark BM51 数组中出现次数超过一半的数字
//    vector<int> numbers = {1,2,3,2,2,2,5,4,2};
//    Solution solu;
//    int ret = solu.MoreThanHalfNum_Solution(numbers);
//    printf("%d\n",ret);
    
#pragma mark BM83 字符串变形
    string s = "This is a sample";
    Solution solu;
    cout << solu.trans(s, (int)s.size()) << endl;
    
#pragma mark BM87 合并两个有序的数组
//    int A[7] = {4,5,6};
//    int B[] = {1,2,3,7};
//    Solution solu;
//    solu.merge(A, 3, B, 4);
    
#pragma mark BM88 判断是否为回文字符串
//    string str = "abaxba";
//    Solution solu;
//    cout << solu.judge(str) << endl;
    
#pragma mark BM91 反转字符串
//    string str = "abcd";
//    Solution solu;
//    cout << solu.solve(str) << endl;

#pragma mark AB30 排序
//    vector<int> arr = {3,2,1,10,7,8,4,6,3};
//    Solution solu;
//    vector<int> res = solu.MySort(arr);
//    for (int i =0; i < res.size(); i++) {
//        printf("%d ",res[i]);
//    }
//    printf("\n");
    
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
