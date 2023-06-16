#include<stdio.h>
#include<stdlib.h>

int main() {
    int n;
    printf("type a number: ");
    scanf("%d",&n);
    if(n<0){
        printf("is negative");
    }else if(n>0){
        printf("is positive");
    }else{
        printf("is zero");
    }
  return 0;
}
