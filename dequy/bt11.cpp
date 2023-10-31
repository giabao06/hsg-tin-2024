//Cho một số nguyên không âm N, hãy in ra dạng biểu diễn nhị phân của số N.

#include <bits/stdc++.h>

using namespace std;


long long pow2(long long x){
    for (long long i=1; i<=1000; i++){
        if (pow(2,i) >= x) return i-1;
    }
    return -1;
}

void bin(long long n, long long i){
    if (i==0) {cout << n%2; return;}
    else if (n>=pow(2,i)) {cout << 1 << char(32); n=n-pow(2,i);}
    else cout << 0 << char(32);
    bin(n,i-1);
}

int main(){
    long long n=0; cin >> n;
    bin(n, pow2(n)); return 0;
}
