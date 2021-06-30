#include <stdio.h>

int keyGen(FILE *data); // if only one file is passed, it generates a random key of length `file` named "`file`.xorKey"
int crypt(FILE *key, FILE *data); // if two files are passsed decrypt/encrypt the second file by xoring it with the first.
void help(); // triggered if sytax isn't right.



/**
	xorCrypt takes two files as an input. The first file is the key, the second is the data file. The key and the datafile are the same size. A key is generated for a datafile if no key is given (one argument is passed).
**/




int main(int argc, char *argv[]){
	FILE *data;
	FILE *key;

	if(argc <= 1) help(); 	//if there's 1 argument or less run help (if no arguments are passed)
	if(argc == 2)  keyGen(data); //if there are 2 arguments or less generate a key for the given data file (if one argument is passed)
	if(argc == 3)  crypt(key, data); 	//if there are 3 arguemtns (two files passed) xore the second with the first
	if(argc > 3) help();	//if there are 4 or more argumetns (more then two files passed) run help

	return 0;
}

void help(){ //prints help
	printf("help text"); // @TODO
}

int keyGen(FILE *data){ //prints help
	printf("Key gen"); // @TODO
	return 0;
}

int crypt(FILE *key, FILE *data){ //prints help
	printf("crypt"); // @TODO
	return 0;
}
