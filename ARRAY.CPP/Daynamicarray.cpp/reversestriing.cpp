#include<iostream>
#include<string>
using namespace std;
int main (){
    string s ;
    cout<<"enter the word:";
    cin>> s;
    for(int i=0;i<s.length()/2 ;i++){
        swap(s[i],s[s.size()-i-1]);
        
}
cout<< s << endl ;
    return 0;
}

