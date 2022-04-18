#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0 ; i<n;i++)
     cin>>arr[i];

     sort(arr,arr+n);
     int key;
     cout<<"Enter key to find the kth smallest and kth largest element"<<endl;
     cin>>key;
     cout<<"Kth smallest is: "<<arr[key-1];
     cout<<endl;
     cout<<"Kth largest is: "<<arr[n-key];
     cout<<endl;
     return 0;
}
