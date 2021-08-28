#include<iostream>
#include<cstring>
using namespace std;
//Read N, followed by N strings and print the largest string and its length

int main()
{
  int n;
  cin>>n;
  // After the above step i.e.,cin>>n it execute /n after it and if you do cin.getline()after it that char array takes empty(null) string as first element and rest n-1 elements as it is so to solve this situation and move our pointer one position ahead we need to put one cin.get() just after cin>>n to consume that empty string and make our code work fine only in case when taking different input in char array from cin.getline().

  char a[100];
  char largest[100];
  cin.get();

  int len = 0;
  int largest_len = 0;

  for(int i =0;i<n;i++)
  {
    cin.getline(a,100);
    len = strlen(a);
    if(len>largest_len)
    {
      largest_len = len;
      // strcpy(a,b)->used to copy b elements to a  
      strcpy(largest,a);
    }
  }

  cout<<largest<<" and "<<largest_len<<endl; 


  return 0;
}