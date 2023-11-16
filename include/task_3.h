//
// Created by Asus on 17.11.2023.
//
#include <iostream>
#include <vector>
using namespace std;
#ifndef WEEK5_SORTING_DECISIONTREES_TASK_3_H
#define WEEK5_SORTING_DECISIONTREES_TASK_3_H
void rearrangeSoldiers(std::vector<string>& soldiers) {
    int n = soldiers.size();
    // Iterate through every second soldier
    for (int i = 0; i < n - 1; i += 2) {
        // Swap each soldier with their nearby friend
        std::swap(soldiers[i], soldiers[i + 1]);
    }

    // Display the rearranged soldiers
    std::cout << "Rearranged Soldiers: ";
    for (string soldier : soldiers) {
        std::cout << soldier << " ";
    }
    std::cout << std::endl;
}
#endif //WEEK5_SORTING_DECISIONTREES_TASK_3_H
