#include<iostream>
using namespace std;
void mergeArrays(int a1[], int a2[], int n1, int n2, int a3[])
{
    int i = 0, j = 0, k = 0;
    while (i<n1 && j <n2)
    {
        if (a1[i] < a2[j])
            a3[k++] = a1[i++];
        else
            a3[k++] = a2[j++];
    }
    while (i < n1)
        a3[k++] = a1[i++];
    while (j < n2)
        a3[k++] = a2[j++];
}
int main()
{
int i,j,m,n,a[30],b[30],c[60];
cout<<"Enter no of elements in 1 array";
cin>>n;
cout<<"Enter elements:";
for(i=0;i<n;i++)
cin>>a[i];
cout<<"Enter no of elements in 2 array";
cin>>m;
cout<<"Enter elements:";
for(i=0;i<m;i++)
cin>>b[i];

for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(a[i]>a[j]){
				int temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}

for(i=0;i<m;i++){
		for(j=i+1;j<m;j++){
			if(b[i]>b[j]){
				int t=b[i];
				b[i]=b[j];
				b[j]=t;
			}
		}
	}
cout<<"After selection sort of 1 array"<<endl;
for(i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
cout<<endl;
cout<<"After selection sort of 2 array"<<endl;
for(i=0;i<m;i++){
		cout<<b[i]<<" ";
	}
cout<<endl;
mergeArrays(a, b, n, m, c);
cout << "Array after merging" <<endl;
    for (i=0; i < n+m; i++)
        cout << c[i] << " ";
}
