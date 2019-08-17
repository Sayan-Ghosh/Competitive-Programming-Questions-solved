#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,i,j,k,l,key=0,max=0,sum=0,sum1=0;
		cin>>n;
		int a[n];
		for(i =1 ; i<=n ; i++)
		{
			cin>>a[i];
		}
		for(j=1; j<=n ; j++)
		{
			sum += a[j]*j;
		}
		max = sum;
		for(k = 1; k<=n; k++)
		{
			key = a[k];
			a[k]=a[k+1];
			a[k+1]=key;
			
			for(l = 1; l<=n ; l++)
			{
				sum1 += a[l]*l; 
			}
			if(sum1>max)
			{
				max = sum1;
			}

		}
		cout<<max<<endl;
	}
	return 0;
}