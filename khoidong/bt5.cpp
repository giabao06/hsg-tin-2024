//Cho 2 số m,n. Nhiệm vụ của bạn là tính m^n

#include <bits/stdc++.h>

using namespace std;

int main(){
    int m=0,n=0; cin >> m >> n; float a=pow(m,n);
    if (floor(a)==ceil(a)) cout << fixed << setprecision(0) << pow(m,n);
    else cout << fixed << setprecision (4) << n; return 0;
}
