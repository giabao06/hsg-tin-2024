//Tính tổng ước của các số nguyên dương n.

#include <bits/stdc++.h>

using namespace std;

const long long lim=1e10;

array <bool, lim> snt;

//Sieve of Erathosthenes

void snt_eras(long long x){
    for (int i=1; i<=x; i++) {snt[i]=true;}
    snt[0]=false; snt[1]=false;
    for (int i=2; i<=trunc(sqrt(x)); ++i){
        if (snt[i]==true) {
            for (int j=i*i; j<=x; j+=i) {snt[j]=false;}
        }
    }
}

long long tonguoc(long long x){
    long long t=1; int powof = snt[x]; int powto = 0;
    while (x!=1) {
        if ()
    }
}
int main(){
    long long n,t=0; cin >> n;
    for (long long i=1; i<=n; i++) {if (n%i==0) {t=t+i;}}
    cout << t; return 0;
}
