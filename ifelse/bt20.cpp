/*
Sau khi giải nghệ, một vận động viên quyết tâm xây dựng một phòng riêng để trưng bày
tất cả các chiếc cúp và huy chương của mình đạt được trong suốt sự nghiệp thi đấu lên n kệ.

Hiện tại anh ta đang có a1 cúp hạng nhất, a2 cúp hạng nhì, a3 cúp hạng ba,
b1 huy chương vàng, b2 huy chương bạc và b3 huy chương đồng.

Quy tắc xếp sắp xếp như sau:
- Cúp và huy chương không nằm trong cùng một kệ
- Không quá 6 cúp trên một kệ
- Không quá 8 huy chương trên một kệ.

Nhiệm vụ của các bạn là giúp anh VĐV kiểm tra xem số kệ hiện tại trong nhà của
đủ để sắp xếp theo quy tắc đó không ? Nếu đủ thì in ra YES, ngược lại in ra NO
*/

#include <bits/stdc++.h>

using namespace std;

int a1,a2,a3,b1,b2,b3,n;

int main(){
    cin >> a1 >> a2 >> a3 >> b1 >> b2 >> b3 >> n; int n1=0, n2=0;
    int at=a1+a2+a3; int bt=b1+b2+b3;
    if ((at%6)!=0) {n1=(at/6)+1;} else n1=(at/6);
    if ((bt/8)!=0) {n2=(at/6)+1;} else n2=(bt/8);
    if (n1+n2 <= n) {cout << "YES";} else cout << "NO";
    return 0;
}
