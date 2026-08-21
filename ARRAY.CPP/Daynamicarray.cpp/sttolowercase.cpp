#include<iostream>
#include<cstring>
using namespace std;
int main (){
    string s;
    cout<<"enter the word:";
    cin>> s;
    for(int i=0;i<s.length() ;i++){
        s[i]=tolower(s[i]);

    }
 
    cout<< s << endl ;
    return 0;
}