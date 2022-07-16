#include<iostream>
using namespace std;
class type1
{  
      int a,b;
      public:
      friend class type2;
      void getab()
      {
          cout<<"Enter the value of a and b= "<<endl;
          cin>>a>>b;
      }
      

};
class type2
{  
    public:
    void putab(type1 t1)
    {
       cout<<"the value of a ="<<t1.a<<endl;
       cout<<"the value of b ="<<t1.b<<endl;
        
    }
};

int main()
{
   type1  t1;
   type2 t2;
   t1.getab();
   t2.putab(t1);


return 0;
}