#include<stdio.h>
void main(){
	
	int c=5;
	int *pc;
	pc = &c;
	printf("addres of the pinter%d\n",pc);
	printf("Value stored:%d\n",*pc);
}