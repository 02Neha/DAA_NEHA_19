
//WRITE A PROGRAM TO IMPLEMENT BUBBLE SORT AND FIND OUT TOTAL NUMBER OF COMPARISION.

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number of element in an array: "<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the element: "<<endl;
    for(int i = 0 ; i<n;i++)
    {
        cin>>arr[i];
    }
    int count = 0;
    int flag = 0;
    //Applying bubble sort 
    for(int i = 0 ; i<n ; i++)
    {
        for(int j = 0 ; j < n-i ; j++)
        {
            count++;
            if(arr[j]>arr[j+1])
            {
                flag = 1;
                swap(arr[j],arr[j+1]);
              
            }
        }
        if(flag == 0)
         break;
    }
    for(int i = 0 ; i < n ; i++)
     cout<<arr[i]<<" ";
     cout<<endl;     
     cout<<"Number of comparison: "<<count;
}
