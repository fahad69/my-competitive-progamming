#include <bits/stdc++.h>
using namespace std;

#define M 1000000007

int fibonacci[1000003];
void fib(int n)
{
    int f1 = 1, f2 = 1, f_new = 0;
    fibonacci[0] = 1, fibonacci[1] = 1;
    for (int i = 2; i <= n; ++i) {
        fibonacci[i] = (fibonacci[i-1] + fibonacci[i-2])%M;
    }
}


int main()
{
    fib(1000000);

    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; ++i) {
        int n;
        scanf("%d", &n);
        printf("%d\n", fibonacci[n-1]);
    }

    return 0;
}