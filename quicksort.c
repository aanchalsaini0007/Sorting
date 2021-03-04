#include<stdio.h>

void swap(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}

void display(int arr[],int n)
 {
     for(int i=0;i<n;i++)
     {
         printf("%d\n",arr[i]);
     }
 }

int partition(int arr[],int l,int r)
{
    int pivot=arr[r];
    int i=l,j=l;
    for(j=l;j<r;j++)
    {
        if(arr[j]<pivot)
        {
            swap(&arr[i],&arr[j]);
            i++;
        }
    }
    swap(&arr[i],&arr[r]);
    return i;
}

void quicksort(int arr[],int l,int r)
{
    int pivotindex;
    if(l<r)
    {
        pivotindex=partition(arr,l,r);
        quicksort(arr,l,pivotindex-1);
        quicksort(arr,pivotindex+1,r);
    }
}

int main()
{
    int arr[]={3,5,2,8,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    quicksort(arr,0,n-1);
    display(arr,n);
}
