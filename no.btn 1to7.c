#include<stdio.h>
void main(){
	int choise;
	printf("enter number between 1 to 7\n");
	scanf("%d",&choise);
		switch(choise){
		case 1:printf("monday");
		break;
		case 2:printf("tuesday");
		break;
		case 3:printf("wednesday");
		break;
		case 4:printf("thursday");
		break;
		case 5:printf("friday");
		break;
		case 6:printf("saturday");
		break;
	    case 7:printf("sunday");
		break;
		default: printf("invalid input");
	}
}
