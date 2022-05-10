//
//  BM88.cpp
//  NowCoder
//
//  Created by 邓亚洲 on 2022/5/10.
//
//BM88 判断是否为回文字符串

#include <stdio.h>
#include <string>
using namespace std;

class Solution {
    
    
public:
    bool judge(string str) {
        int p1 = 0;
        int p2 = (int)str.size() - 1;
        while (p1 <= p2) {
            if (p1 == p2) {
                return true;
            } else {
                if (str[p1] != str[p2]) {
                    return false;
                }
                p1++;
                p2--;
            }
        }
        return true;
    }
};
