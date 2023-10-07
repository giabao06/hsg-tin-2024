/*
Cho biết tháng và năm, hãy in ra số ngày tương ứng có trong tháng đó.
Nếu tháng là hợp lệ(tháng 1 tới 12) và năm là hợp lệ (lớn hơn 0)
thì in ra số ngày tương ứng của năm đó, ngược lại in ra "INVALID".
*/

#include <bits/stdc++.h>

using namespace std;

const int days30[4] = {4,6,9,11};
int m=0, y=0;

int checkall(int m, int y){
    bool flag=false;
    if ((m<1 || m>12) || (y<0)) return -1;
    if (y%400==0 || (y%4==0 && y%100!=0)) flag=true;
    if (m==2 && flag==true) return 29;
    if (m==2 && flag==false) return 28;
    for (int i=0; i<4; i++) {if (m==days30[i]) return 30;}
    return 31;
}

int main(){
    cin >> m >> y;
    if (checkall(m,y)==-1) {cout << "INVALID";} else cout << checkall(m,y);
    return 0;
}
