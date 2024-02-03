#include<stdio.h>
int main()
{
    int arr[5]={1,2,3,4,5};
    int i,n,ToFind,Found=0;
    printf("enter number to search");
    scanf("%d",&ToFind);
    n=5;
    for (i=0;i<n;i++)
    {
        if (arr[i]==ToFind)
        {
            Found=1;
            break;
        }
    }
    if (Found==1)
    {
        printf("element found");
    }
    else{
        printf("not found");
    }
    return 0;
}