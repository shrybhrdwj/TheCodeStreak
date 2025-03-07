#include<stdio.h>
int sum(int n){
    if(n!=0)
    return n+sum(n-1);
    else
    return n;
}

int main(){
    int num, result;
    scanf("%d",&num);
    for(i=0;i<n;i++)
    result = sum(num);
    printf("Result is:%d",result);
    return 0;
}
