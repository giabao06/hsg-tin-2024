//Cho mảng số nguyên A[] gồm N phần tử, hãy đếm xem trong mảng A[] tồn tại bao nhiêu cặp số A[i], A[j]
//với i khác j sao cho tổng của 2 phần tử này bằng số K cho trước.

#include <bits/stdc++.h>

using namespace std;

int count(long long a[], int n, long long x){
    int cnt=0;
    for (int i=0; i<n-1; i++) {
        for (int j=i+1; j<n; j++) {
            if (a[i]+a[j]==x) {cnt++;}
        }
    }
    return cnt;
}

int main(){
    int n; long long x; cin >> n >> x; long long a[n];
    for (int i=0; i<n; i++) {cin >> a[i];}
    cout << count(a, n, x); return 0;
}
