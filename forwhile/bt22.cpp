//Cho số nguyên dương không âm N, ở mỗi thao tác bạn thực hiện tính tổng các chữ số của N
//sau đó gán lại cho N, thao tác này được thực hiện cho tới khi N chỉ còn 1 chữ số.

#include <bits/stdc++.h>

using namespace std;

long long n=0;

long long tongcs(long long x){
    long long t=0;
    while (x!=0){
        t=t+(x%10);
        x=x/10;
    }
    return t;
}

int main(){
    cin >> n; string cs=to_string(n);
    while (cs.length()!=1) {n=tongcs(n); cs=to_string(n);}
    cout << n; return 0;
}
