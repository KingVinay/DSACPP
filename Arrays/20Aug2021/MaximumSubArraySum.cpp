#include<iostream>
using namespace std;
int main()
{
  //Maximum SubArray Sum Using Brute Force in n^3 time complexity

  int n;
  cin>>n;
  int a[100];
  int CurrentSum=0;
  int MaxSum=0;
  int left =0;
  int right =0;
  for(int i =0;i<n;i++)
  {
    cin>>a[i];

  }
   //Generate All SubArrays

   for(int i =0;i<n;i++)
   {
     for(int j=i;j<n;j++)
     {
       //Elements of SubArray(i,j)

       CurrentSum =0;

       for(int k =i;k<=j;k++)
       {
          CurrentSum +=
          a[k];
       }
      //Print All SubArrays Sum
      //  cout<<CurrentSum<<endl;

      //Update MaximumSum if CurrentSum > MaximumSum
      if(CurrentSum >  MaxSum)
      {
         MaxSum = CurrentSum;
         left =i;
         right =j;

      }

     

     }

   }
   cout<<"Maximum Sum of SubArrays is :"<< MaxSum<<endl;

   //Print the SubArray

   cout<<"SubArray is : ";
   for(int k=left;k<=right;k++)
   {
     cout<<a[k]<<" ";
   }

return 0;
}