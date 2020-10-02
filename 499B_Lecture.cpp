#include <iostream>
#include <string>
using namespace std;
int main()
{
	int n, m , i ,j ;
	cin >>n>>m ;
	string l1[m+1], l2[m+1], text[n+1], ans[n+1] ;
	for(i=1;i<=m; i++)
		cin>>l1[i]>>l2[i];
	for(i=1;i<=n;i++)
		cin>>text[i] ;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=m;j++)
		{
			if(text[i]==l1[j])
			{
				ans[i] = l1[j].length()<=l2[j].length()?l1[j]:l2[j]  ;
			}
		}
	}
	for(i=1;i<=n;i++)
	cout<<ans[i]<<" ";
	return 0;
}