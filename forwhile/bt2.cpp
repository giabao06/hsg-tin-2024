//Tính tổng S(n) = 1+2+3+...+n

#include <bits/stdc++.h>

using namespace std;

int main(){
    long long n; cin >> n;
    if (n%2==0) {cout << (n+1)*(n/2);} else
    {long long a=(n)*((n-1)/2); cout << a+n;}
    return 0;
}
