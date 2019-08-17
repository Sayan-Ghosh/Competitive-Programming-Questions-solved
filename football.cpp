#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,i,res=0,max=0;
		cin>>n;
		int a[n],b[n];
		for(i = 0; i<n; i++)
		{
			cin>>a[i];
		}
		for (i = 0; i < n; i++)
		{
			cin>>b[i];
		}
		max = (a[0]*20) - (b[0]*10);
		if(max<0)
			max = 0;
		for(i = 1; i<n ; i++)
		{
            res = (a[i]*20) - (b[i]*10);
            if(res<0)
            	res = 0;
            if(res>max)
            	max = res;
		}
		cout<<max<<endl;
	}
	return 0;
}