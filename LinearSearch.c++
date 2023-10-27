#include<bits/stdc++.h>
using namespace std;

int LinearSearch(int arr[],int n,int key){
    
    if( n == 0){
        return false;
    }
    if( arr[0] == key ){
        return true;
    }
    
return LinearSearch(arr+1,n-1,key);
    
}


int main(){
    
    int arr[]={11,22,54,23,76,45,98};
    int n=7;
    int key=23;
    
  bool found  =  LinearSearch(arr,n,key);
    
    if(found){
        cout<<"Element mil gaya jo hame chahiye"<<endl;
    }
    else
    cout<<"Element Nahi mila";
    
    return 0;
}
