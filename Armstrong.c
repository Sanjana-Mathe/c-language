#include<stdio.h>
int main(){
	int num,originalnum,r,result=0;
	printf("enter a three digit number:");
	scanf("%d",&num);
	originalnum=num;
	while (originalnum!=0){
	r=originalnum % 10;
	result += r*r*r;
	originalnum/=10;
}
if(result==num){
    printf("is an armstrong number %d\n",num);
}else{
    printf("is an not armstrong number %d\n",num);
}
return 0;
}

