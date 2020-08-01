/*1. Program to search an elenment in an array*/
#include<iostream>
using namespace std;
int  main()
{
    int n,ele;
    cout<<"enter size of array";
    cin>>n;
    int ar[n];
    cout<<"enter array elements";
    for(int i=0;i<n;i++)
        cin>>ar[i];
    cout<<"enter element to be searched";
    cin>>ele;
    int flag=0;
    for(int i=0;i<n;i++)
    {
        if(ele==ar[i])
        {
            cout<<i<<endl;
            flag=1;
        }
        
    }
    if(flag==0)
        cout<<"No. is not present in an array";
    
}