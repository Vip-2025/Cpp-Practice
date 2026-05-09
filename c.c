#include<stdio.h>
int main(){
    int a;
    int b;
    int c;
    printf("Enter your marks1: \n");
    scanf("%d",&a);
    printf("Enter your marks2: \n");
    scanf("%d",&b);
    printf("Enter your marks3: \n");
    scanf("%d",&c);
    int sum;
    sum=(a+b+c);
    int avg=sum/3;
    printf("Sum %d\n",sum);
    printf("avg %d\n",avg);
return 0;
}