/*
Cho trước N ngày, hãy đổi N thành số năm, số tuần và số ngày.
Biết rằng một năm có 365 ngày (không tính năm nhuận)
*/

#include <bits/stdc++.h>

int n=0;

using namespace std;

int main(){
    cin >> n;
    int w=(n%365)/7;
    int d=(n%365)%7;
    cout << n/365 << char(32) << w << char(32) <<  d;
    return 0;
}
