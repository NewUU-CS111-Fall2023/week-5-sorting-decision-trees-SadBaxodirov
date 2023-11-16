/*
 * Author:
 * Date:
 * Name:
 */
#include <iostream>
#include <vector>
using namespace std;
void selectionSort(vector<int> &collection) {
    int n = collection.size();

    for (int i = 0; i < n - 1; ++i) {
        int minIndex = i;
        for (int j = i + 1; j < n; ++j) {
            if (collection[j] < collection[minIndex]) {
                minIndex = j;
            }
        }
        // Swap the found minimum element with the element at index i
        if (minIndex != i) {
            swap(collection[i], collection[minIndex]);
        }
    }
}
