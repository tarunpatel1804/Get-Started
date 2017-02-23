#include<iostream>
#include<string>
#include<vector>
#include<cstring>
using namespace std;


class User
{
  string name;
  string pswd;
  public:
  void get()
  {
       cout<<"\n Enter your Name  ";
       cin>>name;
       cout<<"\n Enter your Password (only small case)   ";
       cin>>pswd;
  }
  void convert()
  {
      
      string s = "qwertyuiopasdfghjklzxcvbnmqwertyuiopasdfghjklzxcvbnm";
      char token[50];
      vector<int> intp(50);
      vector<int> ints(50);
      vector<int> sum(50);
      for(int i=0;pswd[i];i++)
      {
         intp[i] = pswd[i] - 'a';  // cout<<intp[i]<<" ";
      }
      int len = pswd.size();
      for(int i=0;i<len;i++)
      {
         ints[i] = s[i] - 'a';      //cout<<ints[i]<<" ";
      }
      for(int i=0;i<len;i++)
      {
         sum[i] = ints[i] + intp[i];  // cout<<sum[i]<<" ";
      }
      for(int i=0;i<len;i++)
      {
         pswd[i] = s[sum[i]];      //cout<<pswd[i]<<" ";
      }

     


  }

  void show()
  {
     cout<<"\n Name :"<<name;
     cout<<"\n Password :"<<pswd;
 
  } 
   

  

  
};


int main()
{
  User u;
  u.get();
  u.convert();
  u.show();
  return 0;
}
