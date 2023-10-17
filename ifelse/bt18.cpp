/*
Bắp rất thích chơi với các mảnh gỗ có kích thước 2 x 1. Hôm đó, Bắp được ba cho 1 khay gỗ kích thước m x n.
Bắp cố gắng tìm cách xếp được càng nhiều mảnh gỗ vào khay càng tốt. Có một số lưu ý như sau:

    Tất cả các mảnh gỗ đều có kích thước bằng nhau
    Không được xếp chồng các mảnh gỗ lên nhau
    Các mảnh gỗ có thể xếp sát cạnh với khay

Hãy giúp Bắp tìm số lượng mảnh gỗ tối đa có thể xếp được vào khay.
*/

#include <bits/stdc++.h>

using namespace std;

long long m=0, n=0;

int main(){
    cin >> m >> n;
    long long s=m*n;
    cout << s/2;
    return 0;
}
