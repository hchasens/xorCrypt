#include <stdio.h>
#include <string.h>

FILE * keyGen(FILE *data); // if only one file is passed, it generates a random key of length `file` named "`file`.xorKey"
FILE * crypt(FILE *key, FILE *data); // if two files are passsed decrypt/encrypt the second file by xoring it with the first.
void help(); // triggered if sytax isn't right.



/**
	xorCrypt takes two files as an input. The first file is the key, the second is the data file. The key and the datafile are the same size. A key is generated for a datafile if no key is given (one argument is passed).
**/




int main(int argc, char *argv[]){
	FILE *first; 		// first argument passed
	FILE *second;		// second file passed
	FILE *output;

	// open first file passed
	first = fopen(argv[2], "r");	
	// open second file passed
	second = fopen(argv[3], "r");	
	if(argc <= 1 || argc > 3) help(); 		//if there's 1 argument or less run help (if no arguments are passed) or if there are 4 or more argumetns (more then two files passed) run help


	if(argc == 2){
		
		// open/create file output
		output = fopen(strcat(argv[2], ".key"), "w");
		//fwrite(keyGen(first), ; 		//if there are 2 arguments or less generate a key for the given data file (if one argument is passed)
	}

	if(argc == 3){
		// open/create file output
		output = fopen(strcat(argv[3], ".out"), "w");
		output = crypt(first, second); 	//if there are 3 arguemtns (two files passed) xore the second with the first
	}	


	return 0;
}

void help(){ //prints help
	printf("help text"); // @TODO
}

FILE * keyGen(FILE *data){ //prints help
	printf("Key gen"); // @TODO
	return data;
}

FILE * crypt(FILE *key, FILE *data){ //prints help
	printf("crypt"); // @TODO
	return key;
}
