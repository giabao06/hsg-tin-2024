//Tìm ước số nguyên tố lớn nhất của một số nguyên dương.

#include <bits/stdc++.h>

using namespace std;

long long maxuoc_nt(long long x){
    bool snt_eras[x+1]; snt_eras[1]=false;
    for (long long i=2; i<=x; i++) {snt_eras[i]=true;}
    for (long long i=2; i<=sqrt(x); ++i) {
        if (snt_eras[i]==true) {
            for (long long j=i*i; j<=x; j+=i) {snt_eras[j]=false;}
        }
    };
    for (long long i=x; i>=2; i--) {if (x%i==0 && snt_eras[i]==true) {return i;}}
    return -1;
}

int main(){
    int n=0; cin >> n;
    long long tests[n]; for (int i=0; i<n; i++) {cin >> tests[i];}
    for (int i=0; i<n; i++) {if (i!=n-1) cout << maxuoc_nt(tests[i]) << endl; else cout << maxuoc_nt(tests[i]);}
    return 0;
}

//tle
