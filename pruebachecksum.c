#include <stdio.h>
#include <string.h>


int gen_checksum(const char * command, int size ){
	
	int i=0,checksum=0;
	char hex[255]={0};
	
	checksum=command[0];
		
	for(i=1;i<size;i++){	
		checksum=checksum^command[i];
	}
	
	return checksum;
}



void main(){
	
	int variable=0,i=0;
	char hex[255]={0};
	char buffer[255]="PQBAUD,W,115200";
	variable=gen_checksum(buffer,strlen(buffer));
	printf("%X \n",variable);
	
}


