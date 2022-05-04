//
//  JZ25.cpp
//  剑指offer
//
//  Created by 邓亚洲 on 2022/4/26.
//
//JZ25 合并两个排序的链表

#include <stdio.h>

struct ListNode {
    int val;
    struct ListNode *next;
    ListNode(int x):val(x),next(NULL) {} //使用参数初始化列表来初始化字段
};

class Solution {
        
    
public:
    ListNode* Merge(ListNode* pHead1, ListNode* pHead2) {
        ListNode *pHead = NULL;
        ListNode *pTNext = NULL;
        ListNode *pNext1 = NULL;
        ListNode *pNext2 = NULL;
        while (pHead1 || pHead2) {
            if (pHead1 == NULL && pHead2 != NULL) {
                goto goHead2;
            } else if (pHead1 != NULL && pHead2 == NULL) {
                goto goHead1;
            } else {
                if (pHead1->val < pHead2->val) {
                    goto goHead1;
                } else {
                    goto goHead2;
                }
            }
            
        goHead1:
            pNext1 = pHead1->next;
            if (pHead == NULL) {
                pHead = pHead1;
                pHead->next = NULL;
                pTNext = pHead;
            } else {
                pTNext->next = pHead1;
                pHead1->next = NULL;
                pTNext = pTNext->next;
            }
            pHead1 = pNext1;
            continue;
        
        goHead2:
            pNext2 = pHead2->next;
            if (pHead == NULL) {
                pHead = pHead2;
                pHead->next = NULL;
                pTNext = pHead;
            } else {
                pTNext->next = pHead2;
                pHead2->next = NULL;
                pTNext = pTNext->next;
            }
            pHead2 = pNext2;
        }
        return pHead;
    }
};
