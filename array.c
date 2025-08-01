#include<stdio.h>
#include <stdbool.h>
int arr[10];
void main(){
int i,j,k;
bool b[2];
printf("\n%d",b[1]);

printf("\n%d\n",arr[1]);
int marks[]={89,40,50,60,30,63,20,80,46,65,45,87,62,88,98};
printf("%d\n",sizeof(arr));
int len=sizeof(marks)/sizeof(marks[0]);
printf("%d\n",len);
for(i=0;i<len;i++){
	printf("%d\n",marks[i]);
}
}
