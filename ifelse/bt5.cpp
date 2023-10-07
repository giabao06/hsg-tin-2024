/*
Năm nhuận là năm chia hết cho 400 hoặc (chia hết cho 4 và không chia hết cho 100).
Nhập vào N là một năm và kiểm tra xem N có phải là năm nhuận hay không?

In ra YES nếu N là năm nhuận, ngược lại in ra NO.
*/

#include <bits/stdc++.h>

using namespace std;

int n=0;

int main(){
    cin >> n;
    if (n%400==0 || (n%4==0 && n%100!=0)) {cout << "YES\n";} else {cout << "NO\n";}
    return 0;
}
