#include<iostream>
using namespace std;
main(){
    int i,j;
    int n=5;
    for(i=0;i<=n;i++)
    {for(j=0;j<=5;j++){
    if(i==0||i==5||j==0||j==5)
    cout<<"*";
    else
    cout<<" ";
    }
    cout<<"\n";
    }
 return 0;
}