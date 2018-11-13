#include<iostream>
using namespace std;
void MaxHeapify(int a[],int i,int n)
{
    int j,temp;
    temp=a[i];
    j=2*i;
    while(j<=n)
    {
        if((j<n)&&(a[j]<a[j+1]))
            j=j+1;
        if(temp>a[j])
            break;
        else  if(temp<=a[j])
        {
            a[j/2]=a[j];
            j=2*j;
        }
    }
    a[j/2]=temp;
    return;
}

void BuildMaxHeap(int a[],int n)
{
int i;
for(i=n/2;i>=1;i--)
{
    MaxHeapify(a,i,n);
}
}

void HeapSort(int a[],int n)
{
    int i,temp;
    for(i=n;i>=2;i--)
    {
        temp=a[i];
        a[i]=a[1];
        a[1]=temp;
        MaxHeapify(a,1,i-1);
    }
}
int main()
{
    int a[100],n,i;
    cout<<"Enter no of elements"<<endl;
    cin>>n;
    cout<<"Enter elements"<<endl;
    for(i=1;i<=n;i++)
        cin>>a[i];
    BuildMaxHeap(a,n);
    HeapSort(a,n);
    cout<<"Display in sorted order"<<endl;
    for(i=1;i<=n;i++)
        cout<<a[i]<<" ";
}
