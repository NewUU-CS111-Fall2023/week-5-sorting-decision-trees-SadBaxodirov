/*
 * Author:
 * Date:
 * Name:
 */

#include <iostream>
#include "../include/bubbleSort.h"
#include "../include/task_2.h"
#include "../include/task_3.h"
#include "../include/task_4.h"
using namespace std;

int main() {
    cout << "Task 1" << endl;
    // call for task 1
    int n=0;
    string tmp;
    cout<<"Enter the number of books: ";
    cin>>n;
    vector<string> booksInput;
    for(int i=0;i<n;i++){
        getline(cin>>ws, tmp);
        booksInput.push_back(tmp);
        tmp = "";
    }
    vector<string> output = BubbleSort(booksInput);
    for (int i=0;i<n;i++){
        cout<<output[i]<<endl;
    }
    cout << "Task 2" << endl;
    cout<<"Enter the number of coins: ";
    cin>>n;
    vector<int> numbers;
    int number = 0;
    for (int i=0;i<n;i++){
        cin>>number;
        numbers.push_back(number);
    }
    selectionSort(numbers);
    for (int i=0;i<n;i++){
        cout<<numbers[i]<<endl;
    }
    // call for task 2
    cout << "Task 3" << endl;
    // call for task 3
    tmp = "";
    cout<<"Enter the number of soldiers: ";
    cin>>n;
    vector<string> soldiers;
    for(int i=0;i<n;i++){
        getline(cin>>ws, tmp);
        soldiers.push_back(tmp);
        tmp = "";
    }
    rearrangeSoldiers(soldiers);
    cout << "Task 4" << endl;
    // call for task 4
    cout<<"Enter the number of elements: ";
    cin>>n;
    int size = n;
    int arr[n];
    for (int i=0;i<n;i++){
        cin>>n;
        arr[i] = n;
    }
    cout<<countElements(arr, size)<<endl;
    cout << "Task 5" << endl;
    // call for task 5
    return 0;
}
