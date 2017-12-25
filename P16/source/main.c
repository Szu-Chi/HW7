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
		printf("請輸入字串，按ENTER鍵結束輸入:\n");
		while ((ch = _getche()) != ENTER && i < MAX)
			str[i++] = ch;
		putc('\n', fptr);
		fwrite(str,sizeof(char),i,fptr);
		fclose(fptr);
		printf("\n檔案附加完成!!\n");
	}else {
		printf("Open File ERROR!!");
	}
	system("pause");
	return 0;
}