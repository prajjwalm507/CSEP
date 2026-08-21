#include <iostream>
using namespace std;

int main() {
    int n, ans=-1, key, mid;

    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];
    int high=n-1;
    int low=0;

    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "Enter element to search: ";
    cin >> key;
    while(low<=high){
        mid=low+(high-low)/2;
        if(arr[mid]==key){
            ans=mid;
            low=mid+1;
        }
        else if(arr[mid]<key){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
        }
        if(ans != -1) {
            cout << "Last occurrence of the key element is at index " << ans << endl;
        }
        else {
            cout << "Element not found  !" << endl;
        }
    return 0;
}