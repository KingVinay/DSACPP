#include<iostream>
using namespace std;
//Bubble Sort
//Take Larger Elements to End

void Bubble_Sort(int a[],int n)
{
  //n-1 large elements to move to the end
  for(int i =0;i<n-1;i++)
  {
    //Pairwise Swapping in the unsorted Array
    for(int j=0;j<n-i-1;j++)
    {
      if(a[j]>a[j+1])
      {
        swap(a[j],a[j+1]);
      }
      
    }
  }

}
int main()
{
  int n;
  cin>>n;
  int a[100];
  for(int i =0;i<n;i++)
  {
    cin>>a[i];
  }

  Bubble_Sort(a,n);
  for(int i =0;i<n;i++)
  {
    cout<<a[i]<<" ";
  }

return 0;
}