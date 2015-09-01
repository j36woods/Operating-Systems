#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int cmpfunc(const void *a, const void *b) {
	const char *a_ = *(const char **)a;
	const char *b_ = *(const char **)b;
	return strcmp(a_, b_);
}

int main(int argc, char *argv[]) {

	if (argc != 4) {
		printf("Wrong number of arguments\n");
		exit(0);
	}

	char* names[3];
	int i = 1;
	for (; i < argc; i++) {
		names[i-1] = argv[i];
	}

	int j = 0;
	for (; j < 3; j++) {
		printf("%i: %s \n", j, names[j]);
	}

	qsort(names, 3, sizeof(char*), cmpfunc);

	j = 0;
	for (; j < 3; j++) {
		printf("%i: %s \n", j, names[j]);
	}

	//printf("Hello World\n");
	return 0;
}