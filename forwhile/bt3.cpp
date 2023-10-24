//Tính tổng S(n) = 2+4+6+...+2n

#include <bits/stdc++.h>

using namespace std;

int main(){
    long long n,t=0; cin >> n;
    for (long long i=2; i<=n; i+=2) {t=t+i;}
    cout << t; return 0;
}
