#include <stdio.h>
#include <stdlib.h>

typedef int datatype;
#define maxsize 10

typedef struct {
    datatype array[maxsize];
    int length;
} sequenlist;

// 初始化顺序表
void initList(sequenlist* list) {
    list->length = 0;
}

// 判断顺序表是否为空
int isEmpty(sequenlist list) {
    return list.length == 0;
}

// 判断顺序表是否已满
int isFull(sequenlist list) {
    return list.length == maxsize;
}

// 入栈操作
int push(sequenlist* list, datatype data) {
    if (isFull(*list)) {
        printf("Stack is full.\n");
        return 0;
    }
}
