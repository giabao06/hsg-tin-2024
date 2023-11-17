//Cho mảng số nguyên A[] gồm N phần tử, hãy liệt kê các giá trị khác nhau
//trong mảng theo thứ tự xuất hiện, mỗi giá trị chỉ liệt kê 1 lần.

#include <bits/stdc++.h>

using namespace std;

void prval(long long a[], int n){
    bool prt[n]; for (int i=0; i<n; i++) {prt[i]=true;}
    for (int i=0; i<n; i++) if (prt[i]==true) {
        cout << a[i] << char(32);
        for (int j=0; j<n; j++) {if (a[i]==a[j]) prt[j]=false;}
        prt[i]=false;
        }
}

int main(){
    int n; cin >> n; long long a[n];
    for (int i=0; i<n; i++) {cin >> a[i];}
    prval(a,n); return 0;
}
