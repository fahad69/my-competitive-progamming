#include <bits/stdc++.h>

using namespace std;


int main()
{
    int t;
    cin>>t;

    for (int i = 0; i < t ; ++i) {
        long long n;
        scanf("%lld", &n);
        if(n==0)
            printf("Zacob Zacob!\n");
        else if(n<4)
            printf("Sorry Zacob!\n");
        else if(n%2==0)
            printf("Zacob Zacob!\n");
        else
            printf("Sorry Zacob!\n");
    }


}

