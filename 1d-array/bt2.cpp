//Cho mảng số nguyên A[] gồm N phần tử, nhiệm vụ của bạn là
//tính trung bình cộng của các số là số nguyên tố trong dãy.

#include <bits/stdc++.h>

using namespace std;

bool cprime(long long x){
    for (int i=2; i*i<=x; i++) {if (x%i==0) return false;}
    return x>1;
}
double tbcnt(long long a[], int n){
    double t=0, count=0;
    for (int i=0; i<n; i++) {if (cprime(a[i])) {t=t+a[i]; count++;} }
    return t/count;
}

int main(){
    long long n=0; cin >> n; long long a[n];
    for (int i=0; i<n; i++) {cin >> a[i];}
    cout << fixed << setprecision(3) << tbcnt(a, n);
    return 0;
}
