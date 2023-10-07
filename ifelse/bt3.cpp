/*
Cho một số nguyên không âm N.Bạn hãy thực hiện viết câu lệnh để kiểm tra các điều kiện sau :

    N có phải là số không nhỏ hơn 30 và chia hết cho ít nhất một trong 3 số 2, 3, 5?
    N có phải là số có 2 chữ số có chữ tận cùng là một số nguyên tố?
    N có phải là số không vượt quá 100 và chia hết cho 23?
    N không thuộc đoạn 10 - 20.
    N có chữ số tận cùng là bội số của 3?

In ra 5 dòng, mỗi dòng là "YES" hoặc "NO" tương ứng với 5 điều kiện.
Nếu N thỏa mãn điều kiện thứ i thì dòng i in ra YES, ngược lại in ra NO.
*/

#include <bits/stdc++.h>

using namespace std;

int n=0;

bool snt(int x){
    if (x<2) return false;
    for (int i=2; i<=trunc(sqrt(x)); i++) {if (x%i==0) return false;}
    return true;
}

int main(){
    cin >> n; bool flag=true;
    if (n<10 || n>99) {flag=false;}
    if (n>=30 && (n%2==0 || n%3==0 || n%5 ==0)) {cout << "YES\n";} else {cout << "NO\n";}
    if (flag==true && snt(n%10)) {cout << "YES\n";} else {cout << "NO\n";}
    if (n<=100 && n%23==0) {cout << "YES\n";} else {cout << "NO\n";}
    if (n<10 || n>20) {cout << "YES\n";} else {cout << "NO\n";}
    if ((n%10)%3==0) {cout << "YES\n";} else {cout << "NO\n";}
    return 0;
}
