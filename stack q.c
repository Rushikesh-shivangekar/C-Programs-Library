#include<stdio.h>
#define MAX 10
int top =-1;
int stack[MAX];
void push(int value){
	if(top==MAX-1){
		printf("stack is overflow");
	}
	else{
		top++;
		stack[top]=value;
		printf("%d element into stack",value);
	}
}
	
	int main(){
		
		push(10);
		push(20);
        push(30);
	return 0;
	}


