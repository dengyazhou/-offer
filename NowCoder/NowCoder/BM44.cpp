//
//  BM44.cpp
//  NowCoder
//
//  Created by 邓亚洲 on 2022/5/9.
//
//BM44 有效括号序列

#include <stdio.h>
//string 需要导入<string>
#include <string>
#include <stack>
using namespace std;

class Solution {
        
    
public:
    
    
    bool isValid(string s) {
        stack<char> stack1;
        for (int i = 0; i < s.size(); i++) {
            switch (s[i]) {
                case '{':
                case '(':
                case '[':
                    stack1.push(s[i]);
                    break;
                case '}':{
                    if (stack1.size() > 0 && '{' == stack1.top()) {//为什么需要先判断stack是否为空，因为如果为空，调用top() 会崩溃
                        stack1.pop();
                    } else {
                        return false;
                    }
                    break;
                }
                case ')':{
                    if (stack1.size() > 0 && '(' == stack1.top()) {
                        stack1.pop();
                    } else {
                        return false;
                    }
                    break;
                }
                case ']':{
                    if (stack1.size() > 0 && '[' == stack1.top()) {
                        stack1.pop();
                    } else {
                        return false;
                    }
                    break;
                }
                default:
                    break;
            }
        }
        return stack1.empty();
    }
    
};
