//Cho số nguyên n, nhiệm vụ của bạn là in ra bảng cửu chương

#include <bits/stdc++.h>

using namespace std;

void printonce(int x){
    //first, print a constant 0-multiplier
    cout << "0 x 0 = 0\n0 x 1 = 0\n0 x 2 = 0\n0 x 3 = 0\n0 x 4 = 0\n0 x 5 = 0\n0 x 6 = 0\n0 x 7 = 0\n0 x 8 = 0\n0 x 9 = 0\n0 x 10 = 0\n\n";
    for (int i=1; i<=x; i++){
        for (int j=0; j<=10; j++) {cout << i << " x " << j << " = " << i*j << endl; if (j==10 && i!=x) {cout << endl;}
    }
}
}

int main(){
    int n; cin >> n; printonce(n); return 0;
}
