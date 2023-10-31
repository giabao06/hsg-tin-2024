//Số nguyên dương N được gọi là số Sphenic nếu N được phân tích duy nhất dưới dạng tích của ba thừa số nguyên tố khác nhau.
//Bạn hãy kiểm tra số tự nhiên N được nhập vào có phải là số Sphenic hay không ?

#include <bits/stdc++.h>

using namespace std;

bool sphenic(long long x){
    int count=0;
    while (count<=3 && x>1) {
        if (x%2==0) {x=x/2; count++;} else
        if (x%3==0) {x=x/3; count++;} else
        if (x%5==0) {x=x/5; count++;} else
        if (x%7==0) {x=x/7; count++;}
    }
    if (count==3) return true; else return false;
}

int main(){
    long long n=0; cin >> n;
    cout << sphenic(n); return 0;
}

//ok tle
