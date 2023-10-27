#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int n;
    cout<<"Enter size of array :"<<endl;
    cin>>n;
    
    int arr[n][n];
    
    cout<<"Enter elements of array :"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    
    cout<<"The matrix is :"<<endl;
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    
    cout<<"The rotated matrix of anti clock wise is :"<<endl;
    
    int right=n-1;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[j][right]<<" ";
        }
        cout<<endl;
        right--;
    }
    
    return 0;
}
