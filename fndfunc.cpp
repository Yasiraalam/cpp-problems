#include<iostream>
using namespace std;

class sample
{
    int a,b,c;
    public:
    friend void print(sample);
    void get(){
        cout<<"Enter the value of a and b="<<endl;
        cin>>a>>b;
    }
    
    
};
void print(sample s)
{
   // s.a=10;
    //s.b=20;
    s.c=s.a+ s.b;
    cout<<"a ="<<s.a<<endl;
    cout<<"b ="<<s.b<<endl;
    cout<<" sum ="<<s.c<<endl;

}

int main()
{
 sample s;
 s.get();
 print(s);


return 0;
}