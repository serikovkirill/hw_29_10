#include<iostream>
#include<vector>
#include<string>
using namespace std;
static int proiz(int x, int y) {
    bool neg = false;
    if (x < 0 && y >= 0) {
        x = -x;
        neg = true;
    }
    else if (y < 0 && x >= 0) {
        y = -y;
        neg = true;
    }
    else if (x < 0 && y < 0) {
        x = -x;//
        y = -y;
    }

    int res = 0;
    while (y != 0) {
        if ((y & 1) == 1) res += x;
        x <<= 1;
        y >>= 1;
    }
    return neg ? (-res) : res;
}
int main() {
    long long int a, b;
    cin >> a >> b;
    cout << proiz(a, b);
}
