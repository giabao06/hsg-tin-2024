//Liệt kê các số chính phương dương và không vượt quá n

#include <bits/stdc++.h>

using namespace std;

bool scp(long long x){
    int i=trunc(sqrt(x));
    if (i*i!=x) return false;
    return true;
}

int main(){
    long long n; cin >> n;
    //wtf hackerrank, you can't do arrays on this smh? also you *do* accept trailing spaces
    for (long long i=1; i<=n; i++) {if (scp(i)) {cout << i << char(32);}}
    //and still 6/20 TLE, beyond cure
    return 0;
}
