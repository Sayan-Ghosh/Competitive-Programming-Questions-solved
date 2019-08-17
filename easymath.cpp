#include <bits/stdc++.h>
using namespace std;
int numsum(int num)
{
	int s = 0;
	while(num!=0)
	{
		s = s + num%10;
		num = num /10;
	}
	return s;
}
int main(int argc, char const *argv[])
{
	int t,n;
	cin>>t;
	while(t--)
	{
		int summax = 0,m,c,m1,j, key = 0;
		cin>>n;
		int a[n];
		for(int i=0; i<n ; i++)
		{
			cin>>a[i];
		}
		m1 = a[0]*a[1];
		key = numsum(m1);
		for(j=0;j<n;j++)
           {
           	for(c=j+1;c<n;c++)
             {
             	m = a[j]*a[c];
             	summax=numsum(m);
             
             	if(summax>key)
             	  key = summax; 
             		
             	} 
           }
         cout<<key<<endl;  
	}
	return 0;
}