//tldr: count the number of operations of 3n+1 for any given n from 1 to 50

#include <bits/stdc++.h>

using namespace std;

int cnt=0;

int collatz(int x){
    if (x==1) return cnt;
    if (x%2==0) {cnt++; return (collatz((x/2)-1));}
    else if (x%3==0) {cnt++; return (collatz((x/3)-1));}
    return cnt;
}

int main(){
    int n=0; cin >> n; collatz(n); cout << cnt; return 0;
}
