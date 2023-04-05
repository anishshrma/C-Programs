// Program to insert ,deletion and linear search of an element in an array using switch case

#include <stdio.h>
int main()
{
    // declaring variable//
    int i, n, pos,a[100], choice;
    printf("Enter the number to perform specific function:");
    printf("1.insertion\n");
    printf("2.deletion\n");
    printf("linear search\n");
    scanf("%d", &choice);

    switch (choice)
    {
    // code for inserting element
    case 1:
    {
        printf("enter the size of array you want to create:");
        scanf("%d", &n);
        printf("enter the element of array\n");
        for (i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }
        printf("element of array\n");
        for (i = 0; i < n; i++)
        {
            printf("%d", a[i]);
        }
        printf("enter the position where you want to insert an element\n");
        scanf("%d", &pos);
        n++;
        for (i = n; i <= pos; i--)
            ;
        {
            a[i] = a[i - 1];
        }
        printf("enter the element:");
        scanf("%d", &a[pos - 1]);
        printf("Resultant element of array\n");
        for (i = 0; i < n; i++)
        {
            printf("%d\n", a[i]);
        }
        break;
    }
    case 2:
    {
        printf("enter the size of array you want to create:");
        scanf("%d", &n);
        printf("enter the element of array\n");
        for (i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }
        printf("element of array\n");
        for (i = 0; i < n; i++)
        {
            printf("%d", a[i]);
        }
        printf("enter the position where you want to delete an element:");
        scanf("%d", &pos);
        if (pos >= n + 1)
            printf("deletion not possible");
        else
        {
            for (i = pos; i < n - 1; i++)
            {
                a[i] = a[i + 1];
            }
            printf("resultant element of array\n");
            for (i = 0; i < n - 1; i++)
            {
                printf("%d", a[i]);
            }
        }
           break;
    }

    case 3:
    {
        // code for linear search
        int element,k;
        printf("enter the size of array you want to create:");
        scanf("%d", &n);
        printf("enter the element of array\n");
        for (i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }
        printf("element of array\n");
        for (i = 0; i < n; i++)
        {
            printf("%d", a[i]);
        }
        printf("enter the element which you search");
        scanf("%d",&element);
        for(i=0;i<n;i++)
        {
            if(element==a[i])
            {
                printf("%d element is found at %d index",element,i);
                k++;
            }
        }
        if(k==0)
        {
            printf("element is not find in array");
        }
        break;
    }
    default:
    {
        printf("invalid condition");
    }
}
return 0;
}
