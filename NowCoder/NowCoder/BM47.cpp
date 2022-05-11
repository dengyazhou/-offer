//
//  BM47.cpp
//  NowCoder
//
//  Created by 邓亚洲 on 2022/5/11.
//
//BM47 寻找第K大

#include <stdio.h>
#include <vector>
using namespace std;

class Solution {
        
    
public:
    //其实就是快速排序的一个变种
    int quickSork(vector<int>& a, int begin, int end, int n, int k) {
        int temp = a[begin];
        int i = begin;
        int j = end;
        
        while (i != j) {
            while (a[j] >= temp && j > i) {
                j--;
            }
            while (a[i] <= temp && j > i) {
                i++;
            }
            if (j > i) {
                swap(a[i], a[j]);
            }
        }
        swap(a[begin], a[i]);
        if (i == n - k) {
            return a[i];
        } else if (i > n - k) {
            return quickSork(a, begin, i - 1, n, k);
        } else {
            return quickSork(a, i + 1, end, n, k);
        }
    }
    
    int findKth(vector<int> a, int n, int k) {
        return quickSork(a, 0, n-1, n, k);
    }
};

