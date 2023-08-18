#include<iostream>
using namespace std;
typedef long long ll;

template<typename T>
pair<T,T> coefficients_euclid(T a , T b){
    // gives the coefficients x and y such that g = x*a + y* b;
    T x_ = 1; // hold c_n-1
    T y_ = 0; // hold d_n-1
    T x = 0; // hold c_n 
    T y = 1; // hold d_n
    T l  = a; // l will hold r_n-1
    T r =  b; // r will hold r_n
    // c_n+1 = c_n-1 - (r_n-1/r_n)*c_n
    // d_n+1 = d_n-1 - (r_n-1/d_n)*d_n
    while(r > 0)
    {
        T l_new = r;
        T r_new = l % r;
        T c_n_new = x_ - x*(l/r);
        T d_n_new = y_ - y*(l/r);
        l = l_new;
        r = r_new;
        x_ = x;
        y_ = y;
        x = c_n_new;
        y = d_n_new;
    }
    return make_pair(x_,y_);
}
void solve(){

    ll n, k;
    cin >> n >> k;
    ll count = 0;
    for(ll i = 0; i <= n ; i++)
    {
        ll first = n;
        ll second = i;
        ll j = 0;
        for(; j < k-2 ; j++)
        {
            ll s = first;
            first = second;
            second = s - second;
            if(second < 0 ) break;
            if(second > first) break;
        }
        if(j == k-2) count++;
    }
    cout << count << "\n";
}
int main() {

    ll t;
    cin >> t;
    while(t--) solve();

    return 0;
}