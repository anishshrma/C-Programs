#include<stdio.h>
int main()
{
    int a[100],i,n,pos;
    printf("enter the size of array:");
    scanf("%d",&n);
    printf("enter the element of array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("element of array\n");
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
    printf("\nenter the position where you want to delete an element:");
    scanf("%d",&pos);
    if(pos>=n+1)
    printf("deletion not possible\n");
    else
    for(i=pos;i<n-1;i++)
    {
        a[i]=a[i+1];
    }
    printf("resultant array\n");
    for(i=0;i<n-1;i++)
    {
        printf("%d",a[i]);
    }
    return 0;
}