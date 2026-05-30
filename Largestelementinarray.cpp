#include<iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    int arr[a];
    for(int i=0;i<a;i++){
     cin>>arr[i];   
    }
   int lar=arr[0];
   for (int i = 1; i <a; i++)
   {
    if (arr[i]>lar)
    {
        lar=arr[i];
    }
    
   }
   cout<<lar;
   
}