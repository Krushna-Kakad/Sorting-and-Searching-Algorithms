#include<stdio.h>

void main()
{
    int a[20],i,j,mid,key,n;

    printf("Enter Size of Array :");
    scanf("%d",&n);

    printf("Enter %d Array Elements :\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    //Binary Search Logic :
    for(i=1;i<n;i++)
    {
        for(j=0;j<n-i;j++)
        {
            if(a[j]>a[j+1])
            {
                key=a[j];
                a[j]=a[j+1];
                a[j+1]=key;
            }
        }
    }

    printf("Enter No. to search :");
    scanf("%d",&key);

    i=0;
    j=n-1;
    mid=(i+j)/2;

    while(a[mid]!=key && i<=j)
    {
        if(key < a[mid])
        {
            j=mid-1;
        }
        else
        {
            i=mid+1;
        }
        mid=(i+j)/2;
    }

    if(i<=j)
    {
        printf("%d found at %d Position !",key,mid+1);
    }
    else
    {
        printf("%d does not Found !",key);
    }

    return;
}