#include<bits/stdc++.h>
using namespace std;

int BinarySearch(int arr[],int s,int e,int key){
    
    int mid=(s+e)/2;
    
    if( s > e){
        return false;
    }
    
    if( arr[mid] == key){
        return true;
    }
    
    if( arr[mid] < key){
        return BinarySearch(arr,mid+1,e,key);
    }
    
    else
    
    return BinarySearch(arr,s,mid-1,key);
    
}



int main(){
    
    int arr[]={11,22,34,56,87,99,100};
    int s=0;
    int e=7;
    int key=34;

bool ans=BinarySearch(arr,s,e,key);    

if(ans){
    cout<<"Number is found "<<endl;
}
else
cout<<"Number is not found";

    return 0;
}
