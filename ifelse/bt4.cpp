/*
Nhập vào 2 số nguyên, in ra tích và thương(lấy độ chính xác với 4 chữ số thập phân) của 2 số đó.

In ra tích, thương trên từng dòng.
Nếu trường hợp không thể tìm được thương của 2 số thì sẽ in ra "INVALID" cho dòng kết quả của thương.
*/

#include <bits/stdc++.h>

using namespace std;

int a,b;

int main(){
    cin >> a >> b;
    cout << a*b << endl;
    if (b==0) {cout << "INVALID\n";} else cout << fixed << setprecision(4) << double(a)/b << endl;
    return 0;
}
