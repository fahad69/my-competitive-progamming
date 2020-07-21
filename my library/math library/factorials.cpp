#include <bits/stdc++.h>

using namespace std;

long long factorials[1000001];

void generate_factorials()
{
    factorials[0] = 1;
    for (long long i = 1; i <=1000000 ; ++i) {
        factorials[i] = (factorials[i-1]%1000000007*i)%1000000007;
    }
}


int main()
{
    int n;
    scanf("%d", &n);
    generate_factorials();
    cout<<factorials[n];
}