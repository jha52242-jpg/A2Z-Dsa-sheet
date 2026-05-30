#include<iostream>
#include<climits>
using namespace std;
int main(){
    int a;
    cin>>a;
    int arr[a];
    for(int i=0;i<a;i++){
     cin>>arr[i];   
    }
   int lar=INT_MIN;
   for (int i = 0; i <a; i++)
   {
    if (arr[i]>lar)
    {
        lar=arr[i];
    }
    
   }
   cout<<lar;


   int second=INT_MIN;
   for (int i = 0; i <a; i++)
   {
    if (arr[i]>second && arr[i]!=lar)
    {
        second=arr[i];
    }
    
   }
   cout<<second;
   
}