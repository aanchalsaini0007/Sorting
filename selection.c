
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
    int n=5,i,j,temp,index;
    for(i=0;i<n-1;i++)
    {
        temp=arr[i];
        index=i;
        for(j=i+1;j<n;j++)
        {
            if(arr[j]<temp)
            {
                temp=arr[j];
                index=j;
            }
        }
        swap(&arr[i],&arr[index]);
    }
    display(arr,n);
}
