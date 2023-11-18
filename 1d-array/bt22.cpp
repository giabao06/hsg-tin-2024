//Cho mảng số nguyên A[] gồm N phần tử và số nguyên X, nhiệm vụ của bạn là tìm kiếm xem 
//X có xuất hiện trong mảng hay không, nếu X xuất hiện trong mảng thì thực hiện xóa vị trí xuất hiện đầu tiên của X trong mảng, 
//ngược lại in ra "NOT FOUND" nếu X không xuất hiện.

#include <bits/stdc++.h>

using namespace std;

void rmarr(long long a[], long long x, int n){
    int k=-1;
    for (int i=0; i<n; i++) if (a[i]==x) {k=i; break;}
    if (k==-1) {cout << "NOT FOUND"; return;} else { n--;
    for (int i=k; i<n; i++) {a[i]=a[i+1];}
    for (int i=0; i<n; i++) {cout << a[i] << char(32);}
    }
}

int main(){
    int n; long long x; cin >> n >> x; long long a[n];
    for (int i=0; i<n; i++) {cin >> a[i];}
    rmarr(a, x, n); return 0;
}