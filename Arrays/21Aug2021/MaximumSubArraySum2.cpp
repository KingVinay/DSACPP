#include<iostream>
using namespace std;
int main()
{
  //Maximum SubArray Sum Using Cumulative Sum in O(n^2) time complexity

  int n;
  cin>>n;
  int a[100];
  int cumSum[100]={0};
  int CurrentSum=0;
  int MaxSum=0;
  int left =0;
  int right =0;
  cin>>a[0];
  cumSum[0]=a[0];
  for(int i=1;i<n;i++)
  {
    cin>>a[i];
    cumSum[i]=cumSum[i-1]+a[i];
  }
   //Generate All SubArrays

   for(int i =0;i<n;i++)
   {
     for(int j=i;j<n;j++)
     {
       //Elements of SubArray(i,j)

       CurrentSum =0;

       CurrentSum = cumSum[j]-cumSum[i-1];

       
      //Print All SubArrays Sum
      //  cout<<CurrentSum<<endl;

      //Update MaximumSum if CurrentSum > MaximumSum
      if(CurrentSum >  MaxSum)
      {
         MaxSum = CurrentSum;
         left = i;
         right = j;

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