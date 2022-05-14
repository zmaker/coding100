/*
 ============================================================================
 Name        : C254-file_bin_struct.c
 Author      : Paolo
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

struct gps {
 int lat, lon, alt;
};

int main(void) {
	FILE *f;

	struct gps pos1;
	struct gps pos2;
	struct gps pos3;

	pos1.lat = 12;
	pos1.lon = 13;
	pos1.alt = 14;

	pos2.lat = 212;
	pos2.lon = 213;
	pos2.alt = 214;

	pos3.lat = 32;
	pos3.lon = 33;
	pos3.alt = 314;

	if ((f = fopen("./strutture.bin", "wb")) == NULL) {
		printf("errore creazione file\n");
		exit(1);
	}

	fwrite(&pos1, sizeof(struct gps), 1, f);
	fwrite(&pos2, sizeof(struct gps), 1, f);
	fwrite(&pos3, sizeof(struct gps), 1, f);

	fclose(f);

	//lettura da file binario
	if ((f = fopen("./strutture.bin", "rb")) == NULL) {
		printf("errore apertura file\n");
		exit(1);
	}

	struct gps locs[3];
	fread(locs, sizeof(struct gps), 3, f);

	for (int i = 0; i < 3; i++) {
		printf("letto: %d %d %d\n", locs[i].lat, locs[i].lon, locs[i].alt);
	}

	fclose(f);

	//fseek di strutture
	//lettura da file binario
	if ((f = fopen("./strutture.bin", "rb")) == NULL) {
		printf("errore apertura file\n");
		exit(1);
	}

	fseek(f, sizeof(struct gps)*2, SEEK_SET);

	struct gps res;
	fread(&res, sizeof(struct gps), 1, f);

	printf("\nseek: %d %d %d\n", res.lat, res.lon, res.alt);

	fclose(f);


	return 0;
}
