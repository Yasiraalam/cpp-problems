#include<bits/stdc++.h>
using namespace std;

struct student
{
     char name[50];
     int ID;
     int month,date,year;


};
class library
{
    
    public:
    student s1;
    void stu();
    void showbook();
    void input();
    void set();
    void addbook();
    void studetail();
};
void library::stu()
{  
    cout<<"Student Name: "<<endl;
    cin>>s1.name;
    cout<<"Student id: "<<endl;
    cin>>s1.ID;
    cout<<"Date: ";
    cin>>s1.date>>s1.month>>s1.year;
}
void library::studetail(){
    cout<<"Student Name: "<<s1.name<<endl;
    cout<<"Student ID: "<<s1.ID<<endl;
    cout<<"Date: "<<s1.date<<":"<<s1.month<<":"<<s1.year<<endl;
    system("cls");
}
void library:: input()
{    cout<<"========================"<<endl;
     cout<<"   Library Management\t"<<endl;
     cout<<"========================"<<endl;
    cout<<"[1]  ADD BOOK  "<<endl;
    cout<<"[2]  SEARCH BOOK "<<endl;
    cout<<"[3]  RETURN BOOK"<<endl;
    cout<<"[4]  ISSUE BOOK "<<endl;
    int a;
    cout<<"your choice: ";
    cin>>a;
   
   
} 
void library::addbook()
{
    cout<<"ADD BOOK "<<endl;
    cout<<"Enter book name: "<<endl;
    cin>>s1.name;
    cout<<" Author Name: "<<endl;
    cin>>s1.name;

   system("cls");
}
void library::showbook()
{
    cout<<"Book Name: "<<s1.name<<endl;
    cout<<"Author Name: "<<s1.name<<endl;
}


int main()
{   system("cls");
    library l;
    l.stu();
    l.studetail();
    l.input();
    l.set();
    l.addbook();
    l.showbook();


return 0;
}