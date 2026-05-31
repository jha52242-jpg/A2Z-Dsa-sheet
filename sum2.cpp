#include<iostream>
#include<vector>

using namespace std;
int main(){
    int a;
    cin>>a;
    int arr[a];
    int target;
    for(int i=0;i<a;i++){
        cin>>arr[i];
    }
    for (int i = 0; i <a; i++)
    {
    cout<<arr[i];
    }
    cin>>target;
    for(int i=0;i<a;i++){
        for(int j=i+1;j<a;j++){
            if(arr[i]+arr[j]==target){
                cout<<i<<j;
            }
        }
    }
}