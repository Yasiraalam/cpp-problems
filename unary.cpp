#include<iostream>
using namespace std;
class test
{
    int a;
    public:
    test(){
        a=1;
    }
    void operator ++()     //define constructor
    {
        a++;
    }
    void operator --()    //constructor
    {
        a--;
    }
    void show()
    {
        cout<<"operator overload: "<<a<<endl;
    }
    

};

int main()
{  int a;
  test t;
  t++;  //confusion
    t.show();
  t--;  //confusion
    t.show();
  

return 0;
}