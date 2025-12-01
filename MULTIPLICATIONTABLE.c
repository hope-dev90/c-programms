#include <stdio.h>
int main(){
int a,b;
printf("enter a number: ");
scanf("%d",&a);
for(int i=0;i<=12;i++){
        b=a*i;

    printf("%d*%d=%d\n ",a,i,b);
}
    return 0;
}

