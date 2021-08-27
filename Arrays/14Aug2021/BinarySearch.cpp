#include<iostream>
using namespace std;

int binary_search(int a[],int n ,int key)
{
  int s =0;
  int e =n-1;
  while(s<=e)
  {
     int mid = (s+e)/2;
     if(a[mid]==key)
     {
       return mid;
     }
     else if(a[mid]>key)
     {
       e = mid - 1;
     } 
     else
     {
       s = mid + 1;
     }
  }
    return -1;

}
int main()
{
  int n,key;
  cin >> n;

  int a[100];
  
    for(int i=0;i<n;i++)
    {
      cin >> a[i];
    }
    
    //Ask for Element we want to search

    cout << "Enter the Element you want to search : ";
    cin >> key;

    int bs = binary_search(a,n,key);

    if(bs == -1)
    {
      cout<<key<<" not found";
    }
    else
    {
      cout <<"Element is at index : "<< bs << endl;
    }

return 0;
}

