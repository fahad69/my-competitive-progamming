#include <bits/stdc++.h>

using namespace std;


int main()
{
    ios_base::sync_with_stdio(0);cin.tie(nullptr);

    long long a, b, c;
    int flag = 1;
    while (1)
    {
        cin>>a>>b;
        if(a==b)
        {

            break;
        }

        if(flag==1)
        {
            flag = 0;
            if((a+b)%2==0)
                cout<<abs(a-b)/2;
            else
                cout<<"impossible";

        } else
        {
            if((a+b)%2==0)
                cout<<"\n"<<abs(a-b)/2;
            else
                cout<<"\nimpossible";
        }


    }
    return 0;
}