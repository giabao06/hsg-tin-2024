//Cho một mảng số nguyên A gồm N phần tử, hãy in ra mảng
//theo thứ tự từ trái qua phải và từ phải qua trái bằng đệ quy.

#include <bits/stdc++.h>

using namespace std;

array <long long, 1000> a;

void fwprint(int x){
    if (x==0) {cout << a[x];}
    return (fwprint(x-1));
}

void rwprint(int x){
    if (x==)
}
