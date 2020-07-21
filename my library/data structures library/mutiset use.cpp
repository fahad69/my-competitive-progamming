#include <bits/stdc++.h>
using namespace std;


int main() {
    

    multiset<int> mset;
    
    mset.insert(5);
    mset.insert(4);
    mset.insert(9);
    mset.insert(2);
    mset.erase(mset.find(2));
    
    //FINDING THE MINIMUM
    cout<<*mset.lower_bound(-1000000002)<<endl;
    
    return 0;
}
