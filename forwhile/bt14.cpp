//Nhập vào số n, tính tổng các chữ số của n và in ra màn hình

#include <bits/stdc++.h>

using namespace std;

long long n=0;

long long tongchuso(long long x){
    long long t=0;
    while (x>0) {
        t=t+x%10;
        x=x/10;
    };
    return t;
}

int main(){cin >> n; cout << tongchuso(n); return 0;}
