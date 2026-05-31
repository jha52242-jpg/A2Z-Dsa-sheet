#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i <n; i++)
    {
        cin>>arr[i];
    }
    int co=0;
    int max=0;
    for (int i = 0; i <n-1; i++)
    {
        if (arr[i]==arr[i+1])
        {
            co+=1;
            if (co>max)
            {
                max=co;
            }
            
        }
        else{
            co=0;
        }
    }
    cout<<max+1;
}