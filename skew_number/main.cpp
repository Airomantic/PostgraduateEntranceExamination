#include <iostream>

using namespace std;
/**
在 skew binary 表示中，第 k 位的值 x[k] 表示 x[k]×(2^(k+1)-1)。
 每个位上的可能数字是 0 或 1，最后面一个非零位可以是 2，
 例如，10120(skew) = 1×(2^5-1) + 0×(2^4-1) + 1×(2^3-1) + 2×(2^2-1) + 0×(2^1-1) =
 31 + 0 + 7 + 6 + 0 = 44。
 前十个 skew 数是 0、1、2、10、11、12、20、100、101、以及 102。
 * @return
 */
int func(const string &s) {
    int result = 0;
    int digit, position;
    for (int i = 0; i < s.length(); i++) {
        digit = s[i] - '0';//从左到右获取每个位置上的数字
        position = s.size() - i;//每个数字对应的位数
        result += digit * ((1 << position) - 1);//1<<position 比如position =2,2^(二进制即100转化十进制为2)=2^2，总之就是二进制的次方，记住就好
    }
    return result;
}

int main() {
    string s;
    while (cin>>s){
        cout << func(s) << endl;
    }
    return 0;
}

