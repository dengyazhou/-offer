//
//  main.cpp
//  剑指offer
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
#include "JZ52.cpp"



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
    ListNode nodeR = ListNode(1);
    ListNode nodeR1 = ListNode(2);
    ListNode nodeR2 = ListNode(3);
    ListNode nodeR3 = ListNode(6);
    ListNode nodeR4 = ListNode(7);
    nodeR.next = &nodeR1;
    nodeR1.next = &nodeR2;
    nodeR2.next = &nodeR3;
    nodeR3.next = &nodeR4;
    
    ListNode nodeL = ListNode(4);
    ListNode nodeL1 = ListNode(5);
    ListNode nodeL2 = ListNode(6);
    ListNode nodeL3 = ListNode(7);
    nodeL.next = &nodeL1;
    nodeL1.next = &nodeL2;
    nodeL2.next = &nodeL3;
    
    Solution solu;
    ListNode *pHead = solu.FindFirstCommonNode(&nodeR, &nodeL);
    while (pHead) {
        printf("%d\n",pHead->val);
        pHead = pHead->next;
    }
    
}
