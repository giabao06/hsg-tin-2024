/*
Cho độ dài 3 cạnh a, b, c. Kiểm tra xem a, b, c có thể tạo thành một tam giác hợp lệ hay không?
In ra YES nếu a, b, c là 3 cạnh của 1 tam giác hợp lệ, ngược lại in ra NO.
*/

#include <bits/stdc++.h>

using namespace std;

int a,b,c;

bool chktri(int a, int b, int c) {
    int count=0;
    if (a+b>c) {count++;}
    if (a+c>b) {count++;}
    if (c+b>a) {count++;}
    if (count == 3) return true; else return false;
}

int main(){
    cin >> a >> b >> c;
    if (chktri(a,b,c)) {cout << "YES";} else {cout << "NO";}
    return 0;
}
