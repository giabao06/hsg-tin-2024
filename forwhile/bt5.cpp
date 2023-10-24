//Nhập vào giá trị của n không quá 10^6, tính tổng các số nguyên dương không vượt quá n, chia hết cho 3.

#include <bits/stdc++.h>

using namespace std;

int main(){
    long long n=0, t=0; cin >> n;
    for (long long i=3; i<=n; i++) {
    if (i%3==0) t=t+i;}
    cout << t; return 0;
}
