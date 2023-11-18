//Cho mảng số nguyên A[] gồm N phần tử và số nguyên K, nhiệm vụ của bạn là tìm tổng của mọi dãy con liên tiếp cỡ K của mảng A[]

#include <bits/stdc++.h>

using namespace std;

void arrprint(long long a[], int n, int k){
    for (int i=0; i<n-k; i++) { long long t=0;
        for (int j=i; j<i+k; j++) {t=t+a[j];}
        cout << t << char(32);
    };
}

int main(){
    int n, k; cin >> n >> k; long long a[n];
    for (int i=0; i<n; i++) {cin >> a[i];}
    arrprint(a, n, k); return 0;
}