#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    map<int,int>dic;
    for(int i=0;i<n;i++)
    {
        dic[arr[i]]++;
    }
    int maxi=0;
    int id=0;
    for(auto it:dic)
	{
        if(maxi<it.second)
		{
            maxi=it.second;
            id=it.first;
        }
	}
    cout<<id;

}
