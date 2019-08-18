#include <bits/stdc++.h>
using namespace std;
void add(long long int level[], long long int N, long long int lo, long long int hi, int val) 
{ 
    level[lo] += val; 
    if (hi != N - 1) 
       level[hi + 1] -= val; 
} 
void updateArray(long long int level[], long long int N) 
{ 
    for (long long int i = 1; i < N; i++) 
        level[i] += level[i - 1]; 
} 
int main(int argc, char const *argv[])
{
	long long int t;
	cin>>t;
	read:
	while(t--)
	{
		long long n,i,j,min=0,max=0,k;
		cin>>n;
		long long c[n],h[n],level[n];
		for(i=0;i<n;i++)
		{
			cin>>c[i];
		}
		
		for(i=0;i<n;i++)
		{
			level[i]=0;
		}
		for(i=0;i<n;i++)
		{
			min=i-c[i];
			if(min<0)
				min = 0;
			max=i+c[i];
			if(max>n)
			    max=n-1; 
			add(level, n, min, max, 1);
			
		}
		updateArray(level, n); 
        sort(level,level+n);
		for(k=0;k<n;k++)
		{
			cin>>h[k];
		}
        sort(h,h+n);
        for(i=0;i<n;i++)
        {
        	if(level[i]!=h[i])
        	{
        		cout<<"NO"<<endl;
        		goto read;
        	}

        }
        cout<<"YES"<<endl;
        goto read;
	}
	return 0;
}