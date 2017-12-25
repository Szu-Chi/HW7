#include <stdio.h>
#include <stdlib.h>

int main(void) {
	FILE *fptr1, *fptr2;
	char ch;
	errno_t err1, err2;
	err1 = fopen_s(&fptr1, "welcome.txt", "r");
	err2 = fopen_s(&fptr2, "output.txt", "w");
	if (!err1 && !err2) {
		while ((ch = getc(fptr1)) != EOF) {
			putc(ch,fptr2);
		}
		fclose(fptr1);
		fclose(fptr2);
		printf("檔案拷貝完成!!\n");
	}else {
		printf("檔案開啟失敗!!\n");
	}
		
	system("pause");
	return 0;
}