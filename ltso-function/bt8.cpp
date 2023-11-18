//Kiểm tra một số nguyên có phải là số chính phương hay không?

#include <bits/stdc++.h>

using namespace std;

string scp(long long x){
    long long t=trunc(sqrt(x));
    if (t*t==x) {return "YES";}
    else return "NO";
}

int main(){
    long long n=0; cin >> n;
    cout << scp(n); return 0;
}
