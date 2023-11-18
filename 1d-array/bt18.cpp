//Cho mảng số nguyên A[] gồm N phần tử, hãy liệt kê theo thứ tự xuất hiện
// các số thỏa mãn có ít nhất 1 số trái dấu với nó đứng cạnh nó.

#include <bits/stdc++.h>

using namespace std;

void alist(long long a[], long long n) {
    long long i=0, j=1; bool prt[n]; for (int i=0; i<n; i++) {prt[i]=true;}
    while (i<n-1 && j<n) {
        if ((a[i]<0 && a[j]>0) || (a[i]>0 && a[j]<0)) {
            if (prt[i]==true)cout << a[i] << char(32) << a[j];}
        i++; j++;
    }
}

int main(){
    long long n=0; cin >> n; long long a[n];
    for (int i=0; i<n; i++) {cin >> a[i];}
    alist(a,n); return 0;
}
