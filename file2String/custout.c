//custout.c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int iterate;

int lengthOfArray(const char** ary){
	int it = 0;
		while(ary[it] != NULL){
		it++;
			
		}
		return it;
}

void swap(const char** ary1,const char** ary2){
	const char* temp = *ary1;
	*ary1 = *ary2;
	*ary2 = temp;
}
//sorting method for sarray
const char** sortAscending(const char* array[]){
	int i,j;
	const char** sorted = array;
	int len = lengthOfArray(array);
	for(i=0; i < len-1;i++){
		for(j=i+1;j < len; j++){
			if(strcmp(sorted[i],sorted[j]) > 0){
				swap(&sorted[i],&sorted[j]);
			}
		}
	}
	return sorted;
}
//custout method to be called with command line input
void custout(const char* sa[], const char* fl){
	printf("Custom output\n");
	int len = lengthOfArray(sa),i;
	//if there is no directive
	if(fl == NULL){
		iterate = 0;
		while(sa[iterate] != NULL){
			printf("%s\n",sa[iterate++]);			
		}
	}
	//print in ascending order
	else if(strcmp(fl,"-f") == 0 || strcmp(fl,"-F") == 0){
		const char** sa2 = sortAscending(sa);
		iterate = 0;
		for(i=0; i < len;i++){
		printf("%s\n",sa2[i]);			
		}		
	}
	//print in descending order
	else if(strcmp(fl,"-b") == 0 || strcmp(fl,"-B") == 0){
		const char** sa2 = sortAscending(sa);
		iterate = 0;
		for(i=len-1;i >= 0 ;i--){
		printf("%s\n",sa2[i]);			
		}
	}
	else {
		printf("Command line argument is not recognized\n");
	}
}
