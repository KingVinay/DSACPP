#include<iostream>
#include<cstring>
using namespace std;

//String Tokeniser Designing

//input of mystrtok() is string and a single char as delimiter

char * mystrtok(char *str,char delim)
{
  // it maintains state of function
  static char *input = NULL;

  if(str!=NULL)
  {
    //We are making our first call
    input = str;

  }

  //Check here base case after the final token has been returned
  if(input==NULL)
  {
    return NULL;
  }
  
  //Start extracting tokens and store them in an array

  char *output = new char[strlen(input)+1]; //dynamic array creation
  
  int i=0;
  for(;input[i]!='\0';i++ )
  {
    if(input[i]!=delim)
    {
    output[i]=input[i];
    }
    else
    {
      output[i]='\0';
      input = input + i + 1;
      return output;

    }

  }
  //Corner Case (At last index it might not have delim so)

  output[i]='\0';
  input = NULL;
  return output;



}

int main()
{
  char s[100]="Today, is a, rainy day";

  char *ptr = mystrtok(s,',');
  cout<<ptr<<endl;

  while(ptr!=NULL)
  {
    ptr = mystrtok(NULL,',');
    cout<<ptr<<endl;
  }
  return 0;

}