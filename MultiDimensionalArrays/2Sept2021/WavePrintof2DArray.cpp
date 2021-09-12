#include<iostream>
using namespace std;
int main()
{
  // Wave Print of an 2D Array
/*   _   _
  | | | | |   ->wave design
  | | | | |
  |_| |_| |    */



  int m,n;
  cin>>m>>n;
  int a[m][n];
  for(int row=0;row<=m-1;row++)
  {
    for(int col =0;col<=n-1;col++)
    {
      cin>>a[row][col];
    }
  }

  cout<<endl;

// Column Wise Traversal

  for(int col=0;col<n;col++)
  {
    //For even column no. this loop print row from 0 to n-1 (up to down) down wave
    if(col%2==0)
    {
      for(int row =0;row<m;row++)
      {
        cout<<a[row][col]<<" ";
      }
      cout<<endl;

    }
    //For odd column no.this loop print row from n-1 to 0 (down to up) up wave
    else
    {
      for(int row =m-1;row>=0;row--)
      {
        cout<<a[row][col]<<" ";
      }
      cout<<endl;
    }
    
  }


  return 0;
}

