#include<iostream>
#include<climits>
using namespace std;
int main()
{
   int  n , maxno=INT_MIN , minno=INT_MAX;
   
   cin>>n;
   int a[100];
   for(int i=0;i<n;i++)
   {
     cin>>a[i];
   }

   //Algorithm for Maximum and Minimum Element in an array.

   for(int i=0;i<n;i++)
   {
    //  if(a[i]>maxno)
    //  {
    //    maxno = a[i];
    //  }

    //Alternative of Above line

    maxno = max(maxno,a[i]);


    //  if(minno > a[i])
    //  {
    //    minno = a[i];
    //  }

    //Alternative of Above line

    minno = min(minno,a[i]);


   }
   cout<<"Maximum element of array is : "<<maxno<<endl<<"Minimum element of array is : "<<minno;
   
   return 0;
}