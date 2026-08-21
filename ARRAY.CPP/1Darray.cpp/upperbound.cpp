#include<iostream>
using namespace std;
int main() {
    int n,i, key;

    cout << "Enter size of array: ";
    cin >> n;

    int a[n];

    cout << "Enter Sorted array elements: ";
    for (int i = 0; i < n; i++)
        cin >> a[i];
    cout<<"Enter the elements to find upper bound : ";
    cin>>key;
    int low=0, high=n-1, ub=-1;
        while(low<=high){
        int mid=low+(high-low)/2;
        if(a[mid]>key){
            ub=mid;
            high=mid-1;
        }
        else
        low=mid+1;
        }
        if(ub!=-1)
    cout<<"Upper Bound of the Element is at index : "<<ub;
    else 
    cout<<"Upper Bound of the Element is at index : "<< n;
        return 0;
} 