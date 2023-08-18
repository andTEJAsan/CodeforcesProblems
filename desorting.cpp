#include<bits/stdc++.h>
#include<iostream>
using namespace std;
typedef long long ll;


void solve(){
    ll n;
    cin >> n;
    vector<ll> a(n);
    for(int i= 0; i < n; i++) cin >> a[i];
    vector<ll> b = a;
    sort(a.begin(),a.end());
    int i=0;
    for( ; i < n; i++)
    {
        if (a[i] != b[i]) break;
    }
    if ( i != n) {cout << 0 << "\n";
    return;}
    ll mindif = a[1] - a[0];
    ll element = a[1];
    for(ll i = 2; i < n; i++)
    {
        if(a[i] - a[i-1] < mindif) mindif = a[i] - a[i-1];
    }
    cout << mindif/2 + 1 << "\n";
}


int main() {

    ll t;
    cin >> t;
    while(t--) solve();


    return 0;
}



