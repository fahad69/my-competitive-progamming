#include <bits/stdc++.h>

using namespace std;

int main()
{

    int t;
    cin >> t;
    vector<int> a;
    for (int i = 1; i <= t; i++)
    {
        int n, m;
        cin >> n >> m;
        int wheel[m + 1];

        for (int p = 0; p < m + 1; p++)
            wheel[p] = 0;

        unordered_set<int> riders[n + 1];

        vector<int> line;
        for (int p = 1; p <= n; p++)
            line.push_back(p);

        int full = 0, ans = 0, j = 0;
        for (j = 1;; j++)
        {

            int current_bottom = (j - 1) % (m) + 1;
            //cout<<current_bottom<<endl;

            if (wheel[current_bottom] != 0)
            {
                int current_namtese = wheel[current_bottom];
                riders[current_namtese].insert(current_bottom);
                if (riders[current_namtese].size() != m)
                    line.push_back(current_namtese);
                wheel[current_bottom] = 0;
            }

            if (wheel[current_bottom] == 0)
            {
                for (int k = 0; k < line.size(); k++)
                {
                    //cout<<line.size()<<endl;
                    int line_front = line[k];
                    if (riders[line_front].find(current_bottom) != riders[line_front].end())
                        continue;
                    else
                    {
                        wheel[current_bottom] = line_front;
                        line.erase(line.begin() + k);
                        break;
                    }
                }
            }

            full = 1;
            for (int z = 1; z <= n; z++)
            {
                if (riders[z].size() != m)
                {
                    full = 0;
                    break;
                }
            }

            if (full == 1)
                break;
        }

        ans = j * 5;
        printf("Case %d: %d\n", i, ans);
    }

    return 0;
}
