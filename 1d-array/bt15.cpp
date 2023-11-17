//Cho mảng số nguyên A[] gồm N phần tử, tìm số lớn nhất và lớn thứ 2 trong mảng.
//Chú ý 2 giá trị này có thể giống nhau

#include <bits/stdc++.h>

using namespace std;

tuple<long long, long long> max2(long long a[], long long n){
    long long max=LONG_LONG_MIN, max1=0, maxs=LONG_LONG_MIN; bool chk=true;
    for (int i=0; i<n; i++) {
        if (a[i]>max) {max=a[i]; max1=a[i]; chk=false;} else
        if (a[i]==max) {max1=max; chk=true;}
    }
    if (chk) maxs=max1; else for (int i=n-1; i>=0; i--) {
        if (a[i]>maxs && a[i]!=max) {maxs=a[i];}
    }
    return {max1,maxs};
}

int main(){
    long long n; cin >> n; long long a[n];
    for (int i=0; i<n; i++) {cin >> a[i];}
    auto [max, max1] = max2(a, n);
    cout << max << char(32) << max1; return 0;
}
