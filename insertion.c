#include<stdio.h>
#define max 10

void insert(int a[],int n)
{
    int i,j,t=0;
    for(i=0;i<n;i++)
    {
       t=a[i];
       j=i-1;
       while(j>=0 && t<a[j])
       {
           a[j+1]=a[j];
           j--;
       }
       a[j+i]=t;
    }
}

void display(int a[],int n)
 {
     for(int i=0;i<n;i++)
     {
         printf("%d\n",a[i]);
     }
 }

void main()
{
    int a[]={3,5,2,8,6};
    int n=sizeof(a)/sizeof(a[0]);
    insert(a,n);
    display(a,n);
}








