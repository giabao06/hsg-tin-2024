//Tính tổng hàm S(n) = -1 + 2 -3 + 4 - 5 + 6 + ... + (-1)^n * n **bằng đệ quy.**

//cướp code bt1.cpp cái :troll:
#include <bits/stdc++.h>

using namespace std;

long long sum_dequy(long long x){
    if (x==0) return 0; else
    if (x%2!=0) return -x+sum_dequy(x-1); else
    return x+sum_dequy(x-1);
}

int main(){
    long long n=0; cin >> n;
    cout << sum_dequy(n); return 0;
}
