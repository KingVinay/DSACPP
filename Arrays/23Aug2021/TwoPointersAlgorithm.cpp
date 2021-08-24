#include<iostream>
using namespace std;
int main()
{
  //Given a Sorted Array , Find Pair of Elements that sum to K

  //Method -1
  
  // We can use 2 nested loops 
  // But this method will take O(n^2) time

  //Method - 2

  // We can take first element (at i) and then k-a[i] and apply binary search rest array if found move to next if not i++ this is little better solution

  // Method - 3

  // Two Pointer ALgorithm(Only on Sorted Array)Optimal Solution

  int a[] = {1,3,5,7,10 ,11,12,13};

  int s =16;

  int i =0;
  int j =sizeof(a)/sizeof(int) - 1;

  while(i<j)
  {
    int current_sum = a[i]+a[j];
    if(current_sum>s)
    {
      j--;

    }
    else if(current_sum<s)
    {
      i++;
    }
    else if(current_sum==s)
    {
      cout<<a[i]<<" and "<<a[j]<<endl;
      i++;
      j--;
    }
  }

  

  return 0;
}