/*
Sau một thời gian sử dụng, X quyết định nâng cấp sân bóng đá hình chữ nhật
có kích thước m x n với các thảm cỏ nhân tạo kích thước a x a.
Hãy tính số lượng thảm cỏ nhân tạo tối thiểu cần mua để của thể trả hết mặt sân.

Mặt thảm cỏ nhân tạo được phép phủ lớn hơn mặt sân. Tuy nhiên các bạn không được cắt thảm.
Các cạnh của mặt thảm phải song song với cạnh của sân bóng
*/

#include <bits/stdc++.h>

using namespace std;

long long m=0, n=0, a=0;

int main(){
    cin >> m >> n >> a; long long t=m/a;
    if (m%a==0){if (n%a==0) {t=t*(n/a);} else t=t+(t*(n/a));}
    else {t++;if (n%a==0) {t=t*(n/a);} else t=t+(t*(n/a));}
    cout << t; return 0;
}

/*
algorithm explanation
- Find the number of carpets needed to cover a row of m; if it's uneven, add 1 carpet
- Multiply that by n rows of m; if it's uneven, add another row.
*/
