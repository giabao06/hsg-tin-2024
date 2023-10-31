//Bạn hãy kiểm tra số nguyên dương N được nhập vào có phải là số nguyên tố hay không ?

#include <bits/stdc++.h>

using namespace std;

string snt(long long x){
    if (x<2) return "NO";
    for (int i=2; i<=trunc(sqrt(x)); i++) if (x%i == 0) return "NO";
    return "YES";
}

int main(){
    long long n=0; cin >> n;
    cout << snt(n); return 0;
}
