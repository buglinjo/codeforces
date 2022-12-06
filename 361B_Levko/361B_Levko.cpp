#include <iostream>
using namespace std;
int main()
{
	int n,k;
	cin>>n>>k;
	int a[n+1];
	if(n==1 && k==0)
		cout<<1;
	else if(k<=n-1)
	{
		a[1]=1;
		for (int i=2;i<=k+1;i++)
			a[i]=i ;
		for (int i=k+2;i<=n;i++)
		{
			a[i]=i;
			int temp=a[i];
			a[i]=a[1];
			a[1]=temp;
		}
		for (int i=1;i<=n;i++)
			cout<<a[i]<<" ";
	}
	else
		cout<<-1;
	return 0;
}