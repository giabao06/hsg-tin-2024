//Cho n giây. Nhiệm vụ của bạn là đổi sang giờ, phút, giây.

#include <bits/stdc++.h>

using namespace std;

long long n=0;

int main(){
    cin >> n; long long h=0, m=0, s=0;
    if (n>=3600) {h=n/3600; m=(n%3600)/60; s=(n%3600)%60;} else
    if (n<3600 && n>=60) {m=n/60; s=n%60;} else s=n;
    cout << h << "h : " << m << "m : " << s << "s"; return 0;
}
