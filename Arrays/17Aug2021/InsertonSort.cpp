#include<iostream>
using namespace std;

//Insertion Sort

//Insert the current element to right position

void Insertion_Sort(int a[],int n)
{
  for(int i=1;i<=n-1;i++)
  {
    int e = a[i];
    //place the current element at right position in the sorted part

    int j = i-1;
    while(j>=0 and a[j]>e)
    {
      a[j+1] = a[j];
      j = j-1;

    }
    a[j+1] = e;
  }

}

int main()
{
  int n,a[100];
  cin>>n;
  for(int i=0;i<n;i++)
  {
    cin>>a[i];
  }
  Insertion_Sort(a,n);

  for(int i=0;i<n;i++)
  {
    cout<<a[i]<<" ";
  }

return 0;
}