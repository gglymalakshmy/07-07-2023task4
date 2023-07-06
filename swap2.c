// swap two numbers without using 3rd variable
#include <stdio.h>
int main() {
    int a,b;
    printf("Enter two numbers ");
    scanf("%d%d",&a,&b);
    printf("\nValue of a = %d and value of b = %d",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("\nValue of a = %d and value of b = %d",a,b);
    return 0;
}