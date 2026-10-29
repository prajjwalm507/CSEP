#include<iostream>
#include<vector>
using namespace std;

int partition(vector<int> &numbers, int low, int high){
    int pivot=numbers[high];
    int smallerindex=low-1;

    for(int current = low; current<high; current++){
        if(numbers[current]<=pivot){
            smallerindex++;
            swap(numbers[smallerindex], numbers[current]);
        }
    }
    swap(numbers[smallerindex+1], numbers[high]);
    return smallerindex+1;
}
 void quicksort(vector<int>&numbers, int low, int high){
     if(low >= high){
        return;
 }
 int pivotindex = partition(numbers, low, high);
 quicksort(numbers, low, pivotindex-1);
 quicksort(numbers, pivotindex + 1, high);
}

int main(){
    vector<int> numbers={6, 8, 9, 2,3,5};

    quicksort(numbers, 0, static_cast<int>(numbers.size())-1);
    cout << "Sort numbers : ";
    for(int number : numbers){
        cout << number << " ";
    }
    cout << "\n";
    return 0;
}