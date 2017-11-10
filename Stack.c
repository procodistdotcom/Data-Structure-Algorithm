#define stackSize 100
int myStack[stackSize], top = -1; //Global variables

void push(int value){

    if(top>=stackSize-1)
        printf("Stack is full! Cannot push the value!");
    else
        myStack[++top] = value;

}

void peek()
{
    if(top<0)
       printf("Stack is Empty!\n");
    else
       printf("%d\n", myStack[top]);
}



void pop()
{
    if(top<0)
       printf("Stack is empty! Cannot POP any value!\n");
    else
       top--;
}
void main()
{

    push(10);
    push(20);
    push(30);
    peek();
    pop();
    peek();
}
