#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
        cin>>arr[i];
    int max1=INT_MIN,max2=INT_MIN;
    for(int i=0;i<n;i++)
    {
    	if(arr[i]>max1)
    	{
    		max2=max1;
    		max1=arr[i];
		}
		else if(max2<arr[i] && arr[i]!=max1)
		{
			max2=arr[i];
		}
	}
	cout<<endl;
	cout<<max2;
    return 0;
}
