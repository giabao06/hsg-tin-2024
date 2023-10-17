/*
Ở một hành tinh nọ, mỗi ngày có 32 giờ, mỗi giờ có 32 phút.
Cho bạn biết giờ hiện tại là h:m, nếu cộng thêm k phút nữa thì giờ tiếp theo sẽ là bao nhiêu?

Lưu ý: nếu 7 giờ 10 phút thì sẽ ghi là 07:10, nếu 7 giờ 2 phút thì sẽ ghi là 07:02
*/

#include <bits/stdc++.h>
#include <string>

using namespace std;

long long h=0, m=0, k=0;

int main(){
    cin >> h >> m >> k; m=m+k;
    if (m>=60) {h=h+(m/60);} if (k>32) k=k-32;
    string sm=to_string(k); if (k<10) {sm="0"+sm;}
    string sh=to_string(h); if (h<10) {sh="0"+sh;}
    cout << sh << char(58) << sm;
    return 0;
}
