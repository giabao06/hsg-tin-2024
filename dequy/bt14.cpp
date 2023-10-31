//Cho một số nguyên không âm N, hãy đếm số lượng chữ số của N.

#include <bits/stdc++.h>

using namespace std;

long long slcs(long long n){
    if (n<10) return 1;
    else return 1+slcs(n/10);
}

int main(){
    long long n=0; cin >> n;
    cout << slcs(n);
}
