#include<iostream>
using namespace std;
int main()
{

//2d Array initialised with particular dimensions and with all index as 0
// int a[5][3] = {0};

// iterate over the 2d array

  // int value = 1;

// We traverse 2d array row wise 

  // for(int row=0;row<=4;row++)
  // {
  //   for(int col =0;col<=2;col++)
  //   {
  //     a[row][col]=value;
  //     value++;

  //     cout<<a[row][col]<<" ";
  //   }
  //   cout<<endl;
  // }


// Taking User Input for 2d array dimensions and its value and printing that

  int m,n;

  cin>>m>>n;

  for(int row=0;row<=m-1;row++)
  {
    for(int col =0;col<=n-1;col++)
    {
      cin>>a[row][col];
    }
  }

  cout<<endl;

  for(int row=0;row<=m-1;row++)
  {
    for(int col =0;col<=n-1;col++)
    {
      cout<<a[row][col]<<" ";
    }
    cout<<endl;
  }



  
  


  return 0;
}