//
//  BM51.cpp
//  NowCoder
//
//  Created by 邓亚洲 on 2022/5/9.
//
//BM51 数组中出现次数超过一半的数字

#include <stdio.h>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
    
    
public:
    int MoreThanHalfNum_Solution(vector<int> numbers) {
        int ret = 0;
        unordered_map<int, int> hashmap;//key为元素值，value为出现次数
        for (int i = 0; i < numbers.size(); i++) {
            if (hashmap.find(numbers[i]) == hashmap.end()) {//不存在
                hashmap[numbers[i]] = 1;
            } else {
                hashmap[numbers[i]] += 1;
            }
            if (hashmap[numbers[i]] > numbers.size()/2) {
                ret = numbers[i];
                return ret;
            }
        }
        return ret;
    }
};
