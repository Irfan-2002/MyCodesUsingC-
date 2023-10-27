#include<bits/stdc++.h>
#include<iostream>
using namespace std;


int main(){
    
    string str1,str2;
    cout<<"Enter string :";
    getline(cin,str1);
    int n=str1.length();
    str2=str1;
    
    for(int i=0;i<n/2;i++){
        swap(str1[i],str1[n-i-1]);
    }
    
    for(int i=0;i<n;i++){
        cout<<str1[i];
    }
    cout<<endl;
    
    if(str1==str2)
    cout<<"True";
    else
    cout<<"False";
    
    
    return 0;
}
