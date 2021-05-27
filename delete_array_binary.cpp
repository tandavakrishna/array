#include<iostream>
using namespace std;
int search(int val,int arr[],int first,int end)
{
    int mid=(first+end)/2;
    if(end==mid || first==mid)
    return -1;
    else if(val==arr[mid])
    {
        return mid;
    }
    else if(val>arr[mid])
    {
        return search(val,arr,mid+1,end);
    }
    else if(val<arr[mid])
    {
        return search(val,arr,first,mid-1);       
    }
    

}
int main()
{
    int n,x,result;
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
    result=search(x,arr,0,n-1);
    if(result==-1)
    {
        cout<<"the given element not present in the array"<<endl;
        exit(0);
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
