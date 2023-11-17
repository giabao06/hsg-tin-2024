/*Cho mảng số nguyên A[] gồm N phần tử, hãy đếm số lượng các phần tử thỏa mãn các yêu cầu sau

    Số lượng số nguyên tố trong dãy
    Số lượng số thuận nghịch trong dãy
    Số lượng số chính phương trong dãy
    Số lượng số có tổng chữ số của nó là số nguyên tố.
*/

#include <bits/stdc++.h>

using namespace std;

bool cprime(long long x){
    for (int i=2; i*i<=x; i++) {if (x%i==0) return false;}
    return x>1;
}

bool scp(long long x){
    int i=trunc(sqrt(x));
    if (i*i!=x) return false;
    return true;
}

bool rev(long long x){
    string s1=to_string(x);
    string s2=s1; reverse(s2.begin(), s2.end());
    if (s1==s2) return true; else return false;
}

long long tongcs(long long n){
    if (n<10) return n;
    return tongcs(n%10)+tongcs(n/10);
}

int main(){
    int n; cin >> n; long long a[n], t1=0, t2=0, t3=0, t4=0;
    for (int i=0; i<n; i++) {cin >> a[i];}
    for (int i=0; i<n; i++) {
        if (cprime(a[i])) t1++;
        if (rev(a[i])) t2++;
        if (scp(a[i])) t3++;
        if (cprime(tongcs(a[i]))) t4++;
    }
    cout << t1 << endl << t2 << endl << t3 << endl << t4; return 0;
}
