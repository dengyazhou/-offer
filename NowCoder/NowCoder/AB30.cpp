//
//  AB30.cpp
//  NowCoder
//
//  Created by 邓亚洲 on 2022/5/5.
//
//AB30 排序

#include <stdio.h>
#include <vector>
using namespace std;

class Solution {
    
    
public:
    //快速排序
    void quickSort(vector<int>& arr,int begin, int end) {
        if (begin > end) {
            return;
        }
        int temp = arr[begin];
        int i = begin;
        int j = end;
        
        while (i != j) {
            while (arr[j] >= temp && j > i) {//从右往左找小于temp的数
                j--;
            }
            while (arr[i] <= temp && j > i) {//从左往右找大于temp的数
                i++;
            }
            if (j > i) {
                swap(arr[i], arr[j]);
            }
        }
        swap(arr[begin], arr[i]);

        quickSort(arr, begin, i-1);
        quickSort(arr, i+1, end);
        
    }
    
    
    //拆分
    void chaiFen(vector<int>& arr, int begin, int end) {
        int mid = (begin + end)/2;
        if (begin < end) {
            chaiFen(arr, begin, mid);
            chaiFen(arr, mid+1, end);
            guiBing(arr, begin, mid, end);
        }
    }
    
    //归并
    void guiBing(vector<int>& arr, int begin, int mid, int end) {
        vector<int> temp;
        int p0 = begin;
        int p1 = mid + 1;
        while (p0 <= mid && p1 <= end ) {
            if (arr[p0] > arr[p1]) {
                temp.push_back(arr[p1]);
                p1++;
            } else {
                temp.push_back(arr[p0]);
                p0++;
            }
        }
        //剩余元素处理
        while (p0 <= mid) {
            temp.push_back(arr[p0]);
            p0++;
        }
        while (p1 <= end) {
            temp.push_back(arr[p1]);
            p1++;
        }
        //把temp中的元素，赋值到arr中相应的位置
        for (int i = 0; i < temp.size(); i++) {
            arr[begin + i] = temp[i];
        }
    }
    
    vector<int> MySort(vector<int>& arr) {
#pragma mark 交换类排序法 1、冒泡排序法
        //在数据元素的序列中,对于某个元素，如果其后存 在一个元素小于它,则称之为存在一个逆序。 冒泡排序的基本思想就是通过两两相邻数据元素之间的比较和交换,不断地消去逆序，直到所有数据元素有序为止。
//        for (int i = 0; i < arr.size()-1; i++) {
//            //控制循环次数，每循环一次都会把最大的放在最后面
//            //判断条件减一是因为循环一次就把最大的放在了最后，所以在最后一次循环的时候已经把n-1个大数放在后面了，所以最后一次循环没必要走了
//            for (int j = 0; j < arr.size()-1-i; j++) {//arr.size()-1是因为下面出现了j+1，防止数组越界
//                if (arr[j] > arr[j+1]) {
//                    int temp = arr[j];
//                    arr[j] = arr[j+1];
//                    arr[j+1] = temp;
//                }
//            }
//
//        }
//        return arr;
        
#pragma mark 交换类排序法 2、快速排序
//        quickSort(arr, 0, (int)arr.size()-1);
//        return arr;
        
#pragma mark 插入类排序法 1、简单插入排序
        //简单插人排序是把n个待排序的元素看成是一个有序表和一个无序表,开始时,有序表只包含一个元素，而无序表包含另外n-1个元素，每次取无序表中的第一个元素插人到有序表中的正确位置,使之成为增加一个元素的新的有序表。插入元素时，插入位置及其后的记录依次向后移动。最后有序表的长度为n，而无序表为空，此时排序完成。
//        for (int i = 0; i < arr.size(); i++) {
//
//            for (int j = 0; j < i; j++) {
//                if (arr[i] < arr[j]) {
//                    int temp = arr[i];
//                    arr.erase(arr.begin()+i);
//                    arr.insert(arr.begin()+j, temp);
//                }
//            }
//        }
//        return arr;
        
#pragma mark 插入类排序法 2、希尔排序
    
        
#pragma mark 选择类排序法 1、简单选择排序法
        //基本思想:先从所有n个待排序的数据元素中选择最小的元素，将该元素与第1个元素交换,再从剩下的n-1个元素中选出最小的元素与第2个元素交换。重复这样的操作直到所有的元素有序为止。
//        for (int i = 0; i < arr.size(); i++) {
//            int minIndex = i;
//            for (int j = i; j < arr.size(); j++) {
//                if (arr[minIndex] > arr[j]) {
//                    minIndex = j;
//                }
//            }
//            int temp = arr[i];
//            arr[i] = arr[minIndex];
//            arr[minIndex] = temp;
//        }
//        return arr;
        
        
#pragma mark 选择类排序法 2、堆排序法
        
        
#pragma mark 归并排序
        chaiFen(arr, 0, (int)arr.size()-1);
        return arr;
    }

};
