//
//  BM17.cpp
//  NowCoder
//
//  Created by 邓亚洲 on 2022/5/7.
//
//BM17 二分查找-I

#include <stdio.h>
#include <vector>
using namespace std;

class Solution {
    
public:
    int binarySearch(vector<int>& nums, int begin, int end, int target) {
        if (begin > end) {
            return -1;
        }
        int mid = (end - begin)/2 + begin;
        if (nums[mid] == target) {
            return mid;
        } else if (nums[mid] > target) {
            return binarySearch(nums, begin, mid-1, target);
        } else {
            return binarySearch(nums, mid+1, end, target);
        }
    }
    
    int search(vector<int>& nums, int target) {
        return binarySearch(nums, 0, (int)nums.size()-1, target);
    }
};
