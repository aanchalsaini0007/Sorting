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

int main()
{
    int arr[]={3,5,2,8,6};
    int n=5,i,j;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(arr[j]>arr[j+1])
                swap(&arr[j],&arr[j+1]);
        }
    }
    display(arr,n);
}
