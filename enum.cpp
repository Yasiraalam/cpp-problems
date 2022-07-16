#include<iostream>
using namespace std;
 enum type{
           laborer='l', secretary='s', manager='m', accountant='a', executive='e',
               researcher='r'};

int main()
{
    type x;
   char choice;

   cout<<"enter the first charecter of fruit(l,s,m,a,e,r)"<<endl;
 
   }
   switch(choice)
   {
       case laborer:{
       cout<<"employee  type is laborer"<<endl;
           break;
       }
       case secretary:{
           cout<<"employee type is secretary"<<endl;
           break;
       }
       case manager:{
           cout<<"employee type is manager "<<endl;
           break;
       }
       case accountant:
       {
           cout<<"employee type is accountant"<<endl;
           break;
       }
       case executive:{
           cout<<"employee type is executive"<<endl;
           break;
       }
       case researcher:{
           cout<<"employee type is researcher"<<endl;
           break;
       }
       default:{
           cout<<"wrong entry"<<endl;
           break;
       }
   }

return 0;
}