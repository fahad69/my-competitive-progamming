#include <bits/stdc++.h>

using namespace std;


int main()
{

    int lo = 0, hi = 1000000, mid;
    string user;
    while (lo<=hi)
    {
        mid = (lo+hi)/2;
        cout<<mid<<endl;
        cin>>user;
        if(user=="Bigger")
        {
            lo = mid + 1;
        }
        else if(user=="Smaller")
        {
            hi = mid - 1;
        }
        else if(user=="Bingo!")
            break;
    }
    return 0;

}

