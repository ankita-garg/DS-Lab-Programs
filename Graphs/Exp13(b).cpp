#include<iostream>
using namespace std;
int main()
{
int n,m,i,j,k,v,g[50][50],visit[50],visited[50],stack[100],top=-1;
cout<<"Enter no of vertices"<<endl;
cin>>n;
cout<<"Enter no of edges"<<endl;
cin>>m;
for(int k=1;k<=m;k++)
{
cout<<"Enter source"<<endl;
cin>>i;
cout<<"Enter destination"<<endl;
cin>>j;
g[i][j]=1;
}
cout<<"Enter source vertex"<<endl;
cin>>v;
cout<<v<<" ";
visited[v]=1;
k=1;
while(k<n)
{
for(int j=n;j>=1;j--)
{
if((g[v][j]!=0)&& visited[j]!=1 && visit[j]!=1)
{
visit[j]=1;
stack[++top]=j;
}
}
v=stack[top--];
cout<<v<<" ";
k++;
visit[v]=0;
visited[v]=1;
}
}
