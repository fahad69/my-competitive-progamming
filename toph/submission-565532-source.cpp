#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long n, k;
    
    cin>>n>>k;
    vector<long long> pp;
    for (int i = 0; i < n; ++i)
    {
        long long x; cin>>x;
        pp.push_back(x);
    }
    
    sort(pp.begin(), pp.end());
    
    long long curr = pp[0];
    long long j;
    for ( j = 0; j < n - 1; ++j)
    {
        long long diff = (j+1)*(pp[j+1] - pp[j]);
        //cout<<diff<<endl;
        if(diff<=k)
        {
            k = k - diff;
            pp[j] = pp[j+1];
            curr = pp[j];
        } else
        {
            break;
        }
    }
    
    //cout<<j<<endl;
    if(k>0 )
    {
        if(j==n-1)
            cout<<pp[n-1]+k/n<<endl;
        else
            cout<<min(curr+k/(j+1), pp[j+1])<<endl;
            //cout<<"here"<<endl;
    } else
    {
        cout<<curr<<endl;
    }
    
    //cout<<k<<endl;
    
    
    return 0;
}

