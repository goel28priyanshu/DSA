#include <bits/stdc++.h>
using namespace std;
#define quickio                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);

typedef long long int ll;

int main()
{
    quickio;
    int n = 1;
    cin>>n;
    ll arr[n][2], res[n] = {0};
    
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < 2; j++)
        {
            cin>>arr[i][j];
        }
    }

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(arr[j][0] > arr[i][0] && arr[j][1] < arr[i][1])
            {
                res[i]+=2;
            }
        }
    }
    
    for(int i = 0; i < n; i++)
    {
        cout<<res[i]<<" ";
    }

    return 0;
}

// https://onlinecourses.nptel.ac.in/noc21_cs22/progassignment?name=118
