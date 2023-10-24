/*Mùa hè ở quê hương Bắp khá nóng nên nhu cầu ăn kem cây của mọi người là rất cao.
Nắm bắt được nhu cầu thị trường, Bắp tung ra một khuyến mại như sau:

sau khi mọi người ăn kem xong thì giữ lại que kem, cứ 3 que kem sẽ đổi được 1 cây kem mới,

biết rằng ở 1 cây kem có giá là 17 tiền. Nhiệm vụ của bạn là với n tiền cho trước,
bạn có thể mua được bao nhiêu cây kem, kể cả việc đổi thưởng bằng que kem.*/

#include <bits/stdc++.h>

using namespace std;

long long n,t=0;
const int p=17, nt=3;

void total(){
    t=floor(n/p); long long tcp=t, tt=0;
    while (tcp>=3) {tcp=tcp-2; tt++; }
    t=t+tt;
}
int main(){
    cin >> n; total();
    cout << t; return 0;
}
