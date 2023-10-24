//Tính tổng S(n) = 1/2 + 1/4 + ... + 1/(2n)

#include <bits/stdc++.h>

using namespace std;

int main(){
    long long n=0; double t=0; cin >> n;
    for (long long i=1; i<=n; i++) {t=t+(1.0/i);}
    cout << fixed << setprecision(5) << t*0.5000;
    return 0;
}
