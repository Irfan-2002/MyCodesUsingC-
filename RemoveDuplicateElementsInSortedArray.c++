#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int n;
cout<<"Enter size of array :";
cin>>n;

int arr[n];

cout<<"Enter array elements :";
for(int i=0;i<n;i++){
    cin>>arr[i];
}


    int temp[n];
    
    int j=0;
    
    for(int i=0;i<n-1;i++){
        
        if(arr[i] != arr[i+1]){
            
            temp[j]=arr[i];
            j++;
            
        }
        
    }
    temp[j]=arr[n-1];
    

    for(int i=0;i<j+1;i++){
        cout<<temp[i]<<" ";
    }
    
    
    
    return 0;
}
