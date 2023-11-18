//Cho mảng số nguyên A[] gồm N phần tử, hãy liệt kê các giá trị xuất hiện trong mảng theo thứ tự
//từ nhỏ đến lớn kèm theo tần suất của nó

#include <bits/stdc++.h>

using namespace std;

void alist(long long a[], int n){
    long long max=LLONG_MIN; for (int i=0; i<n; i++) {if (a[i]>max) {max=a[i];}}
    int cnt[max+1]; for (int i=1; i<=max; i++) {cnt[i]=0;}
    for (int i=0; i<n; i++) cnt[a[i]]++;
    for (int i=1; i<=max; i++) {if (cnt[i]!=0) cout << i << char(32) << cnt[i] << endl;}
}

int main(){
    int n; cin >> n; long long a[n];
    for (int i=0; i<n; i++) {cin >> a[i];}
    alist(a,n); return 0;
}
