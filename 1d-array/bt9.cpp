//Cho mảng số nguyên A[] gồm N phần tử, hãy liệt kê các giá trị xuất hiện trong mảng
//kèm theo tần suất tương ứng, mỗi giá trị chỉ liệt kê một lần theo thứ tự xuất hiện.

#include <bits/stdc++.h>

using namespace std;

void alist(long long a[], int n){
    bool chk[n]; for (int i=0; i<n; i++) {chk[i]=true;}
    for (int i=0; i<n-1; i++) if (a[i]>=0 && chk[i]==true) {
        cout << a[i] << char(32); int count=1;
        for (int j=i+1; j<n; j++) {if (a[i]==a[j]) {count++; chk[j]=false;}}
        chk[i]=false; cout << count << endl;
    }
    if (chk[n-1]!=false) {cout << a[n-1] << " 1";}
}

int main(){
    int n; cin >> n; long long a[n];
    for (int i=0; i<n; i++) cin >> a[i];
    alist(a, n); return 0;
}
