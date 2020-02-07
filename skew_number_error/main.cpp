#include <iostream>
#include <cstring>

char quick_pow(int i);

using namespace std;

void deal_number(char skew_s[], int length){
    long number = 0;
    for (int i = 0; i <length ; i++) {
        if (skew_s[i] != '0') {
            number += (skew_s[i] - '0') * quick_pow(length - i);
        }
    }
    cout << number << endl;
}

char quick_pow(int i) {
    int x = 1, p = 2;
    while (i){
        if (i%2) x *= p;
        p *= p;
        i /= 2;
    }
    return x-1;//注意！
}
/**
 * 在大量数时就不满足了
 * @return
 */
int main() {
    char skew[100];
    while (cin >> skew) {
        deal_number(skew, strlen(skew));
    }
    return 0;
}

