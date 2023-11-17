//Cho mảng số nguyên A[] gồm N phần tử, hãy tính tổng, tích của các phần tử trong mảng và lấy dư với 10^9+7.

#include <bits/stdc++.h>

using namespace std;

const long long lim=1e9+7;

tuple<long long, long long> tongtich(long long a[], int n){
    long long t=0, m=1;
    for (int i=0; i<n; i++) {
        t=(t%lim+a[i]%lim)%lim; m=(m%lim*a[i]%lim)%lim;
    }
    return {t, m};
}

int main(){
    int n; cin >> n; long long a[n];
    for (int i=0; i<n; i++) {cin >> a[i];}
    auto [t, m] = tongtich(a, n); cout << t << endl << m; return 0;
}
