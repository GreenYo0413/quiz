#include<stdio.h>
#include<string.h>
#define MAX_SIZE 1000
char smallest_character(char str[], char c);

int main(int argc, char *argv[]){
	char array[MAX_SIZE];
	if(argc==3){
		strcpy(array,argv[1]);
		printf("%c\n",smallest_character(array,argv[2][0]));
	}
	else
		printf("error\n");

	return 0;
}

char smallest_character(char str[], char c){
	int count;
	for(count=0;str[count]!=0;count++){
		if(str[count]>=c)
			return str[count];

	}
	return str[0];
}
