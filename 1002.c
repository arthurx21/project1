#include<stdio.h>
#include<string.h>
#define SIZE 1001

int main(void){
	char x[SIZE],y[SIZE],xy[SIZE+1];
	char big[SIZE],small[SIZE];
	int line,i,count=0;
	scanf("%d",&line);
	for(i=0;i<line;i++){
		count++;
		scanf("%s %s", x,y);
		int a=0,b=0;
		a = strlen(x);
		b = strlen(y);
		if(a>b){
			strcpy(big,x);
			int c;
			for(c=0;c<a-b;c++) small[c] = '0';
			for(c;c<a;c++) small[c] = y[c-a+b];
		}
		if(a<b){
			strcpy(big,y);
			int c;
			for(c=0;c<b-a;c++) small[c] = '0';
			for(c;c<b;c++) small[c] = y[c-b+a];
		}
		if(a==b){
			strcpy(big,x);
			strcpy(small,y);
		}
		int re = 0,sum=0,j=0;
		for(j=strlen(big)-1;j>=0;j--){
			sum=big[j]+small[j] + re;
			if(sum>='0' + '0' + 10){
				re  = 1;
				xy[j] = sum  -'0' - 10;
			}
			else{
				re = 0;
				xy[j]= sum - '0';
			}
		}
		if(re == 0){
			printf("Case %d:\n%s + %s = %s\n",count,x,y,xy);
		}
		if(re == 1){
			char sxy[SIZE+1];
			sxy[0] = 1;
			for(j=1;j<strlen(big)+1;j++) sxy[j]=xy[j-1];
			printf("Case %d:\n%s + %s = %s\n",count,x,y,sxy);
		}
	}
}