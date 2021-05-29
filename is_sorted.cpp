#include<iostream>
using namespace std;
int main()
{
    int n,flag=0;
    int arr[n];
    cout<<"enter total number of elements"<<endl;
    cin>>n;
    cout<<"enter "<<n<<" elements"<<endl;
    co
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int j=0;j<n-1;j++)
    {
        if(arr[j]<arr[j+1])
        flag=0;
        else
        {
        flag=1;
        break;
        }
    }
    if(flag==0)
    cout << "the array is in sorted order "<<endl;
    else
    cout << "the array is not in sorted order "<<endl;
}
