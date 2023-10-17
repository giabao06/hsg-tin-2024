/*
Một con Cua Hoàng Đế được đặt trên trục tọa độ Ox. Con cua di chuyển theo thuật toán sau:

    Bước thứ 1: di chuyển sang phải a bước
    Bước thứ 2: di chuyển sang trái b bước
    Bước thứ 3: di chuyển sang phải a bước
    Bước thứ 4: di chuyển sang trái b bước

Nhiệm vụ của các bạn là tính toán vị trí của con cua trên trục Ox sau khi thực hiện k bước nhảy.
*/

#include <bits/stdc++.h>

using namespace std;

long long a=0, b=0, k=0;

int main(){
    cin >> a >> b >> k; int hk=k/2;
    if (k%2!=0) {cout << (a*hk)+a-(b*hk);} else cout << (hk*(a-b));
    return 0;
}
