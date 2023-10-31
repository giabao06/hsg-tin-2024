//Cho một số nguyên không âm N, hãy tính tổng chữ số của N sử dụng kỹ thuật đệ quy.

#include <bits/stdc++.h>

using namespace std;

long long tongcs(long long n){
    if (n<10) return n;
    return tongcs(n%10)+tongcs(n/10);
}

int main(){
    long long n=0; cin >> n;
    cout << tongcs(n); return 0;
}
