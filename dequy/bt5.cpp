//Tính n giai thừa **bằng đệ quy.**

#include <bits/stdc++.h>

using namespace std;

long long gt_dequy(long long x){
    if (x==0 || x==1) return 1;
    return x*gt_dequy(x-1);
}

int main(){
    long long n=0; cin >> n;
    cout << gt_dequy(n); return 0;
}
