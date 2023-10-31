//Hãy tìm số Fibonacci thứ n sử **dụng đệ quy.**

#include <bits/stdc++.h>

using namespace std;

int fibo_dequy(int x){
    if (x==1 || x==2) return 1;
    return fibo_dequy(x-1)+fibo_dequy(x-2);
}

int main(){
    int n=0; cin >> n;
    cout << fibo_dequy(n); return 0;
}
