//
//  BM83.cpp
//  NowCoder
//
//  Created by 邓亚洲 on 2022/5/12.
//
//BM83 字符串变形

#include <stdio.h>
#include <string>
using namespace std;

class Solution {
        
    
public:
    string trans(string s, int n) {
        if (n == 0) {
            return s;
        }
        //大写变小写，小写变大写
        for (int i = 0; i < n; i++) {
            char temp = s[i];
            if (temp >= 'A' && temp <= 'Z') {
                temp += 32;
            } else if (temp >= 'a' && temp <= 'z') {
                temp -= 32;
            }
            s[i] = temp;
        }
        
//        reverse(s.begin() + 1, s.begin() + 3);//字符的下标从0开始，把从下标为1开始(包括下标1)到下标为3结束(不包括下标3)之间的字符倒置
        
        //"tHIS IS A SAMPLE"
        reverse(s.begin(), s.end());//倒置
        //"ELPMAS A SI SIHt"
        
        int j = 0;
        for (int i = 0; i < n-1; i++) {
            if (s[i+1] == ' ') {
                reverse(s.begin() + j, s.begin() + i+1);
                j = i + 2;
            }
        }
        reverse(s.begin() + j, s.begin() + n);
        return s;
    }
};

