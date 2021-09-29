#include <stdio.h>
#include <string.h>
#define size 100
char ch[size];
struct palindrome
{
    char arr[size];
    int top;
};
void push (struct palindrome *s, char c)
{
    if (s->top == size-1)
        printf("Stack is Full!");
    else
    {
        s->top = s->top + 1;
        s->arr[s->top] = c;
    }
}
void pop (struct palindrome *s)
{
    s->top = s->top - 1;
}

int even (struct palindrome s, int n)
{
    for (int i = 0; i < n/2; i++)
    {
        push(&s, ch[i]);
    }
    for (int i = n/2; i < n; i++)
    {
        if (ch[i] == s.arr[n-i-1])
            pop(&s);
        else
            return -1;
    }
    return 1;
}
int odd (struct palindrome s, int n)
{
    for (int i = 0; i < n/2; i++)
    {
        push(&s, ch[i]);
    }
    for (int i = n/2+1; i < n; i++)
    {
        if (ch[i] == s.arr[n-i-1])
            pop(&s);
        else
            return -1;
    }
    return 1;
}
int main ()
{
    struct palindrome s;
    printf("Enter your string: ");
    scanf("%s", &ch);
    s.top = -1;
    int n = strlen(ch);
    int ans;
    if (n%2 == 0)
    {
        ans = even(s, n);
    }    
    else
    {
        ans = odd(s, n);
    }
    if (ans == 1)
    printf("Palindrome");
    else
    printf("Not a Palindrome");
}