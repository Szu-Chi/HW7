#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#define ENTER 13
#define MAX 80

int main(void) {
	FILE *fptr;
	char str[MAX], ch;
	int i = 0;
	errno_t err1 = fopen_s(&fptr,"output.txt","a");
	if (!err1) {
		printf("�п�J�r��A��ENTER�䵲����J:\n");
		while ((ch = _getche()) != ENTER && i < MAX)
			str[i++] = ch;
		putc('\n', fptr);
		fwrite(str,sizeof(char),i,fptr);
		fclose(fptr);
		printf("\n�ɮת��[����!!\n");
	}else {
		printf("Open File ERROR!!");
	}
	system("pause");
	return 0;
}