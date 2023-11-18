/*Cho mảng số nguyên A[] gồm N phần tử, nhiệm vụ của bạn là liệt kê các phần tử trong mảng
thỏa mãn nó lớn hơn cả phần tử đứng trước và phần tử đứng sau nó.
2 phần tử đầu tiên và cuối cùng của mảng không được coi là thỏa mãn. */

#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n; long long a[n];
    for (int i=0; i<n; i++) {cin >> a[i];}
    for (int i=2; i<n-1; i++){if (a[i]>a[i-1] && a[i]>a[i+1]) cout << a[i] << char(32);}
    return 0;
}
