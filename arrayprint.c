// print array
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
    for(i=0;i<n;i++)
    {
    printf("%d ",a[i]);
    }
    return 0;
}