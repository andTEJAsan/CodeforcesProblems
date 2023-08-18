#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
typedef long long ll;

void solve(){

    ll n;

    cin >> n;

    vector<ll> x(n);
    vector<ll> y(n);
    for(ll i = 0; i < n; i++) cin >> x[i] >> y[i];
    vector<ll> x_ = x;
    sort(x_.begin(),x_.end());
    ll tot_count = 0;
    ll count = 1;
    ll element = x_[0];

    for(ll i = 1; i < n; i++)
    {
        if(element == x_[i])
        {
            count++;
        }
        else {
            tot_count += (count)*(count-1);
            count = 1;
            element = x_[i];
        }
    }
    tot_count += count*(count-1) ;

    x_.clear();
    for(ll i = 0; i < n; i++)
    {
        x_.push_back(y[i]);
    }
    count = 1;
    sort(x_.begin(),x_.end());
    element = x_[0];
    for(ll i = 1; i < n; i++)
    {
        if(element == x_[i])
        {
            count++;
        }
        else {
            tot_count += (count)*(count-1);
            count = 1;
            element = x_[i];
        }
    }
    tot_count += (count)*(count-1);

    x_.clear();
    for(ll i = 0; i < n; i++)
    {
        x_.push_back(x[i] - y[i]);
    }
    count = 1;
    sort(x_.begin(),x_.end());
    element = x_[0];
    for(ll i = 1; i < n; i++)
    {
        if(element == x_[i])
        {
            count++;
        }
        else {
            tot_count += (count)*(count-1);
            count = 1;
            element = x_[i];
        }
    }
    tot_count += count*(count-1) ;
    x_.clear();
    for(ll i = 0; i < n; i++)
    {
        x_.push_back(x[i] + y[i]);
    }
    count = 1;
    sort(x_.begin(),x_.end());
    element = x_[0];
    for(ll i = 1; i < n; i++)
    {
        if(element == x_[i])
        {
            count++;
        }
        else {
            tot_count += (count)*(count-1);
            count = 1;
            element = x_[i];
        }
    }
tot_count += (count)*(count-1);

    cout << tot_count << "\n";
}

int main() {
    ll t;
    cin >> t;
    while(t--) solve();

    return 0;
}