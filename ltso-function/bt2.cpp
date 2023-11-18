//Số nguyên dương N được gọi là số Sphenic nếu N được phân tích duy nhất dưới dạng tích của ba thừa số nguyên tố khác nhau.
//Bạn hãy kiểm tra số tự nhiên N được nhập vào có phải là số Sphenic hay không ?

#include <bits/stdc++.h>

using namespace std;

bool sphenic(long long x){
    long long minPrime[x+1];
    for (long long i=2; i*i<=x; ++i) {
        if (minPrime[i]==0) {
            for (long long j=i*i; j<=x; j+=i) {if (minPrime[j]==0) minPrime[j]=i;}}
    }
    for (int i=2; i<=x; ++i) if (minPrime[i]==0) {minPrime[i]=i;}
    vector<long long> res; int count=0;
    while (x!=1) {
        res.push_back(minPrime[x]);
        x/=minPrime[x];
        count++;
    }
    if (count+1<=3) return true; else return false;
}

int main(){
    long long n=0; cin >> n;
    cout << sphenic(n); return 0;
}

//ok tle
