#include<bits/stdc++.h>
using namespace std;


int main()
{
    try{
        int a;
       
        cout<<"Enter integer for a: "<<endl;
        cin>>a;
        throw a;
       
    }
    catch(...){
      
        
 cout<<"the value of a "<<a;
         
    }


return 0;
}