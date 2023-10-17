/*
Cho 4 số X,Y,Z,T là số nguyên. Bạn hãy in ra 3 dòng

    Dòng 1: lần lượt là 4 số X,Y,Z,T mỗi số cách nhau 1 dấy phẩy
    Dòng 2: in ra tổng 4 số
    Dòng 3: in ra giá trị biểu thức X + Y + Z * T
*/

#include <bits/stdc++.h>

using namespace std;

long long x=0,y=0,z=0,t=0;

int main(){
    cin >> x >> y >> z >> t;
    cout << x << char(44) << y << char (44) << z << char(44) << t << endl << x+y+z+t << endl << x+y+z*t; return 0;
}
