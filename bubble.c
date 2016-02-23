#include<stdio.h>
int s,temp,i,j,a[20];
{
printf("enter total number of elements:");
scanf("%d",&s);
printf("enter %d elements:",s);
for(i=0;i<s;i++);
scanf("%d",&a[i]);
for(i=s-2;i>=0;i--);
for(j=0;j<=i;j++);
if(a[j]>a[j+1])
{
temp=a[i];
a[j]=a[j+1];
a[j+1]=temp;
}
printf("after sorting:");
for(i=0;i<s;i++0)
printf("%d",a[i]);
return 0;
}

