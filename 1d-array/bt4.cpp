//Cho mảng số nguyên A[] gồm N phần tử và số nguyên X, hãy đếm xem trong mảng có
//bao nhiêu số lớn hơn X và bao nhiêu số nhỏ hơn X.

#include <bits/stdc++.h>

using namespace std;

tuple<int, int> count(long long a[], int n, long long x){
    int cl=0, cs=0;
    for (int i=0; i<n; i++) {
        if (a[i]<x) {cs++;} else
        if (a[i]>x) {cl++;}
    }
    return {cs, cl};
}

int main(){
    int n=0; long long x=0; cin >> n >> x; long long a[n];
    for (int i=0; i<n; i++) {cin >> a[i];}
    auto [cs,cl] = count(a,n,x);
    cout << cs << endl << cl; return 0;
}
