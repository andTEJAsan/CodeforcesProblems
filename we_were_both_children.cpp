#include<vector>
#include<iostream>
typedef long long ll;
using namespace std;
void solve(){

    ll n;
    cin >> n;
    vector<ll> cnt(n+1,0);
    for(int i = 0 ; i < n; i ++)
    {
        ll x;
        cin >> x;
        if (x <= n) cnt[x]++;
    }
    vector<ll> mx(n+1);
    for(int i = 1; i <= n; i++)
    {
        for(int j = i; j <=n; j+=i)
        {
            mx[j] += cnt[i];
        }
    }
    ll maxi = mx[0];
    for(int i = 1; i <= n; i++)
    {
        if (mx[i] > maxi ) maxi = mx[i];
    }
    cout << maxi<< "\n";
    

}

int main() 
{
    ll t;
    cin >> t;
    while(t--) solve();
    return 0;
}

