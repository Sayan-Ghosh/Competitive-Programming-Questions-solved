#include <bits/stdc++.h>
using namespace std;
long long int *multiply(long long int A[], long long int B[], long long int m, long long int n) 
{ 
   long long int *prod = new long long int[m+n-1]; 

   for (int i = 0; i<m+n-1; i++) 
     prod[i] = 0; 
   for (int i=0; i<m; i++) 
   { 
     for (int j=0; j<n; j++) 
         prod[i+j] += A[i]*B[j]; 
   } 
  
   return prod; 
} 
int main(int argc, char const *argv[])
{
	long long int n;
	cin>>n;
	while(n--)
	{
	     long long int a,b,i,j,k;
	     cin>>a>>b;
	     long long int arr1[a], arr2[b];
	     for(i = 0; i<a ; ++i)
	     {
	     	cin>>arr1[i];
	     }
	     for(j =0; j<b ; ++j)
	     {
	     	cin>>arr2[j];
	     }
         long long int *prod = multiply(arr1, arr2, a, b); 
         for(k =0; k<(a+b-1) ; k++)
         {
         	cout<<prod[k]<<endl;
         }
	}
	return 0;
}