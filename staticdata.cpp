#include<iostream>
using namespace std;
class test
{
    public:
    static int a;   // decleared data members
    void get()
   {
       cout<<"the value of a ="<<a<<endl;

   }
};
     int test:: a=10;   //definition part 

int main()
{
  //static data members can be access with class name or obj name.
  test:: a=100;             
  cout<<"a ="<<test::a<<endl;  //or
  test t;    //make a obj
  t.get();

return 0;
}