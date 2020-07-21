#include<bits/stdc++.h>

using namespace std;

int marks[100005];

int main()
{
    
    int t;
    cin>>t;
    
    for (int i = 0; i < t; ++i)
    {
        int a;
        cin>>a;
        marks[a]++;
    }
    int flag = 0;
    for (int i = 0; i <t; ++i)
    {
        if(marks[i]%(t-i))
        {
            flag = 1;
            break;
        }
    }
    
    if(flag==0)
        cout<<"Possible";
    else
        cout<<"Impossible";
    
    return 0;
}

