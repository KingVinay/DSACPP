#include<bits/stdc++.h>
using namespace std;

void print(map<int,string> &m)
{
  cout<<m.size()<<endl;
  for(auto &pr:m)//directly accesing pairs
  {
    cout<<pr.first<<" "<<pr.second<<endl;
  }
}
int main()
{
  map<int,string> m;
  m[1]="abc";//O(logn)
  m[5]="cdc";
  m[3]="acd";
  m[6];//it adds key 6 with empty string for string or 0 for int
  m[5]="cde";//map has unique key so just updates the value to that key
  m.insert(make_pair(4,"afg"));
  cout<<m[3]<<endl;

  // Also depends on length of key
  // m["abcd"]="angdf"; //s.size()*log(n)
  

  auto it = m.find(5); //O(logn) returns iterator
  
  m.erase(6);//O(logn) //using key it deletes pair with key 5
  m.erase(it);//deletes whole pair which iterator is pointing to

  // if(it == m.end()){cout<<"No Value"<<endl;}
  // else{cout<<(*it).second<<endl;} 

  // print(m);

  it = m.find(5);

  if(it!=m.end()) //so pre checking 
  m.erase(it);//as no such value so map iterator points to m.end() which is nothing so segementation fault error

  m.clear();//clears whole map
  print(m);



}