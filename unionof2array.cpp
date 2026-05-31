#include<iostream>
using namespace std;
int main(){
    int n,m;
       cin>>n>>m;
    int arr1[n];
    int arr2[m];
    for (int i = 0; i <n; i++)
    {
        cin>>arr1[i];
    }
    for (int i = 0; i <m; i++)
    {
        cin>>arr2[i];
    }

int i=0;
int j=0;
    
    for (; i <n && j<m ;)
    {
        if (arr1[i]<arr2[j])
        {
            if ( i==0 || arr1[i]!=arr1[i-1])
            {
                cout<<arr1[i]<<" ";
            }
            i++;
            
        }
        else if (arr1[i]==arr2[j])
        {
             if ( i==0 || arr1[i]!=arr1[i-1])
            {
                cout<<arr1[i]<<" ";
            }
            i++;j++;
            
        }
        
        else{
             if ( j==0 || arr2[j]!=arr2[j-1])
             {
                cout<<arr2[j]<<" ";
             }
             j++;
        }
    }


    for (; i < n;)
    {
    if ( i==0 || arr1[i]!=arr1[i-1])
            {
                cout<<arr1[i]<<" ";
            }
            i++;
    }

    for (; j < m;)
    {
        if ( j==0 || arr2[j]!=arr2[j-1])
             {
                cout<<arr2[j]<<" ";
             }
             j++;
    }
    
    
}