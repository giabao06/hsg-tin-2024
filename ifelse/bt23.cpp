/*
Bắp vừa được cho một số bù nhìn khá đẹp, Bắp muốn đặt các con bù nhìn này trên các bờ ruộng của nhà mình.
Biết bờ ruộng có độ dài là n mét. Bắp đặt ra quy luật như sau:
- các bù nhìn có thể đặt các nhau 1 mét hoặc 2 mét
- tổng số bù nhìn phải là bội số của một số m.

Bạn hãy giúp Bắp chuẩn bị số lượng bù nhìn phù hợp với quy luật của anh ấy đặt ra nhé. */

#include <bits/stdc++.h>

using namespace std;

long long m=0, n=0;

int main(){
    cin >> n >> m; long long t = ceil((1.0*n)/2); bool chk=false;
    while (t%m!=0) {t++; if (t>n) {chk=true; break;}}
    if (chk==false) cout << t; else cout << -1;
    return 0;
}
