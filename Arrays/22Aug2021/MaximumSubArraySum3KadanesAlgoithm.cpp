#include<iostream>
using namespace std;
int main() 
{

  //Maximum SubArray Sum Using Kadane's Algorithm in O(n) time complexity

 int n;
 cin>>n;
 int a[100];
 int CurrentSum =0;
 int MaxSum =0;
 for(int i=0;i<n;i++)
 {
   cin>>a[i];
 } 
 
 //Kadane's Algorithm for Maximum SubArray Sum

 for(int i=0;i<n;i++)
 {
   CurrentSum = CurrentSum + a[i];
   if(CurrentSum<0)
   {
     CurrentSum=0;
   }

   MaxSum = max(MaxSum,CurrentSum);
}
cout<<"Maximum Sum is : "<<MaxSum<<endl;


 return 0;
}