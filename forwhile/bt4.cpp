//Tính tổng S(n) = 1^2 + 2^2 + ... + n^2

#include <bits/stdc++.h>

using namespace std;

int main(){
    long long n,t=0; cin >> n;
    for (long long i=1; i<=n; i++) {t=t+(i*i);}
    cout << t; return 0;
}
