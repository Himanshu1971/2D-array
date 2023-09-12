#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[3][3] = {{1,2,3},{4,5,6},{5,6,7}};
    int arr1[3][3] = {{1,2,4},{4,6,6},{5,6,8}};
    int ans[3][3] = {{0,0,0},{0,0,0},{0,0,0}};
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){     
           ans[i][j] = arr[i][j] + arr1[i][j];
        }
    }

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}
