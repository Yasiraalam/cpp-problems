#include<iostream>
using namespace std;
class sample
{
    static int count; //static data member
    public:
    sample()               //constructor 
    {
        count++;
        cout<<count<<" obj is created"<<endl;

    }
    
    ~sample()          //Distructor
    {
       count--;
       cout<<count<<" obj is deleted"<<endl;
    }
};
int sample::count;

int main()
{
    sample s1,s2,s3;


return 0;
}