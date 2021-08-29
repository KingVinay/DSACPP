#include<iostream>
// cstring header file for string inbuilt functions like strlen , strcpy e.t.c
#include<cstring>
using namespace std;
//read a sentence/paragraph and check if its palindrome or not

bool isPalindrome(char a[])
{
  int i =0;
  // strlen() to calculate length of string
  int j = strlen(a) - 1;

  while(i<j)
  {
    if(a[i]==a[j])
    {
      i++;
      j--;
    }
    else
    {
      return false;
    }
  }
return true;
}

int main()
{
  char a[100];
  cin.getline(a,100);

  if(isPalindrome(a))
  {
    cout<<"Palindromic String";

  }
  else
  {
    cout<<"Not a Palindromic String";
  }


return 0;
}