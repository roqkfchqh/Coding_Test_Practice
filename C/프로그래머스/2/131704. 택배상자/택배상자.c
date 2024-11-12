#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#define MAX_SIZE 1000000

//스택생성
typedef struct Stack{
    int data[MAX_SIZE];
    int top;
} Stack;

//스택초기화
void initStack(Stack* stack){
    stack->top = -1;
}
    
//push
void push(Stack* stack, int value){
    stack->data[++(stack->top)] = value;
}

//맨위요소
int peek(Stack* stack){
    return stack->data[stack->top];
}

//맨위요소제거
int pop(Stack* stack){
    return stack->data[(stack->top)--];
}

// order_len은 배열 order의 길이입니다.
int solution(int order[], size_t order_len) {
    Stack stack;
    initStack(&stack);
    int answer = 0;
    int belt = 1;       //벨트에 상자번호
    int i = 0;      //벨트길이
    while(i < order_len){
        if(order[i] == belt){ //order와 belt가 같을때
            answer++;
            belt++;
            i++;
        }else if(stack.top != -1 && order[i] == peek(&stack)){ //peek와 order가 같을떄
            pop(&stack);    //맨위스택제거
            answer++;
            i++;
        }else if(belt <= order_len){ //order와 일치하지않으면 벨트에 있던거 스택에넣기
            push(&stack, belt);         //다음 belt값과 현재의order[i]를 비교시작
            belt++;
        }else break;    // 상자번호가 order길이 넘으면 중단(맞는값이없음)
    }
    return answer;
}