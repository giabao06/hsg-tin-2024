/*
Cho biết điểm kiểm tra môn học Python của 1 học sinh theo thứ tự KTTx1,KTTx2,KTTx3,KTGk, KTCk.
Biết KTTx là hệ số 1, KTGk là hệ số 2, KTCk là hệ số 3. In ra điểm trung bình (lấy 1 chữ số thập phân)
và xếp loại học tập của học sinh đó. Công thức tính ĐTB = (điểm * hệ số)/tổng hệ số Xếp loại học tập được tính như sau:

    In ra "Gioi" nếu ĐTB>=8.0
    In ra "Kha" nếu 6.5 <= ĐTB <8.0
    In ra "Trung binh" nếu 5.0 <= ĐTB <6.5
    In ra "Yeu" nếu 3.5 <= ĐTB < 5
    Còn lại in ra "Kem"

Dòng 1: in ra điểm trung bình, lấy 1 chữ số thập phân. Dòng 2: in ra xếp loại của học sinh
*/

#include <bits/stdc++.h>

using namespace std;

float tx1=0.0, tx2=0.0, tx3=0.0, gk=0.0, ck=0.0;

string xeploai(float a){
    if (a<3.5) return "Kem";
    if (a>=3.5 && a<5) return "Yeu";
    if (a>=5.0 && a<6.5) return "Trung binh";
    if (a>=6.5 && a<8.0) return "Kha";
    return "Gioi";
}
int main(){
    cin >> tx1 >> tx2 >> tx3 >> gk >> ck;
    float t=(tx1+tx2+tx3+2*gk+3*ck)/8;
    cout << fixed << setprecision(1) << t << endl << xeploai(t);
    return 0;
}
