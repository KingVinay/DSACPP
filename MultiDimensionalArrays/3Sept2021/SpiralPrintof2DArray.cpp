#include<iostream>
using namespace std;
int main()
{
  int m,n;
  cin>>m>>n;
  int a[m][n];

  for(int row=0;row<m;row++)
  {
    for(int col=0;col<n;col++)
    {
      cin>>a[row][col];
    }
  }

  for(int row=0;row<m;row++)
  {
    for(int col=0;col<n;col++)
    {
      cout<<a[row][col]<<" ";
    }
    cout<<endl;
  }

  int sc=0,sr=0;
  int ec = n-1,er= m-1;

  while(sc<=ec && sr<=er)
  {
      for(int i=sc;i<=ec;i++)
      {
        cout<<a[sr][i]<<" ";
      }
      sr++;
    
      for(int i=sr;i<=er;i++)
      {
        cout<<a[i][ec]<<" ";
      }
      ec--;

      for(int i=ec;i>=sc;i--)
      {
        cout<<a[er][i]<<" ";
      }
      er--;

      for(int i=er;i>=sr;i--)
      {
        cout<<a[i][sc]<<" ";
      }
      sc++;


  }




}