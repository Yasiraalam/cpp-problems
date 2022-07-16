#include<iostream>
#include<string.h>
using namespace std;
class test
{
    char str[100];
    public:
    void read()
    {
        cout<<"enter the string 1st"<<endl;
        cin>>str;
    }
    void show()
    {
        cout<<"the 1st string is :"<<str<<endl;
    }
    //here write a fucntion to overload two strings and return type is object;
    test operator +(test t2 ){
        test t3;
        strcpy(t3.str,str);
        strcat(t3.str," ");
        strcat(t3.str,t2.str);
        return t3;
    }
};

int main()
{
    test t1,t2,t3;
    t1.read();
    t2.read();
    //! Here we need to +opertor to opertor overlaod a two obj;
  t3 = t1+t2;
  t3.show();

return 0;
}