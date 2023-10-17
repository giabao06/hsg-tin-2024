/*
Cho 2 số nguyên a và b. Bạn hãy tìm 2 số sau: (các bạn chỉ sử dụng if else và toán tử)

    Số thứ nhất: là số lớn nhất <=a và chia hết cho b
    Số thứ hai: là số nhỏ nhất >=a và chia hết cho b

Gợi ý:

Các bạn có thể sử dụng sử dụng if else để giải quyết hoặc sử dụng công thức sau

    Số thứ 1: a/b*b
    Số thứ 2: (a+b-1)/b*b

Lưu ý: Các phép chia đều là chia nguyên
*/


#include <bits/stdc++.h>

using namespace std;

long long a,b;

int main(){
    cin >> a >> b; long long n1=a, n2=a;
    while (n1%b!=0) {n1--;}
    while (n2%b!=0) {n2++;}
    cout << n1 << endl << n2;
    return 0;
}
