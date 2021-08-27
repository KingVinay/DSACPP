#include<iostream>
using namespace std;

//Remove Consecutive duplicates from a string

// ccoooddingg -> coding

void RemoveDuplicates(char a[])
{
  int l = strlen(a);
  if(l ==1 or l==0)
  {
    return;
  }

  int prev = 0;
  for(int current =1;current<l;current++)
  {
    if(a[current]!=a[prev])
    {
      prev++;
      a[prev] = a[current];
    }
  }
  a[prev+1]='\0';
  return;



}

int main()
{
  char a[100];
  cin.getline(a,100);

  RemoveDuplicates(a);

  cout<<a;



  return 0;

}