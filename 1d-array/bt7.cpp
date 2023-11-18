//Cho mảng số nguyên A[] gồm N phần tử, hãy tìm độ chênh lệch nhỏ nhất giữa 2 phần tử trong mảng.
//note: this is also bt19, but smh I got 1 test case wrong

#include <bits/stdc++.h>

using namespace std;

long long delta(long long a[], int n) {
    long long del_min=LONG_LONG_MAX;
    for (int i=0; i<n; i++) {
        for (int j=i+1; j<=n; j++) {
            if (a[i]<a[j]) {if (a[j]-a[i]<del_min) del_min=a[j]-a[i];}
            else if (a[i]-a[j]<del_min) del_min=a[i]-a[j];
        };
    };
    return del_min;
}

int main(){
    int n=0; cin >> n; long long a[n];
    for (int i=0; i<n; i++) {cin >> a[i];}
    cout << delta(a, n); return 0;
}
