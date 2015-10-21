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
	if(str[0]==0)
		return str[0];
	if(str[0]>=c)
		return str[0];
	char returnChar=smallest_character(str+1,c);

	if(returnChar>=c)
		return returnChar;
	else
		return str[0];

}
