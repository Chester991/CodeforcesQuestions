#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

#define int long long

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, count = 0;
    vector<int> v(n);
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (v[i] == 1)
        {
            count++;
        }
    }
    if(count == 0){
        cout<<"EASY"<<endl;
    }
    else{
        cout<<"HARD"<<endl;z`z
    }

}