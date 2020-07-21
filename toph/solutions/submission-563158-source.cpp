#include <bits/stdc++.h>

using namespace std;


int main()
{

    int t;
    cin>>t;

    for (int i = 0; i < t; ++i) {
        int n;
        cin>>n;
        priority_queue<int> q;

        int mxx, times;
        cin>>mxx>>times;
        int arr[n];
        for (int j = 0; j < n; ++j)
            cin>>arr[j];

        for (int k = 0; k < n; ++k) {

            int curr_times = 0, len = 0;
            if(arr[k]<=mxx)
            {
                while(arr[k]<=mxx)
                {
                    //cout<<arr[k]<<" ";
                    if(k==n-1)
                        break;
                    if(arr[k]==mxx)
                        curr_times++;
                    k++;
                    len++;
                }
            }
            if(curr_times>=times)
                q.push(len);
            //cout<<endl;
        }


        if(q.size()==0)
            cout<<-1<<"\n";
        else
            cout<<q.top()<<"\n";

    }
    return 0;

}

