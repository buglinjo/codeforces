#include <iostream>
using namespace std;
 int main()
{
	int n,i, j, sum1=0, sum2=0, k=1,x ;
	cin >> n;
	int a[n];
	for(i=0;i<n;i++)
		cin>>a[i] ;
	i=0 ;  j=n-1 ;
	while(i<=j)
	{
		if(k%2!=0)
		{
			x=a[i]>a[j]?a[i++]:a[j--] ;
			sum1+=x;
			k++ ;
		}
		else
		{
			x=a[i]>a[j]?a[i++]:a[j--] ;
			sum2+=x;
			k++ ;
		}
	}
	cout<<sum1<<" "<<sum2;
}