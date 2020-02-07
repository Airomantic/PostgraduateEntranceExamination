#include <iostream>
#include <cstring>

int main() {
    char string_array[31];
    int number[31];
    int binary[1000];//不能太大否则运行超久

    while (scanf("%s", string_array) != EOF) {//#define EOF (-1) 遇到这个说明到末尾了
        //字符串转数字
        for (int i = 0; i <strlen(string_array) ; i++)
            number[i] = string_array[i] - '0';

        int size = strlen(string_array);
        int result_index = 0;//结果数组下标

        for (int j = 0; j <size ;) {//控制被除数开始位置
            int temp = 0, remain = 0;//余数
            for (int i = 0; i <size ; i++) {//控制除法运算，竖式除法，从头往后每一位依次作除法
                temp = (10 * remain + number[i]) % 2;
                number[i] = (10 * remain + number[i]) / 2;
                remain = temp;
            }
            binary[result_index] = remain;
            result_index++;
            while (number[j]==0)//从第一个非0开始
                j++;
        }
        for (int i = result_index-1; i >= 0 ; i--) {//逆序输出
            printf("%d", binary[i]);
        }
        printf("\n");
    }
    return 0;
}
