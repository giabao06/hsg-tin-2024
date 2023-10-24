//Tính tổng S = -1+2-3+4-5+ ....+ (-1)^n*n

#include <bits/stdc++.h>

using namespace std;

long long n=0;

int main(){
    cin >> n; long long t=0;
    for (int i=1; i<=n; i++) {if (i%2==0) {t=t+i;} else t=t-i;}
    cout << t; return 0;
}
