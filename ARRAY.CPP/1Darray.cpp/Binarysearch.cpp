#include<iostream>
using namespace std;
int main(){
    int i, n, value, l, mid, h, found=0;
    cout<<endl<<endl<<"Enter the size of the array : ";
    cin>>n;
    int a[n];
    cout<<endl<<"Enter the elements of the array : ";
    for(i=0; i<n; i++){
        cin>>a[i];
    }
    l=0;
    h=n-1;
    cout<<endl<<"The array is : ";
    for(i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl<<"Lower index ="<<l<<endl;
    cout<<"Higher index ="<<h<<endl;
     cout<<endl<<endl<<"Enter the number that have to search : ";
    cin>>value;
    while(l<=h){
        mid=(l+h)/2;
        if(a[mid]==value){
        cout<<"Element found at index : "<<mid<<endl<<endl;
        found=1;
        break;
    }
    else if(a[mid]<value){
        l=mid+1;
    }
    else
        h=mid-1;
}
if(found==0)
cout<<"Element not found";
return 0;

}