#include <iostream>
#include <cmath>

int skew_number(int digit, int position);

using namespace std;

int skew_number(int digit, int position) {
    if (digit==0){
        return 0;
    } else{
        return digit * (pow(2, position) - 1);
    }
}
int main() {
    string s;
    while (cin>>s){
        int L = s.size();
        int sum = 0;
        for (int i = 0; i <s.size() ; i++) {//s.size()与s.length()效果一样
            sum += skew_number(s[i] - '0',L-i);
        }
        cout << sum << endl;
    }
    return 0;
}


