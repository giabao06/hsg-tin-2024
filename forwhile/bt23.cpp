//Tính tổng S(n) = 1 + 1.2 + 1.2.3 + 1.2.3.4 + ... + 1.2.3....n

#include <bits/stdc++.h>

using namespace std;

long long gt(int x) {
    if (x==1 || x==2) {return x;} long long t=2;
    for (int i=3; i<=x; i++) {t=t*i;}
    return t;
}

int main(){
    int n=0; cin >> n; long long t=0;
    for (int i=1; i<=n; i++) {t=t+gt(i);}
    cout << t; return 0;
}
