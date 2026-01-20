#include <stdio.h>
int add(int a, int b)
{
    int sum = a + b;
    return sum;
}
int main()
{
    int a, b;
    printf("enter two numbers");
    scanf("%d %d", &a, &b);
    int result = add(a, b);
    printf("sum is :%d", result);
    return 0;
}