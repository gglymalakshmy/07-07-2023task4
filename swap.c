// swap two numbers
#include <stdio.h>
int main() {
    int a,b,temp;
    printf("Enter two numbers ");
    scanf("%d%d",&a,&b);
    printf("\nValue of a = %d and value of b = %d",a,b);
    temp=a;
    a=b;
    b=temp;
    printf("\nValue of a = %d and value of b = %d",a,b);
    return 0;
}