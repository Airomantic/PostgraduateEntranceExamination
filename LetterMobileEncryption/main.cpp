#include <iostream>
#include <cstring>

#define N 100
using namespace std;
/**
 * 加密：
 * 后继字母代替前一个字母
 * @return
 */
int main() {

    /*char s[N];
    while (gets(s)) {
        int length = strlen(s);
        for (int i = 0; i < length; i++) {
            if ('a'<=s[i]&&s[i]<='y')
                s[i]++;
            else if ('A'<=s[i]&&s[i]<='Y')
                s[i]++;
            else if (s[i]=='z')
                s[i] = 'a';
            else if (s[i]=='Z')
                s[i] = 'A';
        }
        puts(s);
    }*/
    string s;
    getline(cin, s);
    char newS[N];
    strcpy(newS, s.c_str());
    for (int i = 0; i <s.length() ; i++) {
        if ((newS[i]>'a'&&newS[i]<'z')||newS[i]>'A'&&newS[i]<'Z'){
            newS[i]++;
        }
        else if (newS[i]=='z'){
            newS[i] = 'a';
        }
        else if (newS[i]=='Z'){
            newS[i] = 'A';
        }
    }
    for (int i = 0; i < s.length(); i++)
        cout << newS[i];
    return 0;
}
