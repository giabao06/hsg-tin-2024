/*Cho mảng số nguyên A[] có không quá 10000 phần tử. Hãy xác định xem mảng là mảng chẵn hay mảng lẻ,
mảng chẵn được định nghĩa là mảng mà số lượng số chẵn nhiều hơn số lượng số lẻ, ngược lại.
Trong trường hợp số lượng số chẵn bằng số lượng số lẻ thì mảng được gọi là mảng chẵn lẻ.*/

#include <bits/stdc++.h>

using namespace std;

string roundarr(long long a[], int n){
    int cc=0, cl=0;
    for (int i=0; i<n; i++) if (a[i]%2==0) cc++; else cl++;
    if (cc>cl) return "CHAN"; else
    if (cc<cl) return "LE"; else return "CHANLE";
}

int main(){
    int n; cin >> n; long long a[n];
    for (int i=0; i<n; i++) {cin >> a[i];}
    cout << roundarr(a,n); return 0;
}
