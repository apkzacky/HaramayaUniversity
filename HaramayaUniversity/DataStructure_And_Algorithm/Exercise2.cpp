/*
Question is 

1.Write a program that convert infix to postfix notation
2. write a program that computes a given postfix notation
*/

//1. programe that converts infix to prostfix notation

#include<stdio.h>
#include<ctype.h>

char stack[100];
int top = -1;

void push(char x)
{
    stack[++top] = x;
}

char pop()
{
    if(top == -1)
        return -1;
    else
        return stack[top--];
}

int priority(char x)
{
    if(x == '(')
        return 0;
    if(x == '+' || x == '-')
        return 1;
    if(x == '*' || x == '/')
        return 2;
    return 0;
}

int main()
{
    char exp[100];
    char *e, x;
    printf("Enter the expression : ");
    scanf("%s",exp);
    printf("\n");
    e = exp;
    
    while(*e != '\0')
    {
        if(isalnum(*e))
            printf("%c ",*e);
        else if(*e == '(')
            push(*e);
        else if(*e == ')')
        {
            while((x = pop()) != '(')
                printf("%c ", x);
        }
        else
        {
            while(priority(stack[top]) >= priority(*e))
                printf("%c ",pop());
            push(*e);
        }
        e++;
    }
    
    while(top != -1)
    {
        printf("%c ",pop());
    }return 0;
}


//2. program that computes a given postfix notation 

#include < bits / stdc++.h >
    using namespace std;
float scanNum(char ch){
   int value;
    value = ch;
    return float(value - '0');//return float from character
}
int isOperator(char ch){
    if (ch == '+' || ch == '-' || ch == '*' || ch == '/' || ch == '^')
        return 1;//character is an operator
    return -1;//not an operator
}
   int isOperand(char ch){
    if (ch >= '0' && ch <= '9')
        return 1;//character is an operand
    return -1;//not an operand
}
   float operation(int a, int b, char op){
    //Perform operation
    if (op == '+')
        return b + a;
    else if (op == '-')
        return b - a;
    else if (op == '*')
        return b * a;
    else if (op == '/')
        return b / a;
    else if (op == '^')
        return pow(b, a); //find b^a
    else
