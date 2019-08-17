#include <iostream>
#include<string>
using namespace std;
int main(int argc, char const *argv[])
{
	long long int t;
	cin>>t;

	read:
	while(t--)
	{   

		long long int count = 0;
		string n;
        
		getline (cin>>ws, n);
		
        for(std::string::size_type i = 0; i < n.size(); ++i) 
        { 
              
              if(n[i]=='1')
        		count++;
        }
        
        if((count%2)!=0)
        {
        	cout<<"WIN"<<endl;
        	goto read;
        }
        cout<<"LOSE"<<endl;
	}
	return 0;
}