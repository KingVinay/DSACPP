#include<iostream>
using namespace std;

//Define a Comparator Function

bool compare(int a , int b)
{
  cout<<"Comparing"<<a<<"and"<<b<<endl;

  
  //swap for decreasing order
  return a < b; 
  
  //swap for increasing order

  // return a > b;

}


//Bubble Sort
//Take Larger Elements to End

void Bubble_Sort(int a[],int n,bool (&cmp)(int a , int b))
{
  //n-1 large elements to move to the end
  for(int i =0;i<n-1;i++)
  {
    //Pairwise Swapping in the unsorted Array
    for(int j=0;j<n-i-1;j++)
    {
      if(cmp(a[j],a[j+1]))
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

  Bubble_Sort(a,n,compare);
  for(int i =0;i<n;i++)
  {
    cout<<a[i]<<" ";
  }

return 0;
}