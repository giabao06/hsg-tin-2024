/*
Từ thuở xa xưa khi đồng tiền chưa xuất hiện, con người trao đổi hàng hóa với nhau bằng các viên ngọc,
trên mỗi viên ngọc có số lượng ngôi sao từ 1,2,3, ..., n.
Mỗi người đều có số lượng viên ngọc không giới hạn (xài thoải mái ^^).
Một hàng hóa có giá trị là S sao thì sẽ được đổi bằng những viên ngọc số tổng số ngôi sao tương ứng.
Nhiệm vụ của bạn là giúp người đó lấy đủ số viên ngọc tối thiểu với tổng số sao bằng với giá trị món hàng.
*/

#include <bits/stdc++.h>

using namespace std;

long long n=0, s=0;

int main(){
    cin >> n >> s;
    long long a=(s/n);
    if (s%n!=0) a++;
    cout << a;
    return 0;
}
