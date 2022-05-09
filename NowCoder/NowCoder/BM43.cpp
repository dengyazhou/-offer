//
//  BM43.cpp
//  NowCoder
//
//  Created by 邓亚洲 on 2022/5/9.
//
//BM43 包含min函数的栈

#include <stdio.h>

//stack 需要导入<stack>
#include <stack>
using namespace std;

//方式一
//class Solution {
//
//public:
//    void push(int value) {
//        stack1.push(value);
//    }
//    void pop() {
//        stack1.pop();
//    }
//    int top() {
//        return stack1.top();
//    }
//
//    int min() {
//        stack<int> stack2;
//        int minNum = stack1.top();
//        while (!stack1.empty()) {
//            if (minNum > stack1.top()) {
//                minNum = stack1.top();
//            }
//            stack2.push(stack1.top());
//            stack1.pop();
//        }
//        while (!stack2.empty()) {
//            stack1.push(stack2.top());
//            stack2.pop();
//        }
//        return minNum;
//    }
//
//private:
//    stack<int> stack1;
//};

//方法二
class Solution {
    
public:
    void push(int value) {
        stack1.push(value);
        if (stack2.empty() || stack2.top() > value) {
            stack2.push(value);
        } else {
            stack2.push(stack2.top());
        }
    }
    void pop() {
        stack1.pop();
        stack2.pop();
    }
    int top() {
        return stack1.top();
    }
    
    int min() {
        return stack2.top();
    }
    
private:
    stack<int> stack1;
    stack<int> stack2;//用于存储最小min
};

