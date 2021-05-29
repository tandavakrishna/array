#include<iostream>
using namespace std;
int main()
{
    int n,temp;
    
    cout<<"enter total number of elements"<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter "<<n<<" elements"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int j=0;j<n/2;j++)
    {
        
        temp=arr[j];
        arr[j]=arr[n-j-1];
        arr[n-j-1]=temp;
    
    
    }
    cout<<"array in reverse"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }
}
