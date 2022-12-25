#include<stdio.h>
#include<conio.h>
void merge(int arr[],int l,int m,int r);
void merge(int arr[],int l,int m,int r)
{
    int i,j,k;
    int n1=m-l+1;
    int n2=r-m;
    int L[n1],R[n2];
    for(int i=0;i<n1;i++)
    L[i]=arr[l+i];
    for(int j=0;j<n2;j++)
    R[j]=arr[m+1+j];
    i=0;
    j=0;
    for(int k=l;k<r;k++)
    {
        if(i==n1)
        {
            arr[k]=R[j];
            j++;
        }
        else if(j==n2)
        {
            arr[k]=L[i];
            i++;
        }
        else if(L[i]<R[j])
        {
            arr[k]=L[i];
            i++;
        }
        else if(L[i]>R[j])
        {
            arr[k]=R[j];
            j++;
        }
    }
}
void merge_sort(int a[],int low,int high);
void merge_sort(int a[],int low,int high)
{
    if(low<high)
    {
        int mid=(low+high)/2;
        merge_sort(a,low,mid);
        merge_sort(a,mid+1,high);
        merge(a,low,mid,high);
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
    merge_sort(a,0,n);
    printf("SORTED ARRAY OF ENTERED ELEMENTS IS\n");
    for(int j=0;j<n;j++)
    {
        printf("%d\t",a[j]);
    }
    getch();
    return 0;
}