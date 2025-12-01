#include <stdio.h>

int main(){
    char sign;
int a;
int b;
int solution;
printf("Enter a first number: ");
scanf("%d",&a);
printf("Enter second number: ");
scanf("%d",&b);
printf("Enter operator: ");
scanf(" %c",&sign);
if(sign=='+'){
    solution=a+b;
}
else if(sign=='-'){
  solution=a-b;
}
else if(sign=='/'){
   solution=a/b;
}
else if(sign=='*'){
  solution=a*b;
}
else {
    printf("invalid value");
    return 0;
}
printf("the answer is %d",solution);
return 0;
}
