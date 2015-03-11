#include <iostream>

using namespace std;

int main()
{
	int n=0;
	cout<<"input the number n"<<endl;
	cin>>n;
	cout<<n<<endl;
	
	while (n!=1)
	{
		if(n%2==1)
			n=3*n+1;
		else
			n=n/2;
	cout<<n<<endl;
	}
	
	return 0;
}
