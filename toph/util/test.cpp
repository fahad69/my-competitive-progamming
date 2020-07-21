#include <bits/stdc++.h>
using namespace std;

int main()
{

    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
    vector<string> ss;
    string sp = "fahad_69";
    string s;
    while (getline(cin, s))
    {
        //cout << s;
        for (int i = 0; i < s.length(); i++)
        {
            if (i < 7 || i > 15)
                cout << s[i];
            /*if (s[i] == ' ' && s[i + 1] == 'a' && s[i + 2] == 'g' && s[i + 3] == 'o' && s[i + 4] == ' ')
            {
                cout << "yes" << endl;
                while (i != s.length() - 1)
                    i++;
            }*/

            if (s[i + 3] == ' ' && s[i + 1 + 3] == 'a' && s[i + 2 + 3] == 'g' && s[i + 3 + 3] == 'o')
            {
                //cout << "yes" << endl;
                while (i != s.length() - 1)
                    i++;
            }
        }
        cout << endl;
    }
    return 0;
}