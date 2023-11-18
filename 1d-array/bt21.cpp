/*
Cho mảng số nguyên A[] gồm N phần tử, hãy thực hiện các yêu cầu :

    Liệt kê các giá trị xuất hiện trong mảng và tần suất tương ứng theo thứ tự xuất hiện.
    Liệt kê các giá trị xuất hiện trong mảng và tần suất tương ứng theo thứ tự từ nhỏ tới lớn.
    Tìm số có số lần xuất hiện nhiều nhất, nếu có nhiều số có cùng số lần xuất hiện thì chọn số lớn hơn.
    Tìm số có số lần xuất hiện ít nhất trong mảng, nếu có nhiều số có cùng số lần xuất hiện thì chọn số nhỏ hơn.
*/

#include <bits/stdc++.h>

using namespace std;

//yeet bt9.cpp

void alist9(long long a[], long long n){
    bool chk[n]; for (long long i=0; i<n; i++) {chk[i]=true;}
    for (long long i=0; i<n-1; i++) if (a[i]>=0 && chk[i]==true) {
        cout << a[i] << char(32); int count=1;
        for (long long j=i+1; j<n; j++) {if (a[i]==a[j]) {count++; chk[j]=false;}}
        chk[i]=false; cout << count << endl;
    }
    if (chk[n-1]!=false) {cout << a[n-1] << " 1" << endl;}
}

//yeet bt27.cpp
void alist(long long a[], long long n){
    long long max=LLONG_MIN, cmax=LLONG_MIN, cmin=LLONG_MAX, pmax, pmin; for (int i=0; i<n; i++) {if (a[i]>max) {max=a[i];}}
    long long cnt[max+1]; for (long long i=1; i<=max; i++) {cnt[i]=0;}
    for (long long i=0; i<n; i++) cnt[a[i]]++;
    for (long long i=1; i<=max; i++) if (cnt[i]!=0) {
        cout << i << char(32) << cnt[i] << endl;
        if (cnt[i]>cmax) cmax=cnt[i];
        if (cnt[i]<cmin) cmin=cnt[i];}
    for (long long i=1; i<=max; i++) if (cnt[i]==cmin) {pmin=i; break;}
    for (long long i=max; i>0; i--) if (cnt[i]==cmax) {pmax=i; break;}
    cout << endl << pmax << endl << pmin;
}

int main(){
    long long n; cin >> n; long long a[n];
    for (long long i=0; i<n; i++) {cin >> a[i];}
    alist9(a, n); cout << endl; alist(a,n); return 0;
}
