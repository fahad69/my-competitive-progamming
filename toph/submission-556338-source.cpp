#include <bits/stdc++.h>

using namespace std;

int main() {
	
	long long a;
	scanf("%lld", &a);
	if(a%2==0)
		a = a/2;
	else
		a = a/2+1;
	printf("%lld", a);
}
