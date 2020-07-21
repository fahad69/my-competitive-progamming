#include <bits/stdc++.h>

using namespace std;

unsigned long long fact(unsigned long long x)
{
    if (x == 0)
        return 1;
    return x * fact(x - 1);
}

int main()
{
    unsigned long long x[21];

    for (int i = 0; i <= 20; i++)
    {
        x[i] = fact(i);
    }

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int pp[21] = {0};
        unsigned long long a;
        cin >> a;
        if (a == 0)
        {
            printf("Case %d: impossible\n", i + 1);
            continue;
        }

        for (int j = 20; j >= 0; j--)
        {
            if (a >= x[j])
            {
                a = a - x[j];
                pp[j] = 1;
            }
        }

        if (a == 0)
        {
            string s = "";

            printf("Case %d: ", i + 1);
            int flag = 1;

            for (int k = 0; k <= 20; k++)
            {

                if (pp[k] == 1)
                {
                    if (flag == 1)
                    {
                        flag = 0;
                        cout << k << "!";
                    }
                    else
                    {
                        cout << "+" << k << "!";
                    }
                }
            }
            cout << endl;
        }
        else
            printf("Case %d: impossible\n", i + 1);
    }

    //for(int i = 0; i<=20; i++)
    // cout<<i<<" "<<x[i]<<endl;
    return 0;
}
