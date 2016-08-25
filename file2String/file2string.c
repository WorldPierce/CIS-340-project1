/* file2string.c */
// Name: Joe Ayoub, William Pierce, Dhruv Patel 
// CSU ID: 2640829, 2643343, 2652790 
// CIS 340: Project #1B
// Description: Converts input file into indivdual strings

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void custout(const char**, const char*);

int main(int argc, char** argv){
 	if(argc < 2){
 		printf("No input file\n");
 		return 1;
 	}
 	//declaring values needed
 	int i,len,len2 = 0;
 	char *farray;
 	long length=0;
 	
 	//open file for reading only
 	FILE* fr = fopen(argv[1], "rb");
 	//populating farray with file
 	if (fr){
 		fseek(fr,0,SEEK_END);
 		length = ftell(fr);
 		fseek(fr,0,SEEK_SET);
 		farray = malloc(length+1);
 		if(farray){
 			fread(farray,1,length,fr);
 			if(farray[length-1] != '\0'){
 				farray[length] = '\0';
 			}
 		}
 		fclose(fr);

 	}
 	if(farray){
 	len = strlen(farray)-1;

 	//TEST PRINT
    printf("Original input\n%s\n", farray);

    //changing spaces to '\0' in farray
	int arySize=1;
    for(i=0;farray[i] != '\0'; i++){
    	if(isspace(farray[i])){
    		farray[i] = '\0';    
		arySize++;		
    	}
    }
    //storing strings is sarray individually
    const char** sarray = (const char**)malloc(sizeof(char*)*arySize);
    sarray[0] = farray;
    for(i=0;i<len;i++){
    	if(farray[i] == '\0'){
    		sarray[++len2] = &farray[i+1];
    	}
    }
    //making last character null
    sarray[++len2]=NULL;


    //calling custout with flag
    custout(sarray, argv[2]);
   
    free(farray);
}
    return 0;
}
