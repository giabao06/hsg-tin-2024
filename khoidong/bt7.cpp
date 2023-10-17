/*
Hàm max và min hỗ trợ chúng ta tìm ra giá trị lớn nhất, nhỏ nhất trong dãy số.
Để tìm max, min từ 3 số trở lên ta có thể dùng max({a,b,c}) Cho 4 số nguyên a,b,c,d. Nhiệm vụ của bạn là:

    dòng 1: in ra giá trị lớn nhất trong 2 số a,b
    dòng 2: in ra giá trị nhỏ nhất trong 2 số c,d
    dòng 3: in ra giá trị lớn nhất trong 3 số a,b,c
    dòng 4: in ra giá trị nhỏ nhất trong 4 số a,b,c,d

*/

#include <bits/stdc++.h>

using namespace std;

int main(){
    int a=0, b=0, c=0, d=0; cin >> a >> b >> c >> d;
    cout << max(a,b) << endl << min(c,d) << endl << max({a,b,c}) << endl << min({a,b,c,d}); return 0;
}
