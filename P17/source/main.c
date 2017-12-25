#include <stdio.h>
#include <stdlib.h>
#define MAX 80

int main(void) {
	FILE *fptr;
	char str[MAX];
	int bytes;
	errno_t err = fopen_s(&fptr,"output.txt","r");
	if (!err) {
		while (!feof(fptr)) {
			bytes = fread(str, sizeof(char), MAX - 1, fptr);
			str[bytes] = '\0';
			printf("%s\n", str);
		}
		fclose(fptr);
	}else {
		printf("Open File EORROR!!\n");
	}
	system("pause");
	return 0;
}