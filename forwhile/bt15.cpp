//Nhập vào n. Đếm số lượng chữ sỗ của n là số nguyên tố

#include <bits/stdc++.h>

using namespace std;

long long n=0, na=0; array<long long, 100000> a;

void tachso(){
    long long cpn=n,tmp;
    while (cpn!=0){tmp=cpn%10; cpn=cpn/10; a[na]=tmp; na++;}
}

int main(){
    cin >> n; tachso(); long long t=0;
    for (int i=0; i<=na; i++) {if (a[i]==2 || a[i]==3 || a[i]==5 || a[i]==7) {t++;}}
    cout << t; return 0;
}
