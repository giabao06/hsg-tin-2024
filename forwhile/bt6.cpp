//Tính tổng S(n) = 1 + 1/2 + ... + 1/n

#include <bits/stdc++.h>

using namespace std;

int main(){
    long long n=0; float t=0; cin >> n;
    for (long long i=1; i<=n; i++) {t=t+(1.0/i);}
    cout << fixed << setprecision(3) << t; return 0;
}
