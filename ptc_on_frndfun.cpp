#include<iostream>
using namespace std;
class cube
{
    float num;
    public:
    friend void print(cube);
    void get()
    {
        cout<<"Enter the value of number:"<<endl;
        cin>>num;
        for(int i=1; i<=num; i++)
			{
				cout<<" The cube of"<<i<<" is ="<<(i*i*i)<<endl;
			}

    }

}; 
  void print(cube c)
    {  
        //cout<<" cube of"<<c.num<<"is ="<<(c.num * c.num * c.num)<<endl;	
        cout<<"the cube of num "<<c.num<<" is ="<<(c.num)*(c.num)*(c.num)<<endl;
    }

int main()
{
    cube c;
    c.get();
    print(c);
    


return 0;
}