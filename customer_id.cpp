#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    int cid=0,maxi=INT_MIN;;
    for(int i=0;i<n;i++)
        cin>>a[i];

    cout<<endl;
    
    for(int i=0;i<n;i++)
    {
       int count=0;
       
       for(int j=0;j<n;j++)
       {
           if(a[i]==a[j])
           count+=1;
        }
        if(maxi<count)
        {
            maxi=count;
            cid=a[i];
        } 
        
    }
    cout<<"the most visited customer id is "<<cid;
}
