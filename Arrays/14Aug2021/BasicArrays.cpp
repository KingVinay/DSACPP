#include<iostream>
using namespace std;
int main()
{
  //if initialised its elements other than given will have 0 stored or if not initialised it will have garbage value

  // int a[10] = {1,2,3};
  // int a[10];

 //so we should initialize array atleast with 0;
 int a [10]={0};
 
 //size  of array
 cout<<sizeof(a)<<endl;

 //no. of elements
 int n = sizeof(a)/sizeof(int);

 cout<<n<<endl;
 //Input elements from the user
 for(int i =0;i<5;i++)
  { 
    cin>>a[i];
  }
  //update particular index
  a[8]=100;

  //Print all the first 10 elements of array
  for(int i =0;i<n;i++)
   {
     cout<<a[i]<<",";
   }


return 0;
}

 