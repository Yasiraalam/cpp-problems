
#include<bits/stdc++.h>
using namespace std;
struct employee{
    int emp_id;
  float dollar;
};
int main()
{
    employee emp1,emp2,emp3;
    //for emp1
    cout<<"Enter employee1 ID number"<<endl;
    cin>>emp1.emp_id;
    cout<<"Enter the employee1 compensation"<<endl;
    cin>>emp1.dollar;
    //for emp2
    cout<<"Enter employee2 ID number"<<endl;
    cin>>emp2.emp_id;
    cout<<"Enter the employee2 compensation"<<endl;
    cin>>emp2.dollar;
    //for emp3
    cout<<"Enter employee3 ID number"<<endl;
    cin>>emp3.emp_id;
    cout<<"Enter the employee3 compensation"<<endl;
    cin>>emp3.dollar;
cout<<"*****************************"<<endl;
    cout<<"the emp1 "<<endl<<"Id no :"<<emp1.emp_id<<endl<<"salary :"<<emp1.dollar<<endl;
    cout<<"the emp2 "<<endl<<"Id no :"<<emp2.emp_id<<endl<<"salary :"<<emp2.dollar<<endl;
    cout<<"the emp3 "<<endl<<"Id no :"<<emp3.emp_id<<endl<<"salary :"<<emp3.dollar;
return 0;
}