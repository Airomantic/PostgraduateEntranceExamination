#include <iostream>

using namespace std;
char map[10000][10000];

int main() {
    int i, j, m, n, total;
    char ch = 'A';
    cin >> m >> n;
    for (int i = 0; i < m; ++i)
        for (int j = 0; j < n; ++j)
            map[i][j] = '0';

    i = j = total = 0;
    map[i][j] = 'A';
    while (total < n * m - 1) {
        while (j + 1 < n && map[i][j + 1] == '0') {
            if (ch >= 90) ch -= 26;//26个字母
                j = j + 1;
            ch = ch + 1;
            map[i][j] = ch;//将字母传入
            total = total + 1;
        }
        while (i + 1 < m && map[i + 1][j] == '0') {
            if (ch>=90) ch -= 26;
            i = i + 1;
            ch = ch + 1;
            map[i][j] = ch;
            total = total + 1;
        }
        while (j - 1 >= 0 && map[i][j - 1] == '0') {
            if (ch>=90) ch -= 26;
            j=j-1;
            ch = ch + 1;
            map[i][j] = ch;
            total = total + 1;
        }
        while (i - 1 >= 0 && map[i - 1][j] == '0') {
            if (ch>=90) ch -= 26;
            i = i - 1;
            ch = ch + 1;
            map[i][j] = ch;
            total = total + 1;
        }
    }
    for (i = 0; i < m;i ++) {
        for (j = 0; j < n; j++)
            cout << " " << map[i][j];
        cout << endl;
    }
    return 0;
}
