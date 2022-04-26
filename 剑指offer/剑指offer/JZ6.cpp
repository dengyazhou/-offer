//
//  JZ6.cpp
//  剑指offer
//
//  Created by 邓亚洲 on 2022/4/25.
//
//JZ6 从尾到头打印链表

#include <stdio.h>

#include <vector>
using namespace std;

struct ListNode {
    int val;
    struct ListNode *next;
    ListNode(int x):val(x),next(NULL) {}
};

class Solution {
    
public:
    vector<int> printListFromTailToHead(ListNode* head) {
        vector<int>list;
        if (head == NULL) return list;
        while (head) {
            list.insert(list.begin(), head->val);
            head = head->next;
        }
        return list;
    }
};
