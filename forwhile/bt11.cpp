//Tính tổng ước của các số nguyên dương n.

#include <bits/stdc++.h>

using namespace std;

int main(){
    long long n,t=1; cin >> n;
    for (long long i=2; i<=n; i++) {if (n%i==0) {t=t*i;}}
    cout << t; return 0;
}
