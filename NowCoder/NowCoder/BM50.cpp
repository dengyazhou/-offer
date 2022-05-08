//
//  BM50.cpp
//  NowCoder
//
//  Created by 邓亚洲 on 2022/5/8.
//
//BM50 两数之和

#include <stdio.h>
#include <vector>
#include <unordered_map>
using namespace std;


class Solution {
    
    
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
#pragma mark 解法一：暴力解法
//        vector<int> res;
//        for (int i = 0; i < numbers.size()-1; i++) {
//            int temp = target - numbers[i];
//            for (int j =  i+1; j < numbers.size(); j++) {
//                if (temp - numbers[j] == 0) {
//                    res.push_back(++i);
//                    res.push_back(++j);
//                    return res;
//                }
//            }
//        }
//        return res;
        
#pragma mark 解法二：哈希表
        vector<int> res;
        unordered_map<int, int> hashmap;
        for (int i = 0; i < numbers.size(); i++) {
            if (hashmap.find(target-numbers[i]) != hashmap.end()) {//存在
                res.push_back(hashmap[target-numbers[i]]);
                res.push_back(++i);
            } else {
                hashmap[numbers[i]] = i+1;
            }
        }
        
        return res;
    }
    
};
