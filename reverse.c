// array reverse
#include <stdio.h>
int main() {
    int a[10],n,i;
    printf("Enter the limit ");
    scanf("%d",&n);
    printf("Enter the elements ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("The elements are........ \n");
    for(i=n-1;i>=0;i--)
    {
    printf("%d ",a[i]);
    }
    return 0;
}