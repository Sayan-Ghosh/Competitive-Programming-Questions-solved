#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	long long int fib[60], a[60];
	int t,i,j;
	
	fib[0] =0;
	fib[1] = 1;
     a[0] = 0;
	 a[1]= 1;
	 for(i=2;i<60;i++)
	 {
	 	fib[i] = fib[i-2] + fib[i-1];
	 	a[i] = fib[i]%10;
	 }
	 cin>>t;
	 while(t--)
	 {
	 	long long int n,s=1,t,ans,l;
	 	cin>>n;
	 	while(s<=n)
		{
			s=s*2;
			t=s/2;
		}
		ans = t/60;
		l = t - (60*ans);
		cout<<a[l-1]<<endl;
	 }
    
	return 0;
}