#include<bits/stdc++.h>

using namespace std;

vector<string> split(string s)
{
    vector<string> res;
    for (int i = 0; i < s.size(); ++i)
    {
        string ss;
        while (s[i] != '.')
        {
            ss += s[i];
            i++;
            if (i == s.size())
                break;
        }
        res.push_back(ss);
    }
    return res;
}

string format(vector<string> ss)
{
    string result;
    if (ss.size() == 1)
    {
        if (ss[0].size() == 1)
            result += "0" + ss[0] + ".00.00";
        else
            result += ss[0] + ".00.00";
    } else if (ss.size() == 2)
    {
        if (ss[0].size() == 1)
            result += "0" + ss[0];
        else
            result += ss[0];
        if (ss[1].size() == 1)
            result = result + "." + "0" + ss[1] + ".00";
        else
            result += "." + ss[1] + ".00";
    } else
    {
        if (ss[0].size() == 1)
            result += "0" + ss[0];
        else
            result += ss[0];
        if (ss[1].size() == 1)
            result = result + "." + "0" + ss[1];
        else
            result += "." + ss[1];
        if (ss[2].size() == 1)
            result = result + "." + "0" + ss[2];
        else
            result += "." + ss[2];
    }
    return result;
}

int main()
{
    //freopen("in.txt", "r", stdin);
    //freopen("out2.txt", "w", stdout);
    
    string s1, s2;
    cin >> s1;
    cin >> s2;
    auto res1 = split(s1);
    auto res2 = split(s2);
    
    string p1 = format(res1);
    string p2 = format(res2);
    
    if (p1 > p2)
        cout << s1;
    else
        cout << s2;
    /*for (int i = 0; i < res1.size(); ++i)
    {
        cout << res1[i] << endl;
    }*/
    return 0;
}

