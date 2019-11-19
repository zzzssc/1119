#include<stdio.h>
#define N 1000
int a[N];
void swap(int *a,int *b)
{
    int t;
    t=*a;
    *a=*b;
    *b=t;
}
void select_sort(int a[],int n)
{
    int i,min,j;
    for(i=0;i<n-1;i++)
    {
        min=i;
        for(j=i+1;j<n;j++)
        {
            if(a[j]<a[min])
                min=j;
        }
        swap(&a[i],&a[min]);
    }
}
int main()
{
    int n,i;
    scanf("%d\n",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    select_sort(a,n);
    for(i=0;i<n;i++)
    {
        if(i<n-1)
            printf("%d ",a[i]);
        else if(i==n-1)
            printf("%d",a[i]);
    }
    return 0;
}
