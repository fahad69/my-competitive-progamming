#include <bits/stdc++.h>

using namespace std;

class bowling
{
public:
    long long a, b, c, d;

    bowling(long long a, long long b, long long c, long long d) : a(a), b(b), c(c), d(d) {}

    bowling() {}
};

bool cmp(bowling x, bowling y)
{
    if (!x.a && !x.b && !x.c && !x.d) return 0;
    if (!y.a && !y.b && !y.c && !y.d) return 1;
    
    if(x.d==y.d)
    {
        if(x.c==y.c)
        {
            if(x.b==y.b)
            {
                if(x.a==y.a)
                    return x.a<y.a;

                return x.a<y.a;
            }

            return x.b>y.b;
        }
        return x.c<y.c;
    }
    return x.d>y.d;
}





int main()
{
    ios_base::sync_with_stdio(0);cin.tie(nullptr);


    int t;
    cin>>t;
    vector<bowling> figures;
    for (int i = 0; i < t; ++i) {
        long long a, b, c, d;
        char ch;
        cin>>a>>ch>>b>>ch>>c>>ch>>d;
        figures.emplace_back(a, b, c, d);
        //cout<<a<<b<<c<<d<<endl;
    }

    sort(figures.begin(), figures.end(), cmp);

    for (int j = 0; j < figures.size(); ++j) {
        cout<<figures[j].a<<"-"<<figures[j].b<<"-"<<figures[j].c<<"-"<<figures[j].d;
        if(j!=figures.size()-1)
            cout<<endl;
    }

    return 0;
}