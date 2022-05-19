//
//  BM6.cpp
//  NowCoder
//
//  Created by 邓亚洲 on 2022/5/19.
//
//BM6 判断链表中是否有环

#include <stdio.h>
#include <unordered_map>
using namespace std;

struct ListNode {
    int val;
    struct ListNode *next;
    ListNode(int x):val(x), next(NULL) {} //使用参数初始化列表来初始化字段
};

class Solution {
    
    
public:
    
#pragma mark 哈希表
    bool hasCycle(ListNode *head) {
        unordered_map<ListNode *, int> hashmap;
        bool hasCycle = false;
        while (head) {
            if (hashmap.find(head) == hashmap.end()) {// 元素不存在
                hashmap[head] = 1;
            } else {
                hashmap[head]++;
                if (hashmap[head] >= 2) {
                    hasCycle = true;
                    break;
                }
            }
            head = head->next;
        }
        return hasCycle;
    }
    
#pragma mark 快慢指针
//    bool hasCycle(ListNode *head) {
//
//        return true;
//    }
};
