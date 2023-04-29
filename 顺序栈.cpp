#include <stdio.h>
#include <stdlib.h>

#define MAXSIZE 100

typedef int SElemType;

typedef struct {
    SElemType* base;
    SElemType* top;
    int stacksize;
} SqStack;

// 初始化栈
void InitStack(SqStack* S) {
    S->base = (SElemType*)malloc(MAXSIZE * sizeof(SElemType));
    S->top = S->base;
    S->stacksize = MAXSIZE;
}

// 判断栈是否为空
int StackEmpty(SqStack S) {
    return S.top == S.base;
}

// 元素入栈
void Push(SqStack* S, SElemType e) {
    if (S->top - S->base == S->stacksize) {
        printf("Stack overflow!\n");
        return;
    }
    *(S->top) = e;
    S->top++;
}

// 元素出栈
void Pop(SqStack* S, SElemType* e) {
    if (StackEmpty(*S)) {
        printf("Stack underflow!\n");
        return;
    }
    S->top--;
    *e = *(S->top);
}

// 获取栈顶元素
SElemType GetTop(SqStack* S) {
    if (StackEmpty(*S)) {
        printf("Stack is empty!\n");
        return -1;
    }
    return *(S->top - 1);
}

int main() {
    int h[20] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    int i = 0;
    SqStack B;
    InitStack(&B);
    for (i = 0; i < 10; i++) {
        Push(&B, h[i]);
    }
    printf("这个数组入栈之后是什么样子的？\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", B.base[i]);
    }
    printf("\n");
    SElemType c = GetTop(&B);
    printf("取得此时这个栈顶的元素是：\n%d\n", c);
    int j = 0;
    for (j = 0; j < 10; j++) {
        if (!StackEmpty(B)) {
            SElemType e;
            Pop(&B, &e);
            printf("%d ", e);
        }
    }
    printf("\n");
    return 0;
}
