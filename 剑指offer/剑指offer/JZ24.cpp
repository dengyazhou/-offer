//
//  JZ24.cpp
//  剑指offer
//
//  Created by 邓亚洲 on 2022/4/25.
//
//JZ24 反转链表

#include <stdio.h>

struct ListNode {
    int val;
    struct ListNode *next;
    ListNode(int x):val(x),next(NULL){}
};

class Solution {
        
public:
    ListNode* ReverseList(ListNode* pHead) {
        ListNode *pNode = NULL;
        if (pHead == NULL) return pNode;
//        while (pHead) {
//            ListNode node = ListNode(pHead->val);//直接使用ListNode(pHead->val)创建出来的结构体分配在栈上，当while执行一次循环后，压栈，栈顶指针又指向了最开始node创建的地址，所以打印一样。
//            printf("===>>>>:%p ===%d\n",&node,node.val);
//            /**
//             ===>>>>:0x7ff7bfeff1f0 ===2
//             ===>>>>:0x7ff7bfeff1f0 ===4
//             ===>>>>:0x7ff7bfeff1f0 ===6
//             ===>>>>:0x7ff7bfeff1f0 ===8
//             */
//            if (pNode == NULL) {
//                pNode = &node;
//            } else {
//                node.next = pNode;
//                pNode = &node;
//            }
//            pHead = pHead->next;
//        }
        while (pHead) {
            ListNode *node = new ListNode(pHead->val);//使用new修饰之后，会把ListNode(pHead->val)创建出来的结构体分配到堆上，然后用栈上的指针node 指向这个堆上的结构体。
            printf("===>>>>:%p ===%d\n",node,node->val);
            node->next = pNode;
            pNode = node;
            
            pHead = pHead->next;
        }
        return pNode;
    }
    
    ListNode* ReverseList1(ListNode* pHead) {
        ListNode *pHeapR = NULL;
        if (pHead == NULL) return pHeapR;
        
        ListNode *pTHeapR = NULL;
        ListNode *pNext = NULL;
     
        while (pHead) {
            pTHeapR = pHeapR;
            pHeapR = pHead;
            pNext = pHead->next;
            pHeapR->next = pTHeapR;

            pHead = pNext;
        }
        return pHeapR;
    }
};
