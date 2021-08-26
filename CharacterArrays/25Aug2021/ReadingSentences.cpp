#include<iostream>
using namespace std;

//Function for read lines or paragraph with delimiter

// void readline(char a[],int maxLen , char delim='\n')
// {
//   int i =0;
//   char ch = cin.get();
//   while(ch!= delim)
//   {
//     a[i]=ch;
//     i++;
//     if(i==(maxLen-1))
//     {
//       break;
//     }
//     ch = cin.get();
//   }
//   //once out of the loop
//   a[i] = '\0';
//   return ;


// }

int main()
{

//Read a Sentence/Paragraph and store it

// cin.get() -> only reads a single character

// put a loop to read characters till you get a new line '\n'



  char a[1000];

  // readline(a,1000,'$');//on entry of delimiter i.e., '$' it stops taking entry

cin.getline(a,1000,'$');//Inbuilt function in C++

  // cin>>a; //this only takes word before space
  cout<< a <<endl;


}