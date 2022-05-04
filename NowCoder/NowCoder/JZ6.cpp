//
//  JZ6.cpp
//  NowCoder
//
//  Created by 邓亚洲 on 2022/4/25.
//
//JZ6 从尾到头打印链表

#include <stdio.h>
//vector 需要引入 <vector>
#include <vector>
using namespace std;

struct ListNode {
    int val;
    struct ListNode *next;
    ListNode(int x):val(x),next(NULL) {} //使用参数初始化列表来初始化字段
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
