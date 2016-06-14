#include<stdio.h>
#include<stdlib.h>

int main(void){
    int n = 0;
    int i = 0, sum = 0;
    while(scanf("%d",&n) != EOF){
        sum = 0;
        for(i = 0;i <= n;i++){
            sum += i;
            }
        printf("%d\n",sum);
    }
    return 0;
}