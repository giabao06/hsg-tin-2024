//Cho một số nguyên không âm N, hãy in ra dạng biểu diễn của N dưới hệ 16.

#include <bits/stdc++.h>

using namespace std;

string s="";

void print16(long long x){
    string s1="", s2="";
    if (x%16<10 && x>0) s2 = to_string(x%16); else
    switch(x%16){
        case 10: s2 = "A"; break;
        case 11: s2 = "B"; break;
        case 12: s2 = "C"; break;
        case 13: s2 = "D"; break;
        case 14: s2 = "E"; break;
        case 15: s2 = "F"; break;
    }
    string st=s1+s2; s=s+st; x=x/16;
    if (x>0) {print16(x);}

}

int main(){
    long long n=0; cin >> n;
    print16(n); reverse(s.begin(), s.end()); cout << s; return 0;
}
