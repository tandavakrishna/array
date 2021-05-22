#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    int cid=0,max=INT_MIN;;
    for(int i=0;i<n;i++)
        cin>>a[i];

    cout<<endl;
    for(int i=0;i<n;i++)
    {
        if(a[i]>max)
        max=a[i];
    }
    cout<<"the min value is "<<max;
    
}
