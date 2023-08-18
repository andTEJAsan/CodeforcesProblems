#include<iostream>
using namespace std;


int main(){
  int t;
  int n;
  int a[n+1][n+1];
  cin >> t;
  for(int i = 0 ; i < t; i++) {
  for(int i = 0; i < n; i++ ) {
    for(int j = 0; j < n; j++){
  cin >> a[i+1][i+1]; 
    }
    int ans = 0;
  for(int i = 1; i <= (n+1)/2; i++ ) {
    for(int j = i; j <= n-i+1; j++){
    int sum = a[i][j] + a[j][n-1-i] + a[n-1-i][n-1-j] + a[n-1-j][i];
    ans += min(sum,4-sum);
    }
    cout << ans << "\n";
  }
  }
  return 0;
}

