#include<stdio.h>
#include<conio.h>
void swap(int xp,int yp);
void swap(int xp,int yp)
{
    int temp=xp;
    xp=yp;
    yp=temp;
}
int p(int a[],int lb,int ub);
int p(int a[],int lb,int ub)
{
    int pivot=a[lb];
    int start=lb;
    int end=ub;
    while(start<end)
    {
        if(a[start]<=pivot)
        start++;
        else if(a[end]>pivot)
        end--;
        if (start<end)
        swap(a[start],a[end]);
    }
    swap(a[end],pivot);
    return end;
}
void quick_sort(int a[],int start,int end);
void quick_sort(int a[],int start,int end)
{
    if(start<end)
    {
        int loc=p(a,start,end);
        quick_sort(a,start,loc-1);
        quick_sort(a,loc+1,end);
    }
}
int main()
{
    int n,a[200];
    printf("HOW MANY NUMBER OF ELEMENTS ARE TO BE SORTED");
    scanf("%d",&n);
    printf("ENTER THE NUMBERS TO BE SORTED");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    quick_sort(a,0,n);
    printf("SORTED ARRAY OF ENTERED ELEMENTS IS\n");
    for(int j=0;j<n;j++)
    {
        printf("%d\t",a[j]);
    }
    getch();
    return 0;
}