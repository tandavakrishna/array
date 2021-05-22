#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    int cid=0,min=INT_MAX;;
    for(int i=0;i<n;i++)
        cin>>a[i];

    cout<<endl;
    for(int i=0;i<n;i++)
    {
        if(a[i]<min)
        min=a[i];
    }
    cout<<"the min value is "<<min;
    
}
