//Tính tổng hàm S(n) = 1^2 + 2^2 + 3^2 + 4^2 + .. + n^2 **bằng đệ quy.**

//cướp code bt1.cpp cái :troll:
#include <bits/stdc++.h>

using namespace std;

long long sumlt_dequy(long long x){
    if (x==0) return 0;
    return x*x+sumlt_dequy(x-1);
}

int main(){
    long long n=0; cin >> n;
    cout << sumlt_dequy(n); return 0;
}
