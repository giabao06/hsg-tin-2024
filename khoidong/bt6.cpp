/*Cho số thực x, bạn hãy in ra 3 dòng lần lượt là

số nguyên lớn hơn gần x nhất,
số nguyên nhỏ hơn gần x nhất,
số nguyên gần x nhất

*/

#include <bits/stdc++.h>

using namespace std;

int main(){
    float x=0.0; cin >> x;
    cout << ceil(x) << endl << floor(x) << endl << round(x); return 0;
}
