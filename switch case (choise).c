#include<stdio.h>
void main(){
	char choise;
	printf("enter character between a to g\n");
	scanf("%c",& choise);
	switch(choise){
		case 'a': printf("entered char a");
		break;
		case 'b': printf("entered char b");
		break;
		case 'c': printf("entered char c");
		break;
		case 'd': printf("entered char d");
		break;
		case 'e': printf("entered char e");
		break;
		case 'f': printf("entered char f");
		break;
		case 'g': printf("entered char g");
		break;
		default: printf("entered invalid input");
		
	}
	
	
}
