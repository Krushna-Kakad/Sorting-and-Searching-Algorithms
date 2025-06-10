#include<stdio.h>

void main()
{
    int a[50],n,i,key,flag;

    printf("Enter Size of Array :");
    scanf("%d",&n);

    printf("Enter %d Array Elements :\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    //Linear Search Logic :
    printf("Enter No. to search :");
    scanf("%d",&key);

    for(i=0;i<n;i++)
    {
        if(key==a[i])
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    {
        printf("%d found at %d Position !",key,i+1);
    }
    else
    {
        printf("%d does not Found !",key);
    }

    return;
}