
//WRITE A PROGRAM TO IMPLEMENT A SELECTION SORT AND FIND OUT TOTAL NUMBER OF COMPARISION.

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number of element in an array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the element: "<<endl;
    for(int i = 0 ; i < n; i++)
    {
        cin>>arr[i];

    }

    int count=0;
    for(int i = 0 ; i<n ; i++)
    { int k = i;
        for(int j = i+1; j<n ; j++)
        {
            count++;
            if(arr[j]<arr[k])
              {
                  k = j;                  
              }
        }
        swap(arr[i],arr[k]);
    }
    for(int i = 0 ; i<n ; i++)
     cout<<arr[i]<<" ";
     cout<<endl;
     
     cout<<"Number of comparison: "<<count<<endl;
}
