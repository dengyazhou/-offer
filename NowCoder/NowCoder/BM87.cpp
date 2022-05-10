//
//  BM87.cpp
//  NowCoder
//
//  Created by 邓亚洲 on 2022/5/10.
//
//BM87 合并两个有序的数组

#include <stdio.h>

class Solution {
        
    
public:
    void merge(int A[], int m, int B[], int n) {
        //从后到前，把大值放在A的最后，然后往前推进
        int pA = m - 1;
        int pB = n - 1;
        int pC = m + n - 1;
        while (pB >= 0 && pA >= 0) {
            if (A[pA] >= B[pB]) {
                A[pC] = A[pA];
                pA--;
            } else {
                A[pC] = B[pB];
                pB--;
            }
            pC--;
        }

        while (pB >= 0) {
            A[pC] = B[pB];
            pC--;
            pB--;
        }
    }
};

