#include<iostream>
using namespace std;
int main()
{
    int c,n,pos,val;
    cout<<"enter the capacity of the array"<<endl;
    cin>>c;
    cout<<"enter the total number of element to insert"<<endl;
    cin>>n;
    cout<<"enter "<<n<<"elements"<<endl;
    int arr[c];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    if(n==c)
    {
        cout<<"the array is full"<<endl;
        exit(0);
    }
    cout<<"enter position and value"<<endl;
    cin>>pos>>val;
    
    for(int j=n+1;j>=pos-1;j--)
    {
        arr[j]=arr[j-1];
        
    }   
    arr[pos-1]=val;
    n+=1;
    cout<<"finally the elements in the array"<<endl;
    for(int k=0;k<n;k++)
    {
        cout<<arr[k]<<endl;
    }

}
