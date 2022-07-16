#include<bits/stdc++.h>
#include<iostream>
using namespace std;


int main()
{
    int a,b;
  try       //all the excption causing program should be placed inside the try block
  {
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    if(b==0)throw 0;           //throwing the zero 
    cout<<"Division = "<<a/b;
  }               
   //!Statements btw throw and catch will are not be executed
  
    catch(int x)      //catching the zero in this catch block
    {
        cout<<"Division is not possible ";
    }
    
    return 0;
 }
     //******************* 2nd ********************
 /*int main()
 {
     try{
         cout<<"before throw"<<endl;
         throw 1;
         cout<<"after throw"<<endl;
     }
     catch(int x)
     {
         cout<<"inside catch \n";

     }
     cout<<"THank you";
     return 0;
 }
 */
  
    



