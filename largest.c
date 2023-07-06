// largset element in an array
#include <stdio.h>
int main() {
    int a[10],n,i,large=0;
    printf("Enter the limit ");
    scanf("%d",&n);
    printf("Enter the elements ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    large=a[0];
    for (int i = 0; i <n; i++) {     
       if(a[i] > large)    
           large = a[i];    
    }      
    printf("Largest element present in given array: %d\n", large);  
    return 0;
}