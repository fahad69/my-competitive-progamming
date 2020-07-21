#include <iostream>

using namespace std;

int main() {
	long long n; 
	cin>>n;
	for(int i=0; i<n; i++)
	{
		unsigned long long x; 
		cin>>x; 
		cout<<(x*(x+1)*(2*x+1))/6<<endl;
	}
	return 0;
}
