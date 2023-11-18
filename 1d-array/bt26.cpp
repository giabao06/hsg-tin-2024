//Cho mảng số nguyên A[] gồm N phần tử, hãy đếm xem có bao nhiêu giá trị khác nhau trong mảng?

#include <bits/stdc++.h>

using namespace std;
//yeet bt8.cpp
int prval(long long a[], int n){
    bool prt[n]; for (int i=0; i<n; i++) {prt[i]=true;} int cnt=0;
    for (int i=0; i<n; i++) if (prt[i]==true) {cnt++;
        for (int j=0; j<n; j++) {if (a[i]==a[j]) prt[j]=false;}
        prt[i]=false;
        }
    return cnt;
}

int main(){
    int n; cin >> n; long long a[n];
    for (int i=0; i<n; i++) {cin >> a[i];}
    cout << prval(a,n); return 0;
}