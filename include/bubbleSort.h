//
// Created by Sayidabdullaxon Baxodirov on 13.11.2023.
//

#ifndef WEEK5_SORTING_DECISIONTREES_BUBBLESORT_H
#define WEEK5_SORTING_DECISIONTREES_BUBBLESORT_H
#include <iostream>
#include <vector>
using namespace std;
vector<string> BubbleSort(vector<string> books){
    string tmp = "";
    for (int j=0;j<books.size();j++){
        for (int i=0;i<books.size()-j-1;i++){
            if (books[i][0]>books[i+1][0]){
                tmp = books[i+1];
                books[i+1] = books[i];
                books[i] = tmp;
            }
        }
    }
    return books;
}
#endif //WEEK5_SORTING_DECISIONTREES_BUBBLESORT_H
