//
//  BM42.cpp
//  NowCoder
//
//  Created by 邓亚洲 on 2022/5/9.
//
//BM42 用两个栈实现队列

#include <stdio.h>
//stack 需要导入<stack>
#include <stack>
using namespace std;


class Solution {
    
public:
    void push(int node) {
        stack1.push(node);
    }
    
    int pop() {
        int ret = 0;
        while (!stack1.empty()) {
            stack2.push(stack1.top());
            stack1.pop();
        }
        ret = stack2.top();
        stack2.pop();
        while (!stack2.empty()) {
            stack1.push(stack2.top());
            stack2.pop();
        }
        return ret;
    }
    
private:
    stack<int> stack1;
    stack<int> stack2;
};
