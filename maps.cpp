#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main()
{  
  
       int size,n; 
     
       
          
  cout<<"enter the size of even vector: "<<endl;        //getting size for even vec 
    cin>>n;
   vector<int> even(n);
   for (int i = 0; i < n; i++)                    //inserting elements for even vec
   { cout<<"Enter elements for even: "<<endl;
     cin>>even[i];
   }
   
 
   for (int i = 0; i < size; i++)                    //getting size for odd vec
  cout<<"enter the size of odd vector: "<<endl;
  cin>>size;

   vector<int> odd(size);
   for (int i = 0; i < 5; i++)
   { cout<<"Enter elements for odd: "<<endl;       //inserting elements for off vec
     cin>>odd[i];
   }
   
 
   for (int i = 0; i < n; i++)
   {
    sort(even.begin(),even.end());         //sorting even vec printing
     cout<<even[i]<<" ";
   }
   cout<<endl;
   for (int i = 0; i < size; i++)
   {
    sort(odd.begin(),odd.end());           //sorting odd vec   printing
     cout<<odd[i]<<" ";
     
   }
   
return 0;
}