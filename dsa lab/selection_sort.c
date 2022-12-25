#include<stdio.h>
#include<conio.h>
void swap(int *xp,int *yp);
void swap(int *xp,int *yp)
{
    int temp=*xp;
    *xp=*yp;
    *yp=temp;
}
void selection_sort(int a[],int n);
void selection_sort(int a[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<=n-1;j++)
        {
            if(a[i]>a[j])
            swap(&a[j],&a[j+1]);
        }
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
    selection_sort(a,n);
    printf("SORTED ARRAY OF ENTERED ELEMENTS IS\n");
    for(int j=0;j<n;j++)
    {
        printf("%d\t",a[j]);
    }
    return 0;
    getch();
}