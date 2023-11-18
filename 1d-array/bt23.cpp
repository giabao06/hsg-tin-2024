//Cho mảng số nguyên A[] gồm N phần tử, nhiệm vụ của bạn là xây dựng mảng F cũng có N phần tử
// trong đó F[0] = A[0] và F[i] = F[i -1] + A[i] với mọi i >= 1.

#include <bits/stdc++.h>

using namespace std;

void arrprint(long long a[], int n){
    long long f[n]; f[0]=a[0];
    for (int i=1; i<n; i++) {f[i]=f[i-1]+a[i];}
    for (int i=0; i<n; i++) {cout << f[i] << char(32);}
}

int main(){
    int n; cin >> n; long long a[n];
    for (int i=0; i<n; i++) {cin >> a[i];}
    arrprint(a,n); return 0;
}