/*
Bắp được ba mua cho các hộp chữ số gồm hộp 1 chứa a chữ số 1, hộp 2 chứa b chữ số 4,
hộp 3 chứa c chữ số 6 và hộp 4 chứa d chữ số 8.
Số nguyên yêu thích của Bắp là 81 và số 164. Hãy giúp Bắp soạn số nguyên này từ các chữ số trong các hộp.
Yêu cầu là tổng các số nguyên là lớn nhất. Các chữ số không được dùng sẽ không được tính vào tổng.
*/

#include <bits/stdc++.h>

using namespace std;

long long a=0, b=0, c=0, d=0;

int main(){
    cin >> a >> b >> c >> d;
    long long m=0;
    if (min(a,b)==min(a,c)) m=a; else
    if (min(b,a)==min(b,c)) m=b;
    else m=c; long long n1=m*164;
    a=a-m;
    m=min(d,a); long long n2=m*81;
    cout << n1+n2; return 0;
}

/*
algorithm explanation:
- find the lowest number of digits given in 1,6,4, then 164*min
- minus the number of 1s used in 164, then same to 81, then 81*min
- result = total of those two
*/
