#include<stdio.h>
#include<conio.h>
void insertion_sort(int arr[],int n);
void insertion_sort(int arr[],int n)
{
    int i,j,key;
    for(i=1;i<n;i++)
    {
        key=arr[i];
        j=i-1;
        while((j>=0)&&(arr[j]>key))
        {
            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j+1]=key;
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
    insertion_sort(a,n);
    printf("SORTED ARRAY OF ENTERED ELEMENTS IS\n");
    for(int j=0;j<n;j++)
    {
        printf("%d\t",a[j]);
    }
    getch();
    return 0;
}