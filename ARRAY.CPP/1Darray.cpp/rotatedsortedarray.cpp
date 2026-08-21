#include<iostream>
using namespace std;
int main(){
    int i, n, count=0;
    cout<<endl<<endl<<"Enter the length of the array : ";
    cin>>n;
    int a[n];
    cout<<endl<<"Enter the elements of the array : ";
    for(i=0; i<n; i++){
        cin>>a[i];
    }
    cout<<endl<<"The array is : ";
    for(i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl<<endl;
    for(i=0; i<n-1; i++){
        if(a[i]-a[i+1]==n-1){
            count++;
        }
    }
    
        if(count==1){
            cout<<"The Array is Rotated Sorted  :";
        }
        else
        cout<<"The Array is Not Rotated Sorted :";
    
    return 0;
}