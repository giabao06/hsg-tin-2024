//Cho mảng số nguyên A[] gồm N phần tử, kiểm tra xem mảng có đối xứng hay không?

#include <bits/stdc++.h>

using namespace std;

bool chk(long long a[], long long n){
    bool chk=true; long long half=floor(0.5*n), i=half-1, j=0;
    if (n%2==0) {j=half;} else {j=half+1;}
    while (i>=0 && j<n) {
        if (a[i]!=a[j]) {chk=false; break;}
        else {i--; j++;}
    }
    return chk;
}

int main(){
    long long n; cin >> n; long long a[n];
    for (int i=0; i<n; i++) {cin >> a[i];}
    if (chk(a,n)) cout << "YES"; else cout << "NO"; return 0;
}
