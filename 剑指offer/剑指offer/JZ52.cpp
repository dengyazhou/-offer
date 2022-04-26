//
//  JZ52.cpp
//  剑指offer
//
//  Created by 邓亚洲 on 2022/4/26.
//
//JZ52 两个链表的第一个公共结点

#include <stdio.h>

struct ListNode {
    int val;
    struct ListNode *next;
    ListNode(int x):val(x), next(NULL){}
};

class Solution {
    
    
public:
    
    
    ListNode* FindFirstCommonNode(ListNode* pHead1, ListNode* pHead2) {
        ListNode *pHeadR = NULL;
        
        if (pHead1 == NULL || pHead2 == NULL) return pHeadR;
        
        //倒置pHead1->pHead1R
        ListNode *pHead1R = ReverseList(pHead1);
        
        //倒置pHead2->pHead2R
        ListNode *pHead2R = ReverseList(pHead2);
        
        ListNode *pHeadT = NULL;
        ListNode *pNext = NULL;
        while (pHead1R && pHead2R) {
            pNext = pHead1R->next;
            if (pHead1R->val == pHead2R->val) {
                pHeadT = pHeadR;
                pHeadR = pHead1R;
                pHeadR->next = pHeadT;
            } else {
                break;
            }
            
            pHead1R = pNext;
            pHead2R = pHead2R->next;
        }
        
        return pHeadR;
    }
    
    
    ListNode* ReverseList(ListNode* pHead) {
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
