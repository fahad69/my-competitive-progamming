
#include <bits/stdc++.h>

using namespace std;


int main() {
    long long a = -1, b = -1;

    while(true)
    {
        cin>>a>>b;

        if(a==0 && b==0)
            break;

        long long sum = (b*(b+1))/2 - ((a-1)*a)/2;
        long long ans = b+1-a;
        cout<<ans<<" "<<sum<<endl;





    }



    return 0;
}