#include <iostream>
#include "Node.h"


using namespace std;
/**
 * 需要放在main()函数前
 * @param a 指针，需要通过->指向属性
 * @param b
 */
void swap(Node *a,Node *b){
    Node tmp;
    tmp.no = a->no;
    tmp.score = a->score;

    a->no = b->no;
    a->score = b->score;

    b->no = tmp.no;
    b->score = tmp.score;
}
/**
 * tmp终端监督程式（Terminal Monitor Program）
 * @return
 */
int main() {
    int numbers;
    scanf("%d", &numbers);
    Node *students = (Node *) malloc(sizeof(Node) * numbers);
    for (int i = 0; i < numbers; ++i) {
        scanf("%d %d", &(students[i].no), &(students[i].score));
    }
    //bubble sort
    for (int i = numbers-1; i >0 ; --i) {
        bool flag = false;
        for (int j = 0; j <i ; ++j) {
            if (students[j].score > students[j + 1].score) {
                swap(&(students[j]), &(students[j + 1]));
                flag = true;
            } else if (students[j].score == students[j + 1].score && students[j].no > students[j + 1].no) {
                swap(&(students[j]), &(students[j + 1]));
                flag = true;
            }
        }
        if (flag== false)
            break;
    }
    for (int i = 0; i < numbers; ++i) {
        printf("%d %d\n", students[i].no, students[i].score);
    }
    free(students);
    return 0;
}
