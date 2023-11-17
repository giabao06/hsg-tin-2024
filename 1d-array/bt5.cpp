//Cho mảng số nguyên A[] gồm N phần tử, nhiệm vụ của bạn là in ra các phần tử là số chẵn
//ở chỉ số chẵn, nếu mảng không tồn tại phần tử như vậy thì in ra "NONE".

#include <bits/stdc++.h>

using namespace std;

void print(long long a[], int n){
    bool chk=false;
    for (int i=0; i<n; i++) {if (i%2==0 && a[i]%2==0) {cout << a[i] << char(32); chk=true;}}
    if (chk==false) {cout << "NONE";}
}

int main(){
    int n; cin >> n; long long a[n];
    for (int i=0; i<n; i++) {cin >> a[i];}
    print(a, n); return 0;
}
