/*
 * Author:
 * Date:
 * Name:
 */

#include <iostream>
#include "../include/task_2.h"
#include "../include/bubbleSort.h"
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
    // call for task 2
    cout << "Task 3" << endl;
    // call for task 3
    cout << "Task 4" << endl;
    // call for task 4
    cout << "Task 5" << endl;
    // call for task 5
    return 0;
}
