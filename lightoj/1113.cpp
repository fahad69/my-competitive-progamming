#include <bits/stdc++.h>
using namespace std;

int main()
{
    //freopen("out.txt", "w", stdout);
    int T, no = 0;
    cin >> T;
    while (T--)
    {
        int x = 1;
        string stin;
        stin = "http://www.lightoj.com/";
        stack<string> first, backw;
        while (1)
        {
            string st;
            getchar();
            cin >> st;

            if (st == "QUIT")
                break;

            if (x == 1)
                cout << "Case " << ++no << ":\n";
            x--;

            if (st == "BACK")
            {
                if (backw.empty())
                    cout << "Ignored\n";

                else
                {
                    first.push(stin);
                    stin = backw.top();
                    backw.pop();
                    cout << stin << endl;
                }
            }

            else if (st == "FORWARD")
            {
                if (first.empty())
                    cout << "Ignored\n";

                else
                {
                    backw.push(stin);
                    stin = first.top();
                    cout << stin << endl;
                    first.pop();
                }
            }

            else
            {
                getchar();
                backw.push(stin);
                cin >> stin;
                cout << stin << '\n';

                while (!first.empty())
                    first.pop();
            }
        }
    }

    return 0;
}
