#include <stdio.h>

int main (void){
	int number;
	int i=0;
	
	int comp;
	
	char alph[20];

	scanf("%d",&number);

	if(number<0||number>1000){
		printf("number는 1000이하의 자연수\n");
	}

	for(i=0;i<number;i++){
		scanf("%d %s",&comp,alph);
	}
}
