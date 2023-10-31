//Tính tổng hàm S(n) = 1 + 2 + 3 + 4 + .. + n **bằng đệ quy.**

#include <bits/stdc++.h>

using namespace std;

long long sum_dequy(long long x){
    if (x==0) return 0;
    return x+sum_dequy(x-1);
}

int main(){
    long long n=0; cin >> n;
    cout << sum_dequy(n); return 0;
}
