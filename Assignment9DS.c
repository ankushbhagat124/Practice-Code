#include <stdio.h>
#define size 100
struct postfix
{
    float arr[size];
    int top;
};
float value (char ch)
{
    float cnt = 1;
    for (char j = 'a'; j <= 'z'; j++)
    {
        if (ch == j)
        return cnt;
        cnt++;
    }
}
int operand(char ch)
{
    if (ch >= 'a' && ch <= 'z')
    return 1;
    return 0;
}
int operator(char ch)
{
    if (ch == '+' || ch == '-' || ch == '*' || ch == '/' || ch == '%')
    {
        return 1;
    }
    return 0;
}
void push (struct postfix *s, float val)
{
    if (s->top == size-1)
        printf("Stack is Full!");
    else
    {
        s->top = s->top + 1;
        s->arr[s->top] = val;
    }
}
float pop (struct postfix *s)
{
    if (s->top == -1)
    {
        return -1;
    }
    else
    {
        float y = s->arr[s->top];
        s->top = s->top - 1;
        return y;
    }
}
int main()
{
    struct postfix s;
    char input[size];
    printf("Enter postfix expression: ");
    scanf("%s", input);
    s.top = -1;
    int i = 0;
    float result;
    int flag = 1;
    while (input[i] != '\0')
    {
        if (operand(input[i]))
        {
            push(&s, value(input[i]));
        }
        else if (operator(input[i]))
        {
            float op1 = pop(&s);
            float op2 = pop(&s);
            if (op1 == -1 || op2 == -1)
            {
                flag = 0;
                printf("Invalid Postfix Expression!");
                break;
            }
            switch(input[i])
            {
                case '+': result = op2+op1;
                          break;
                case '-': result = op2-op1;
                          break;
                case '*': result = op1*op2;
                          break;
                case '/': result = op2/op1;
                          break;
            }
    
            push(&s, result);
        }
        else
        {
            flag = 0;
            printf("WRONG INPUT!");
            break;
        }
        i++;
    }
    if (flag == 1)
    {
        result = pop(&s);
        printf("Result: %f", result);
    }

}