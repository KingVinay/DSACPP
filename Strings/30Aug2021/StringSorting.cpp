#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

bool compare(string a , string b)
{
  // Default way of comparing

  // a<b;

  // Comparing wrt to length of strings

  if(a.length()==b.length()){
    // lexicograph. increasing

    return a<b;

    // lexicograph. decreasing
    // return a>b;
  }
  // for increasing sort

  return a.length()<b.length();

  // for decreasing sort

  // return a.length()>b.length();

}

int main()
{
  int n;
  cin>>n;
  cin.get();

  string s[100]; //or we can use vector instead too


  for(int i =0;i<n;i++)
  {
    // overloaded with different arguments

    getline(cin,s[i]) ;
    
  }

  sort(s,s+n,compare);

  for(int i =0;i<n;i++)
  {
    cout << s[i]<<endl;
  }


  

  
}