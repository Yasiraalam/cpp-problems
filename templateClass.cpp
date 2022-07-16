#include<bits/stdc++.h>
using namespace std;

template <class t>
class test
{
    t  a,b;         //t data type hai jo b humai chehyai
   public:
   void get()       //func decleration 
   {
       cin>>a>>b;
   }
   t sum();            //we we do definition part outside the class
};
template < class t>          // when you want to defined template class function  outside use keyword template first
t  test<t> :: sum()
{
    return a+b;
}
int main()
{
    test <int> y;          //when you creating the obj of template class first use data type
    test <float> s;          //secound obj s for float datatype
    cout<<"Enter the two integers :"<<endl;
    y.get();
    cout<<"Sum= "<<y.sum()<<endl;           //yahan pa sum() function ko call krni ha
    cout<<"Enter the two float no: "<<endl;
    s.get();
    cout<<"Sum= "<<s.sum();


return 0;
}