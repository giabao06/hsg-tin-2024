/*Cho mảng số nguyên A[] gồm N phần tử, hãy tìm vị trí(bắt đầu từ 0) cuối cùng của giá trị nhỏ nhất trong mảng
và vị trí đầu tiên của giá trị lớn nhất trong mảng. Tức là nếu có nhiều số có cùng giá trị nhỏ nhất bạn phải
in ra ví trí cuối cùng, và có nhiều số có cùng giá trị lớn nhất trong mảng bạn phải in ra vị trí đầu tiên lớn nhất đó.*/

// wow this is one long question -giabao06

#include <bits/stdc++.h>

using namespace std;

tuple<int, int> maxmin(long long a[], int n){
    long long nmax=LONG_LONG_MIN, nmin=LONG_LONG_MAX; int pmin=0, pmax=0;
    for (int i=0; i<n; i++) {
        if (nmax<a[i]) {nmax=a[i]; pmax=i;}
        if (nmin>a[i]) {nmin=a[i]; pmin=i;} else
        if (nmin==a[i]) {pmin=i;}
    }
    return {pmin, pmax};
}

int main(){
    int n; cin >> n; long long a[n];
    for (int i=0; i<n; i++) {cin >> a[i];}
    auto [pmin, pmax] = maxmin(a,n);
    cout << pmin << char(32) << pmax; return 0;
}
