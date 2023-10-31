//Cho 2 số nguyên không âm a và b. Hãy tính a^b chia dư cho 10^9 + 7

#include <bits/stdc++.h>

using namespace std;

const long long mod=1e9+7;

long long pow2(long long x) {return x*x;}

long long ltnp(long long a, long long b){
    if (b==0) return 1%mod; else
    if (b%2==0) {long long res=pow2(ltnp(a,b/2)); return res%mod;}
    else {long long res=pow2(ltnp(a,b/2)); return a*(res%mod)%mod;}
};

int main(){
    long long x=0, y=0; cin>> x >> y; cout << ltnp(x,y); return 0;
}

//note to self: don't use the standard pow function lmao
