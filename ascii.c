#include <stdio.h>

int main(int argc, char **argv){

int i;

printf("ASCII TABLE\n");
for (i=0;i<256;i++){
	printf("%d %c\n",i,i);
}
printf("\n");

return 0;
}
