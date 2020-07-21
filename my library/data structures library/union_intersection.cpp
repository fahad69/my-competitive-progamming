

#include<bits/stdc++.h>
using namespace std;

int main()
{

    unordered_set<int> set_of_A;
    vector<int> common_set;
    unordered_set<int> union_set;
    int a[10];
    int b[10];

    for(int i = 0; i<10; i++)
    {
        a[i] = rand()%15;
        b[i] = rand()%15;
        set_of_A.insert(a[i]);
        union_set.insert(a[i]);
        union_set.insert(b[i]);

    }

    cout<<"A: "<<"\n";

    for(int i = 0; i<10; i++)
    {
     cout<<a[i]<<" ";
    }
    cout<<"\n";

    cout<<"B: "<<"\n";

    for(int i = 0; i<10; i++)
    {
     cout<<b[i]<<" ";
     if(set_of_A.count(b[i]))
        common_set.push_back(b[i]);
    }
    cout<<"\n";

    cout<<"Common: "<<"\n";

    for(auto i:common_set)
        cout<<i<<" ";

    cout<<"\nUnion: "<<"\n";

    for(auto i:union_set)
        cout<<i<<" ";


    return 0;
}
