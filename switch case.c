#include<stdio.h>
void main(){
	int a=90;
	int b=60;
	int c=30;
	int d=50;
	int choise;
	printf("enter 1. addition\n 2. substraction\n 3.multiplication\n 4. divide\n 5. remainder\n");
	scanf("%d",&choise);
	int add(){
		return a+b,c+d;
	}
	int sub(){
		return a-b;
	}
	double mult(){
		return a*b;
	}
	float div(){
		return a/b;
	}
	switch(choise){
		case 1:printf("addition is %d %d",a+b,c+d);
		break;
		case 2:printf("substraction is %d",a-b);
		break;
		case 3:printf("multiplication is %d",a*b);
		break;
		case 4: printf("divide is %d",a/b);
		break;
		case 5: printf("remainder is %d",a%b);
		break;
		default: printf("entered invalid input");
	}
}
