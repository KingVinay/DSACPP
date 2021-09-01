#include<iostream>
#include <cstring>
using namespace std;

// char *strtok(char *s , char *delimiters)

// returns a token on each subsequent call

// on the first call function should be passed with string argument for 's' 

// Then on subsequent calls we should pass string argument as null

int main()
{
  char s[100] = "Today is a rainy day";

  // ptr -> it is pointer pointing towards first token from strtok()

  // 2nd argument -> delimiter decides from how to divide string

  // 1st Call
  char *ptr = strtok(s," ");
  cout<<ptr<<endl;

  //On Passing NULL as first argument on subsequent calls it maintains state of string(i.e.,static string with pointer intact where it left of earlier)

  while(ptr!=NULL)
  {
   ptr = strtok(NULL," ");
   cout<<ptr<<endl;
  }





return 0;
}