#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	long long int t;
	cin>>t;
	read:
	while(t--)
	{
		unsigned long long n,k,s=0;
		cin>>n;
		cin>>k;
        if(k<=0)
        {
        	goto read;
        }
        if(n%k!=0)
        	goto read;
		if(k==1)
			{
				cout<<"NO"<<endl;
                goto read;   
			}
		if(n==k)
		{
			cout<<"YES"<<endl;
			goto read;
		}
        s = n/k;
        
        if(s%k==0)
            {
        		cout<<"NO"<<endl;
        		goto read;
        	}
        
        cout<<"YES"<<endl;
    }     
	return 0;
}