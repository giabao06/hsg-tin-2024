//Nhập n là một số nguyên không quá 100. In ra các hình tương ứng, mỗi hình cách nhau một dòng trống.

#include <bits/stdc++.h>

using namespace std;

int n=0;

int main(){
    cin >> n;
    for (int i=1; i<=n; i++) {
        for (int j=1; j<=n; j++) {cout << char(42);}
        cout << endl;
    } //round 1
    cout << endl;

    for (int i=1; i<=n; i++) {
        if (i==1 || i==n) {for (int j=1; j<=n; j++) {cout << char(42);} cout << endl;}
        else {for (int j=1; j<=n; j++) {if (j==1 || j==n) cout << char(42); else cout << char(32);} cout << endl;}
    } // round 2
    cout << endl;

    for (int i=1; i<=n; i++) {
        if (i==1 || i==n) {for (int j=1; j<=n; j++) {cout << char(42);} cout << endl;}
        else {for (int j=1; j<=n; j++) {if (j==1 || j==n) cout << char(42); else cout << char(35);} cout << endl;}
    } // round 3

    cout << endl;
    for (int i=1; i<=n; i++) {
        if (i==1 || i==n) {for (int j=1; j<=n; j++) {cout << i;} cout << endl;}
        else{for (int j=1; j<=n; j++) {if (j==1 || j==8) cout << i; else cout << char(32);} cout << endl;}
    } // round 4

    return 0;
}
