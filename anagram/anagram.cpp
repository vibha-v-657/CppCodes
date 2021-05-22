#include <iostream>
#include<string>
#include<map>
using namespace std;

int main() 
{
   map<char,int> a;
  string s1,s2;
  cin>>s1>>s2;
  for(int i=0;i<s1.length();i++)
  {
    a[s1[i]]+=1;
  }
  for(int i=0;i<s2.length();i++)
  {
    a[s2[i]]+=1;
  }
  int flag=1;
  for(auto i=a.begin();i!=a.end();i++)
  {
    if(i->second%2!=0)
    {
      flag=0;
      break;
    }
  }
  if(flag==1)
    cout<<"The two strings are anagram of each other"<<endl;
  else
    cout<<"The two strings are not anagram of each other"<<endl;
  
    return 0;
}
