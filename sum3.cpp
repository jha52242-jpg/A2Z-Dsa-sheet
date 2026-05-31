#include<iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    int arr[a];
    for(int i=0;i<a;i++){
        cin>>arr[i];
    }
    for(int i=0;i<a;i++){
        for(int j=i+1;j<a;j++){
            for(int k=j+1;k<a;k++){
                if(arr[i]+arr[j]+arr[k]==0){
                    cout<<arr[i]<<","<<arr[j]<<","<<arr[k];
                }
                cout<<endl;
            }
        }
    }
    return 0;
}