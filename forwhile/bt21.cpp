//Cho 2 số nguyên m,n. Tìm ước chung lớn nhất của m! và n!

#include <bits/stdc++.h>

using namespace std;

long long gt(int x){
    long long t=1;
    for (int i=2; i<=x; i++) {t=t*i;}
    return t;
}

long long gcd(long long x, long long y){
    if (x*y==0) return x+y;
    for (int i=min(x,y); i>0; i--) {if (x%i == 0 && y%i==0) return i;}
    //return -1 because OJ dosen't compile with permissive
}

int main(){
    int n=0, m=0; cin >> m >> n;
    cout << gcd(gt(m), gt(n)); return 0;
}
