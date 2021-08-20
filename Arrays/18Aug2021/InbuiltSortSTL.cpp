#include<iostream>
#include<algorithm>
using namespace std;

//Define a Comparator Function

bool compare(int a , int b)
{
  cout<<"Comparing"<<a<<"and"<<b<<endl;

  
  //swap for increasing order
  return a < b; 
  
  //swap for decreasing order

  // return a > b;

}

int main()
{
  int n;
  cin>>n;
  int a[1000];

  for(int i =0;i<n;i++)
  {
    cin>>a[i];
  }
  //Sort an Array using sort()Function , it is more efficient

  sort(a,a+n,compare);

  for(int i =0; i<n;i++)
  {
    cout<<a[i]<<" ";
    
  }
  return 0;

}