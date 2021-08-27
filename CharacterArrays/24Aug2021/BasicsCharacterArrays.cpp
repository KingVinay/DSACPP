#include<iostream>
using namespace std;
int main()
{
  //Character Arrays 
  
  // (Should be Terminated by null character '\0'->ASCII =0)

  // char ch[10] = {'a','b','c'};
  // cout << ch <<endl;

  //Character Arrays direct gets printed with cout but Integer Arrays displays starting address on cout.

  // char ch [] = {'a','b','c','d'};
  // cout<< ch <<endl;//Array content(special case) unless you find a null character

  // int b[] ={1,2,3};
  // cout<<b<<endl;//starting address(Default case)

  //So it is advised to add null character behind character array

  // char ch [] = {'a','b','c','d','\0'};

  // cout << ch<<endl;

  //Input of character Array

  // char s[10];
  // cin>>s;
  // cout<<s;

char s1[] = {'h','e','l','l','o'};//this type doesn't terminate with null so it may have garbage value so terminate with null character

char s2[] = "hello";//it has null character at end as string input is stored like hello\0

cout<<s1<<" "<<sizeof(s1)<<endl;//5 bytes
cout<<s2<<" "<<sizeof(s2);//6 bytes




return 0;
}