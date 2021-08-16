#include<iostream>
using namespace std;
int main()
{
  //Linear Search

  //A particular element int the array.

  int n,key;
  cin >> n;

  int a[100];
  
    for(int i=0;i<n;i++)
    {
      cin >> a[i];
    }
    
    //Ask for Element we want to search

    cout<< "Enter the Element you want to search : ";
    cin>>key;

    //Find out the index of that element by traversing the array

    //LinearSearchAlgorithm

    for(int i=0;i<n;i++)
    {
      if(key == a[i])
      {
        cout<<"Found the "<< key <<" at Index : "<< i;
        break;
      }
      if(i==n-1)
      {
        cout<<key<<" not Found";
      }


    }
    return 0;
  

}