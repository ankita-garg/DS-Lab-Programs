#include<iostream>
using namespace std;
int main()
{
int a[100],s,n,i,flag=0;
cout<<"Enter size of array";
cin>>n;
cout<<"Enter elements ";
for(i=0;i<n;i++)
cin>>a[i];
cout<<"Enter no to be searched";
cin>>s;
for(i=0;i<n;i++)
{
if(a[i]==s)
    {
    flag=1;
    break;
    }
}
if(flag==1)
{
    cout<<"Search is successful at location "<<i<<endl;
}
else
    cout<<"Search is unsuccessful";
}
