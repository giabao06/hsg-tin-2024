/*
Cho một số nguyên không âm N.Bạn hãy thực hiện viết câu lệnh để kiểm tra các điều kiện sau:

    N có phải là số chẵn? (Kiểm tra số dư của N với 2 và so sánh 0)
    N có phải là số vừa chia hết cho 3 vừa chia hết cho 5?
    N có phải là số chia hết 3 nhưng không chia hết cho 7?
    N có phải là số chia hết cho 3 hoặc 7?
    N là số lớn hơn 30 và nhỏ hơn 50?

In ra 5 dòng, mỗi dòng là "YES" hoặc "NO" tương ứng với 5 điều kiện.
Nếu N thỏa mãn điều kiện thứ i thì dòng i in ra YES, ngược lại in ra NO.
*/

#include <bits/stdc++.h>

using namespace std;

int main(){
    int n=0; cin >> n;
    if (n%2==0) {cout << "YES\n";} else {cout << "NO\n";}
    if (n%3==0 && n%5==0) {cout << "YES\n";} else {cout << "NO\n";}
    if (n%3==0 && n%7!=0) {cout << "YES\n";} else {cout << "NO\n";}
    if (n%3==0 || n%7==0) {cout << "YES\n";} else {cout << "NO\n";}
    if (n>30 && n<50) {cout << "YES\n";} else {cout << "NO\n";}
    return 0;
}
