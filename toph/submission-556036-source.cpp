#include <iostream>

using namespace std;

int main() {
	int a, b; 
	cin>>a>>b;
	cout<<a+b-(abs(a-b)+1);
	return 0;
}
