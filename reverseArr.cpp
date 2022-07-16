#include<bits/stdc++.h>
using namespace std;


int main()
{
int size;

cout<<"enter the size if arry: "<<endl;
cin>>size;
int arr[size];
for (int i = 0; i < size; i++)
{
    cout<<"Enter the elemets of arr: "<<i+1<<endl;
    cin>>arr[i];
    
}
cout<<"The enetred arry:"<<endl;
for (int i = 0; i < size; i++)
{
    cout<<arr[i]<<" "<<endl;
    
}
cout<<"The reverse of arr elements: "<<endl;
for (int i = size-1; i >= 0; i--)
{
    
    cout<<arr[i]<<" "<<endl;
}

return 0;
}