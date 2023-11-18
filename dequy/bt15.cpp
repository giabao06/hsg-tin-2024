//Cho một số nguyên không âm N, hãy in ra chữ số đầu tiên của N.
#include <bits/stdc++.h>

using namespace std;

int firstnum(long long x) {
    if (x>0 && x<10) return x;
    else return firstnum(x/10);
}

int main(){
    long long n=0; cin >> n;
    cout << firstnum(n); return 0;
}
