//
// Created by Asus on 16.11.2023.
//
#include<iostream>
#include <vector>
using namespace std;
#ifndef WEEK5_SORTING_DECISIONTREES_TASK_4_H
#define WEEK5_SORTING_DECISIONTREES_TASK_4_H
int countElements(int arr[], int size) {
    int count = 0;

    for (int i = 0; i < size - 1; ++i) {
        if (*(arr+i) > *(arr+(i - 1)) && *(arr+i) > *(arr+(i + 1))) {
            // Both adjacent elements are smaller than the current element
            ++count;
        }
    }

    return count;
}
#endif //WEEK5_SORTING_DECISIONTREES_TASK_4_H
