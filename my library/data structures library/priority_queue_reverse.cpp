

#include<bits/stdc++.h>
using namespace std;

int main()
{

    //smol to large

    priority_queue<int, vector<int>, greater<int>> q;

    for(int i = 0; i<20; i++)
    q.push(rand()%20);

    cout<<"queue: ";

    for(int i = 0; i<20; i++)
    {
        cout<<q.top()<<" ";
        q.pop();
    }

    return 0;
}
