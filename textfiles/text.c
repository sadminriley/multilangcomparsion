#include <stdio.h>
#include <stdlib.h>
/**  Opens a text file, prints each line, and closes the file after reading.  sadminriley | riley@fasterdevops.com  */

int main (int argc, char *argv[]) {

	FILE *ptr_file;
	char buf[200];

	if (argc <=1){
		printf("\n No argument provided. \n Please provide a valid text file");  /** User inputted argument of text file to print lines */
		exit(1);
	}

	int i;
	for (i=1; i<argc; i++) {
		ptr_file = fopen( argv[i], "r");                                      /** Opening the text file */


		if (ptr_file == NULL) {
			printf("Error. Text file %s not opened", ptr_file);
				return 1;
		}


		while (fgets(buf, 200, (FILE*) ptr_file)) {
			printf("\n %s", buf);                                            /** Print each line */
		}

		fclose(ptr_file);
	}

	return 0;
}


