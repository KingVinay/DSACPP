// Solution for Inserting Repeating Character in the middle of an string and return an dynamic array

#include <bits/stdc++.h>
using namespace std;

char* repeatcharacter(char str[],char c,int n)
{
    string s(str);
    int m = s.length(),count=0;
    if(m==0)
    {
        return NULL;
    }
    // Instead of Dynamic Array We can Create a Static Array too and return it as a reference

    // static char a[100000]; 

    char* a = new char[m+n];
    
    for(int i=0;i<m/2;i++)
    {
        a[count++]=s[i];
        
    }
    
    while(n>0)
    {
        a[count++]= c;
        n--;
    }
    
    for(int i=m/2;i<m;i++)
    {
        a[count++] = s[i];
    }
    
    return a;
    
}

int main()
{
    int n;
    char c;
    cin>>n>>c;
    char a[100]={};
    
    char * ptr = repeatcharacter(a,c,n);
    if(ptr==NULL){cout<<"Empty String";}
    cout<<ptr;
    
    return 0;
    
}