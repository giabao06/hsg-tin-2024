//Cho mảng số nguyên A[] gồm N phần tử, hãy liệt kê các chỉ số i trong mảng thỏa mãn
//Tổng các phần tử bên trái i và tổng các phần tử bên phải i là các số nguyên tố
//note: no sample testcases...

#include <bits/stdc++.h>

using namespace std;

bool cprime(long long x){
    for (int i=2; i*i<=x; i++) {if (x%i==0) return false;}
    return x>1;
}

void alist(long long a[], int n){
    bool chk=false;
    for (int i=0; i<n; i++) {
        long long tl=0, tr=0;
        for (int j=i+1; j<n; j++) {tr=tr+a[j];}
        for (int k=0; k<i; k++) {tl=tl+a[k];}
    if (cprime(tr) && cprime(tl)) {cout << i << char(32); chk=true;} }
    if (!chk) cout << "NONE";
}

int main(){
    int n; cin >> n; long long a[n];
    for (int i=0; i<n; i++) {cin >> a[i];}
    alist(a,n); return 0;
}
