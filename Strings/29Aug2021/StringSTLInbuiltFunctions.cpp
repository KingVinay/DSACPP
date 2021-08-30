#include<iostream>
// <string> -> header file for inbuilt functions of string
#include<string>
using namespace std;
int main()
{
  //String initialisation (Different Methods)

  string s0;

  string s1("Hello");

  string s2 = "Hello World!";

  //String copying from second to first (Different Methods)

  string s3(s2);

  string s4 = s3;

  // Copying character array to string

  char a[] = {'a','b','c','\0'};

  string s5(a);

  cout<<s0<<endl<<s1<<endl<<s2<<endl<<s3<<endl<<s4<<endl<<s5<<endl;

//empty()-> function to check whether it is empty or not

if(s0 .empty())
{
  cout<<"s0 is an empty string"<<endl;
}

// append()-> function to append a string

s0.append("I love C++ ");
cout<<s0<<endl;

s0+="and Java too";
cout<<s0<<endl;

// length() -> length of string or no. of characters

cout<<s0.length()<<endl;

//clear()-> deletes or erases all characters of string

s0.clear();
cout<<s0.length()<<endl;

//compare()-> used to compare strings
// 0 -> if strings are equal
// >0 -> if second(inner) string is greater
// <0 -> if second(inner) string is smaller

s0 = "Banana";
s1 = "Peach";

cout<<s0.compare(s1)<<endl;
cout<<s1.compare(s0)<<endl;
cout<<s0.compare(s0)<<endl;

//Comparison using Overloaded Operators

if(s0 > s1)
{
  cout<<"Banana is Lexographically Greater than Peach";
}
else
{
  cout<<"Peach is Lexographically Greater than Banana"<<endl;
}

// Printing Particular character Index of string

cout<<s0[4]<<endl;

// Find Substrings using find()

string s ="I want to drive a Mclaren";

int index = s.find("drive");
cout<<index<<endl;

// Remove a word from string using erase()

string word ="drive";
int length = word.length();
s.erase(index,length+1);

cout<<s<<endl;

// Iterate over all the characters in the string

for(int i =0;i<s1.length();i++)
{
  cout<<s1[i]<<":";
}
cout<<endl;

// Iterators begin() and end()

// auto -> it automatically defines datatype wrt to storing value or string::iterator

for(/*auto*/ string::iterator it = s1.begin();it != s1.end();it++)
{
  cout<<(*it)<<",";
}

cout<<endl;

// For Each Loop

for(/*auto*/char c:s1)
{
  cout<<c<<".";
}


return 0;
}