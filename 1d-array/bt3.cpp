//Cho mảng số nguyên A[] gồm N phần tử, hãy đếm xem trong mảng của bạn có bao nhiêu số có cùng giá trị nhỏ nhất.
//Ví dụ mảng A = {1, 2, 1, 3, 5} thì số nhỏ nhất trong mảng là 1 xuất hiện 2 lần.

#include <bits/stdc++.h>

using namespace std;

int count(long long a[], int x){
    long long min=LONG_LONG_MAX; int cnt=0;
    for (int i=0; i<x; i++) {if (a[i]<min) min=a[i];}
    for (int i=0; i<x; i++) {if (a[i]==min) cnt++;}
    return cnt;
}

int main(){
    int n=0; cin >> n; long long a[n];
    for (int i=0; i<n; i++) {cin >> a[i];}
    cout << count(a,n); return 0;
}
