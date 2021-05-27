#include<iostream>
using namespace std;
int main()
{
    int n,x,result,flag=0;
    cout<<"enter the total elements to insert"<<endl;
    cin>>n;
    int arr[n];
     cout<<"enter "<<n<<" elements"<<endl;
    for (int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"enter the element to delete"<<endl;
    cin>>x;
    for(int k=0;k<n;k++)
    {
    	if(arr[k]==x)
    	{
		result=k;
    	flag=1;
    	break;
       }
	}
    if(flag==0)
    {
        cout<<"the given element not present in the array"<<endl;
    }
    else
    {
        for(int j=result;j<n-1;j++)
        {
            arr[j]=arr[j+1];

        }
        arr[n-1]=0;
        n-=1;
        cout<<"elements in array after deleting"<<endl;
        for (int i=0;i<n;i++)
        {
            cout<<arr[i]<<endl;
        }
        
    }
}
