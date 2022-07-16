#include<iostream>
using namespace std;
class test2;
class test1
{
    int a,b,c;
    public:
    void geta()
    {
        cout<<"Enter the value of a: "<<endl;
        cin>>a;
    }
    friend void big(test1,test2);   // decleration of frnd fun

    
};
class test2
{
    int b;
    public: 
    void getb()
    {
        cout<<"Enter the value of b: "<<endl;
        cin>>b;
    }
    friend void big(test1,test2);   // decleration of frnd fun
};
void big(test1 t1,test2 t2)        // definition of frnd fun
{
    if(t1.a > t2.b)
    {
        cout<<"A is big "<<endl;
    }
    else if(t2.b > t1.a)
    {
        cout<<" B2 is big "<<endl;
    }
    else 
    {
        cout<<"Both are equal "<<endl;
    }

}

int main()
{
  test1 t1;
  test2 t2;
  t1.geta();
  t2.getb();
  big(t1,t2);


return 0;
}