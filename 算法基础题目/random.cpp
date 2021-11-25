#include <ctime>
#include <iostream>
using namespace std;

int random(int n) {
    return (long long)rand() * rand() % n;
}

string getRandStr() {
    int len = 5;
    string s;
    for (int i = 0; i < len; i++) {
        s += char('a' + random(26));
    }
    return s;
}

int main() {
    // 必须用随机种子，不然每次生成的数据都是一样的
    srand((unsigned)time(0));

    int n = 20, q = 5;
    // cout << 1 << endl;
    cout << n << endl;
    for (int i = 1; i <= n; i++) {
        cout << getRandStr();
        cout << endl;
    }
    return 0;
}
