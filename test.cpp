#include <stdio.h>
#define  MAX_STACK_SIZE  100
#define	 TRUE			 1
#define  FALSE			 0

typedef struct int_stack_type {
	int		item[MAX_STACK_SIZE];
	int		top;
} Stack;

void initStack(Stack *s){
	s->top = -1;
}

int pushStack(Stack *s, int x){
	if (s->top >= MAX_STACK_SIZE -1)
		return FALSE;
	else {
		s->top++;
		s->item[s->top] = x;
		return TRUE;
	}
}

int popStack(Stack *s, int *x) {
	if (s->top <0)
		return FALSE;
	else {
		*x = s->item[s->top];
		s->top--;
		return TRUE;
	}
}

void printStack(Stack s){
	int i;
	
	printf("Stack:");
	for (i=0; i<=s.top; i++)
		printf("%d", s.item[i]);
	printf("\n");
}

int main(){
	Stack s;
	int choice;
	int cont = TRUE;
	int x;
	
	initStack(&s);
	while (cont == TRUE){
		printf("Please select [1:push 2:pop  3:print  0:exit]?");
		scanf("%d", &choice);
		switch(choice){
		case 1:
			printf("Please enter a number to be pushed: ");
			scanf("%d", &x);
			if (!pushStack(&s,x))
				printf(" Error pushing into the stack\n");
			break;
		case 2:
			if (popStack(&s,&x))
				printf("The number %d is poped off\n",x);
			else
				printf(" Error popping from the stack\n");
			break;
		case 3:
			printStack(s);
			break;
		case 0:
			cont = FALSE;
			break;
		}
	}
}