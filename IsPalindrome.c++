#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(string str){
    
    int left=0;
    int right=str.length()-1;
    
    while(left < right){
        
        if(str[left] != str[right]){
            return false;
        }
        right--;
        left++;
    }
    return true;
}


int main(){
    
    string str;
    cout<<"Enter a string :";
    getline(cin,str);
    
    int res=isPalindrome(str);
    
    if(res){
        cout<<"The given string is a is Palindrome";
    }
    else{
        cout<<"The given is not a isPalindrome";
    }
    
    return 0;
}
