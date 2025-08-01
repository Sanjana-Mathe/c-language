#include<stdio.h>
int main(){
	int a=60;
	int b=70;
	int c;
	c=a=b;
	printf("a=b is %d\n",c);
	c=a+=b;
	printf("a+=b is %d\n",c);
	c=a-=b;
	printf("a-=b is %d\n",c);
	c=a*=b;
	printf("a*=b is %d\n",c);
	c=a/=b;
	printf("a/=b is %d\n",c);
	c=a%=b;
	printf("a%=b is %d\n",c);
	
}
