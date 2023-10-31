//Cho một số nguyên dương n, hãy biểu diễn n dưới dạng tổng của các số nguyên tố sao
//cho số lượng số hạng trong tổng là lớn nhất có thể.

#include <bits/stdc++.h>

using namespace std;

array <bool, 10000> snt;

//Sieve of Erathosthenes

void snt_eras(long long x){
    for (int i=1; i<=x; i++) {snt[i]=true;}
    snt[0]=false; snt[1]=false;
    for (int i=2; i<=trunc(sqrt(x)); ++i){
        if (snt[i]==true) {
            for (int j=i*i; j<=x; j+=i) {snt[j]=false;}
        }
    }
}

int main(){
    long long n=0; cin >> n; snt_eras(n);

}
