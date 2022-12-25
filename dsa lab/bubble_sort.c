#include<stdio.h>
#include<conio.h>
void swap(int *xp,int *yp);
void swap(int *xp,int *yp)
{
    int temp=*xp;
    *xp=*yp;
    *yp=temp;
}
void bubble_sort(int arr[],int n);
void bubble_sort(int arr[],int n)
{
    int i,j;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            swap(&arr[j],&arr[j+1]);
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
    bubble_sort(a,n);
    printf("SORTED ARRAY OF ENTERED ELEMENTS IS\n");
    for(int j=0;j<n;j++)
    {
        printf("%d\t",a[j]);
    }
    getch();
    return 0;
}