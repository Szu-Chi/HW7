#include <stdio.h>
#include <stdlib.h>

int main(void) {
	FILE *in,*out;
	int cnt;
	char str[100];
	errno_t err_in = fopen_s(&in, "welcome.txt", "r");
	errno_t err_out = fopen_s(&out, "output.txt", "w");
	if (!err_in && !err_out) {
		while (!feof(in)) {
			cnt = fscanf_s(in, "%s", str,sizeof(str));
			if (cnt > 0)
				fprintf(out, "%s\n",str);
		}
		fclose(in);
		fclose(out);
	}else {
		printf("Open File Error!!");
	}
	system("pause");
	return 0;
}