#include<iostream>
using namespace std;
int main()
{
int i,choice,pos=0,n,a[100],item=0,s=0,flag=0;
cout<<"Enter size of array";
cin>>n;
cout<<"Enter elements of array";
for(i=0;i<n;i++)
{
cin>>a[i];}
cout<<"Enter choice::";
cout<<"Enter 1 for insertion"<<endl;
cout<<"Enter 2 for deletion"<<endl;
cout<<"Enter 3 for searching"<<endl;
cout<<"Enter 4 for display"<<endl;
cin>>choice;
while(choice!=-1)
{
switch(choice)
{
case 1:
cout<<"Enter position where element is to be inserted";
cin>>pos;
cout<<"Enter element to be inserted";
cin>>item;
for(i=n-1;i>=pos;i--)
{
a[i+1]=a[i];
}
a[pos]=item;
break;

case 2:
cout<<"Enter position at which element is to be deleted";
cin>>pos;
for(i=pos;i<=n-1;i++)
{
a[i]=a[i+1];
}
break;

case 3:
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
break;

case 4:
cout<<"Entered elements are: ";
    for(i=0;i<n;i++)
    {
    cout<<"a["<<i<<"]="<<a[i]<<endl;
    }
    break;
}
cout<<"Enter choice again"<<endl;
    cin>>choice;
}
}
