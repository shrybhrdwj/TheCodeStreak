#include<stdio.h>

int main()
{
    int a[1000],i,j,element,range,list1,list2,c=0;
    printf("Enter the number of elements:");
    scanf("%d",&element);
    printf("Enter the number of terms:");
    scanf("%d", &range);
    printf("Enter the elements:\t");
    for(i=0;i<element;i++)
    scanf("%d",&a[i]);
    printf("Enter the range:\t");
    for(i=0;i<range;i++)
    {
        scanf("%d %d",&list1,&list2);
        for(j=0;j<element;j++)
        {
            if((a[j]>=list1)&&(a[j]<=list2))
            c++;
        }
        printf("The desired output %d",c);
        c=0;
    }
    return 0;
}
