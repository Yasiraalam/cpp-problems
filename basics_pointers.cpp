#include<iostream>
using namespace std;
int main(){
/*int i=5;
int num=i;
cout<<"adress:"<<&num<<endl;
cout<<"before:"<<num<<endl;
int *p=&num;
cout<<" before"<<num<<endl;
(*p)++;
cout<<"after:"<<num<<endl;
cout<<"adress:"<<&i<<endl;
double t=6.3;
double *w=&t;
cout<<"value at t"<<*w<<endl;
int *y=&num;
int *u=y;
cout<<"value at y"<<*u<<endl;*/
int arr[5]={2,3,5,4,6};
int i=2;

cout<<i[arr]<<endl;
cout<<"value at :"<<(*arr)+1<<endl;
cout<<"value at :"<<arr[1]<<endl;
cout<<"value at :"<<arr[2]<<endl;
cout<<"value at :"<<arr[3]<<endl;
cout<<"value at :"<<arr[4]<<endl;
cout<<"address :"<<&arr[0]<<endl;
/*cout<<"derefrencing at index 1st"<<*arr[0]<<endl;
 cout<<"address :"<<&arr[1]<<endl;
 cout<<"derefrencing at index 2nd"<<*arr[1]<<endl;
 cout<<"address :"<<&arr[2]<<endl;
 cout<<"derefrencing at index 3rd"<<*arr[2]<<endl;
 cout<<"address :"<<&arr[3]<<endl;
 cout<<"derefrencing at index 4th"<<*arr[3]<<endl;
 cout<<"address :"<<&arr[4]<<endl;
 cout<<"derefrencing at index 5th"<<*arr[4]<<endl;*/
return 0;
}


