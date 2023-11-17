// Cho mảng số nguyên A[] gồm N phần tử, nhiệm vụ của bạn là đếm xem trong mảng có bao nhiêu số chẵn,
// bao nhiêu số lẻ, tổng các phần tử là số chẵn, tổng các phần tử là số lẻ.

#include <bits/stdc++.h>

using namespace std;

int n=0, nc=0, nl=0;

long long tongchan(long long a[]){
    long long t=0;
    for (int i=0; i<n; i++) {if (a[i]%2==0) {t=t+a[i]; nc++;}}
    return t;
}

long long tongle(long long a[]){
    long long t=0;
    for (int i=0; i<n; i++) {if (a[i]%2!=0) {t=t+a[i]; nl++;}}
    return t;
}

int main(){
    cin >> n; long long a[n]; for (int i=0; i<n; i++) {cin >> a[i];}
    long long tc=tongchan(a); long long tl=tongle(a);
    cout << nc << endl << nl << endl << tc << endl << tl;
    return 0;
}

//note: we are forced to violate ISO C++ here because well... a[1000] causes segfault, wtf
