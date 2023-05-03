#include<iostream>
using namespace std;
main()
{
    int i,j,n;
    cin>>n;
    for(i=0;i;i<=n;i++)
    {
        for(j=0;j<=n;j++)
        if(j<n-i||j<n+i)
        cout<<"n";
        else cout<<" ";
    }cout<<"\n";
}