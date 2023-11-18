//Cho mảng số nguyên A[] gồm N phần tử, tìm số lớn nhất mà mọi số trong mảng đều chia hết cho số đó.

#include <bits/stdc++.h>

using namespace std;

long long gcd(long long x, long long y){
    if (y==0) return x;
    else return gcd(y, x%y);
}

long long agcd(long long a[], long long n){
    long long min=LONG_LONG_MAX;
    for (int i=0; i<n; i++) {if (a[i]<min) min=a[i];}
    bool chk=true; long long res=-1;
    for (long long i=0; i<n; i++) {if (a[i]%min!=0) {chk=false;}}
    if (chk) cout << min; else {long long def=round(0.5*min);
    for (long long i=1; i<def+1; i++) { chk=true;
    for (long long j=0; j<n; j++) {if (a[j]%i!=0) chk=false;}
    if (chk==true) res=i;}
    }
    return res;
}

int main(){
    long long n; cin >> n; long long a[n];
    for (int i=0; i<n; i++) cin >> a[i];
    cout << agcd(a,n); return 0;
}
