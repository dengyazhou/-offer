//
//  BM91.cpp
//  NowCoder
//
//  Created by 邓亚洲 on 2022/5/10.
//
//BM91 反转字符串

#include <stdio.h>
#include <string>
using namespace std;

class Solution {
    
    
public:
    string solve(string str) {
        int p1 = 0;
        int p2 = (int)str.size() - 1;
        while (p1 <= p2) {
            if (p1 == p2) {
                return str;
            } else {
                if (str[p1] != str[p2]) {
                    swap(str[p1], str[p2]);
                }
                p1++;
                p2--;
            }
        }
        return str;
    }
};
