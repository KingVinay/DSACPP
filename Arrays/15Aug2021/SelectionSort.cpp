#include<iostream>
using namespace std;

void Selection_Sort(int a[],int n )
{
  for(int i=0;i<n-1;i++)
  {
    //find out the smallest element index in unsorted part
    int min_index = i;
    for(int j =i;j<=n-1;j++)
    {
      if(a[j]<a[min_index])
      {
        min_index = j;
      }
    }
    //After this loop we'll swap finally

    swap(a[i],a[min_index]);
  
  
    }

}
int main()
{
  //Selection Sort

  //Arrange a randomly shuffled array in increasing /decreasing order

  int n;
  cin >> n;

  int a[100];
  
    for(int i=0;i<n;i++)
    {
      cin >> a[i];
    }

    Selection_Sort(a,n);
    for(int i =0;i<n;i++)
    {
      cout<<a[i]<<" ";
    }
    
   return 0;
  }