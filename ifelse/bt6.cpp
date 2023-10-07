/*
Nhập vào 3 số nguyên a, b, c. In ra màn hình theo thứ tự tăng dần.
Lưu ý: Học sinh chỉ được dùng phép gán và câu lệnh IF
*/

//sort mảng to the rescue :deocuu:
#include <bits/stdc++.h>

using namespace std;

int a[3];

void asort(){
    int tmp=0;
    for (int i=0; i<2; i++) {
    for (int j=i+1; j<3; j++) {if (a[i]>a[j]) {tmp=a[i]; a[i]=a[j]; a[j]=tmp;} }
    }
}

int main(){
    for (int i=0; i<3; i++) {cin >> a[i];} asort();
    cout << a[0] << char(32) << a[1] << char(32) << a[2];
    return 0;
}
