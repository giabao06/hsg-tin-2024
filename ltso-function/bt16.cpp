//Copy of dequy/bt8.cpp
//Tìm ước chung lớn nhất và bội chung nhỏ nhất của 2 số nguyên

#include <bits/stdc++.h>

using namespace std;

long long gcd(long long x, long long y){
    if (y==0) return x;
    else return gcd(y, x%y);
}
// ok wtf, gcd function, why floating point exception?
int main(){
    long long x=0, y=0; cin >> x >> y;
    cout << gcd(x,y) << char(32) << (x*y)/gcd(x,y);
}
