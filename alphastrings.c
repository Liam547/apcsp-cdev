#include <stdio.h>
#include <string.h>

int main() {
	char strOne[] = "abcdefghijklmnopqrstuvwxyz";
	for (int i = 0; strOne[i] != '\0'; i++) {
	  if(strOne[i] >= 'a' && strOne[i] <= 'z') {
		strOne[i] = strOne[i] - 32;
}
}
	printf("%s", strOne);
	printf("\n");
char stringTwo[] = "abcdefghijklmnopqrstuvwxyz";
	printf("%s\n", stringTwo);

char strThree[100];

strcpy(strThree, strOne);
strcat(strThree, stringTwo);
printf("Both strings combined: %s\n", strThree);

}
