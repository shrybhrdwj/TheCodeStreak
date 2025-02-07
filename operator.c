#include<stdio.h>

int add(int a,int b){
    int add;
    return add= a+b;
}

int sub(int a, int b){
    int sub;
    return sub= a-b;
}
int mult(int a, int b){
    int mult;
    return mult= a*b;
}
int div(int a, int b){
    int div;
    return div= a/b;
}
int mod(int a, int b){
    int mod;
    return mod= a%b;
}

int main(){
    int num1, num2, result;
    scanf("%d%d",&num1,&num2);
    //result=num1/num2;
    printf("sum is:%d",add(num1,num2));
    printf("\nsub is:%d",sub(num1,num2));
    printf("\nmult is:%d",mult(num1,num2));
    printf("\ndiv is:%d",div(num1,num2));
    printf("\nmod is:%d",mod(num1,num2));
    return 0;
}
