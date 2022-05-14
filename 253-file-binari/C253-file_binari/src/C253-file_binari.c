/*
 ============================================================================
 Name        : C253-file_binari.c
 Author      : Paolo
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	FILE *f;

	if ((f = fopen("./dati.bin", "wb")) == NULL) {
		printf("file non creato\n");
		exit(1);
	}
	for (int i = 0; i < 10; i++) {
		printf("write: %d\n", i);
		fwrite(&i, sizeof(i), 1, f);
	}

	fclose(f);

	//lettura del file
	if ((f = fopen("./dati.bin", "rb")) == NULL) {
		printf("file non creato\n");
		exit(1);
	}

	int buf[10];
	fread(buf, sizeof(int), 10, f);

	for (int i = 0; i < 10; i++) {
		printf("read: %d\n", buf[i]);
	}

	fclose(f);

	//seek
	if ((f = fopen("./dati.bin", "rb")) == NULL) {
		printf("file non creato\n");
		exit(1);
	}
	//SEEK_SET	Starts the offset from the beginning of the file.
	//SEEK_END	Starts the offset from the end of the file.
	//SEEK_CUR	Starts the offset from the current location of the cursor in the file.
	fseek(f, sizeof(int)*5, SEEK_SET);

	int res;
	fread(&res, sizeof(int), 1, f);
	printf("\nseek: %d\n", res);

	fclose(f);

	return 0;
}
