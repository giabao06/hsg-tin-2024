//Cho số nguyên dương n, bạn hãy tính căn bậc 2 và căn bậc 3 của n.

#include <bits/stdc++.h>

using namespace std;

int main(){
    long long n=0; cin >> n;
    cout << fixed << setprecision(2) << sqrt(n) << endl << setprecision(4) << cbrt(n); return 0;
}
