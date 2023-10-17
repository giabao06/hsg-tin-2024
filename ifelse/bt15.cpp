/*
Giáo dục địa phương là một môn học mới trong chương trình GDPT 2018, Bắp rất hào hứng với tiết học này
nên trước khi vào năm học mới Bắp đã tự đề ra cho mình là mỗi ngày sẽ đi 2 địa điểm nổi tiếng ở Sài Gòn.
Hành trình di chuyển sẽ khởi hành từ nhà của Bắp đến 2 địa điểm và sau đó quay lại về nhà.
Khoảng cách từ nhà Bắp đến địa điểm 1 là d1, khoảng cách từ nhà Bắp đến địa điểm 2 là d2, khoảng cách giữa 2 địa điểm là d3.
Bạn hãy giúp Bắp tính đoạn đường tối thiểu mà Bắp phải di chuyển qua từ nhà qua 2 địa điểm trên và quay về nhà.

Lưu ý: Bắp không ngại đi lại đường cũ hoặc ghé thăm lại địa điểm đã đi qua nhiều lần.
*/

#include <bits/stdc++.h>

using namespace std;

long long d1=0, d2=0, d3=0;

int main(){
    cin >> d1 >> d2 >> d3; long long t=0; int pos=0;
    if (d1<d2) {t=t+d1; pos=1;} else {t=t+d2; pos=2;}
    if (d1+d2<d3) {t=t+d2+d1; if (pos==1) pos=2; else pos=1;} else {t=t+d3; if (pos==1) pos=2; else pos=1;}
    if (pos==1) {if (d2+d3<d1) {t=t+d3+d2; pos=0;} else {t=t+d1; pos=0;}}
    if (pos==2) {if (d1+d3<d2) {t=t+d1+d3; pos=0;} else {t=t+d2; pos=0;}}
    cout << t; return 0;
}
