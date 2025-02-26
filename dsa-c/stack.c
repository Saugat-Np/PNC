#include<stdio.h>
#define MAX 5
struct stack
{
    int stk[MAX];
    int top;
}stak;
void init_stack(struct stack *t){
    t->top = -1;
}
int is_empty(struct stack *t){
    return t->top == -1;
}
int is_full(struct stack *t){
    return t->top == MAX-1;
}
void push(struct stack *t,int value){
    if(is_full(t)){
        printf("the stack is full , cannot push more data .\n");
        return;
    }
    t->stk[++(t->top)]= value;
    printf("%d is pushed\n",value);
}
int pop(struct stack *t){
    if(is_empty(t)){
        printf("the stack is empty, you can push data \n");
        return -1;
    }
    int popped = t->stk[(t->top)--];

    printf("%d is popped form the stack\n",popped);
    return  popped;
}
int main()
{

 init_stack(&stak);
 push(&stak,10);
 push(&stak,20);
 push(&stak,30);
 push(&stak,40);
 push(&stak,50);
 push(&stak,60);
 pop(&stak);
 pop(&stak);
 pop(&stak);
 pop(&stak);
 pop(&stak);
 pop(&stak);
 push(&stak,100);

    
    return 0;
}