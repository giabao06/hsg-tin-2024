//Cho mảng số nguyên A[] gồm N phần tử, hãy liệt kê các số trong mảng là số Fibonacci.

#include <bits/stdc++.h>

using namespace std;

bool fibo(long long x){
    long long a=1,b=1,c=0;
    while (c<x){
        c=a+b;
        a=b; b=c;
    }
    if (c==x) return true; else return false;
}

void alist(long long a[], int n){
    bool chk=false;
    for (int i=0; i<n; i++){
        if (fibo(a[i])) {cout << a[i] << char(32); chk=true;}
    }
    if (chk==false) {cout << "NONE";}
}

int main(){
    int n; cin >> n; long long a[n];
    for (int i=0; i<n; i++) {cin >> a[i];}
    alist(a, n); return 0;
}
