/*
Cho độ dài 03 cạnh a, b, c.
Nếu tam giác đã cho là tam giác đều thì in ra 1,
tam giác cân thì in ra 2,
tam giác vuông thì in ra 3, tam giác thường in ra 4,
trường hợp tam giác nhập vào không hợp lệ thì in ra "INVALID".
*/

#include <bits/stdc++.h>

using namespace std;

int a,b,c;

int chktri(int a, int b, int c) {
    int count=0;
    if (a+b>c) {count++;}
    if (a+c>b) {count++;}
    if (c+b>a) {count++;}
    if (count != 3) return -1;
    if ((a==b) && (b==c)) return 1;
    if (a==b || a==c || b==c) return 2;
    if ((pow(a,2) + pow(b,2) == pow(c,2)) || (pow(a,2) + pow(c,2) == pow(b,2)) || (pow(c,2) + pow(b,2) == pow(a,2))) return 3;
    return 4;
}

int main(){
    cin >> a >> b >> c;
    if (chktri(a,b,c)==-1) {cout << "INVALID\n";} else cout << chktri(a,b,c);
    return 0;
}
