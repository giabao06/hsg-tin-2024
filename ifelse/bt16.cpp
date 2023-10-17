/*
Giả sử máy ATM chứa được rất nhiều tiên, trong đó có các mệnh giá: 500, 200, 100, 50, 20, 10, 5, 2, 1.
Vậy khi khách hàng yêu cầu rút tiền với giá trị là n thì khách hàng sẽ nhận được số lượng tối thiếu là bao nhiêu tờ tiền?
*/

#include <bits/stdc++.h>

using namespace std;

long long n;

int main(){
    cin >> n; long long t=0;
    t=t+n/500; n=n%500;
    t=t+n/200; n=n%200;
    t=t+n/100; n=n%100;
    t=t+n/50; n=n%50;
    t=t+n/20; n=n%20;
    t=t+n/10; n=n%10;
    t=t+n/5; n=n%5;
    t=t+n/2; n=n%2;
    t=t+n;
    cout << t; return 0;
}

// i give up, only part of the test cases were correct...
