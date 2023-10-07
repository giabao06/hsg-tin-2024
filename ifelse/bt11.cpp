/*
# The story
Sắp đến trung thu, Lớp lập trình python của thầy K muốn trích tiền quỹ mua bánh trung thu để cả lớp cùng ăn.
Thầy K cần mua chính xác n cái bánh trung thu.
Trong siêu thi có 2 loại: hộp 1 bánh và hộp 2 bánh. Hộp 1 bánh có giá tương ứng a tiền, hộp 2 bánh có giá tương ứng b tiền.
Thủ quỹ muốn chi càng ít tiền càng tốt.

# The problem
Nhiệm vụ của bạn là tìm ra số tiền tối thiểu mà thủ quỹ cần chi để thầy K có thể mua chính xác n bánh.
Gợi ý: Bạn tìm giá mua 1 cái bánh là bao nhiêu rồi lựa chọn phương án mua.
*/

#include <bits/stdc++.h>

using namespace std;

long long a,b,c;

int main(){
    cin >> a >> b >> c;
    long long t1=0, t2=0, ppc2=c/2;
    if (ppc2<b) {t1=(a/2)*c; t2=(a%2)*b;}
    else {t1=a*b;}
    cout << t1+t2 << endl;
    return 0;
}

/*
Note to self / Algorithm explanation:

- ppc2 = price per cake for the 2-pack
- if ppc2 is cheaper, prioritize buying the 2-pack, then buy the rest individually
- if the reverse is true (i.e. it's cheaper to buy one) then just buy all of them individually
*/
