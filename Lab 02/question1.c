#include<stdio.h>
#include<stdlib.h>


void decToBin(int dec, FILE* fpOut){
	if(dec>1){
		decToBin(dec/2,fpOut);
	}
	
	fprintf(fpOut,"%d",dec%2);
}

int main(int argc,char* argv[]){

	if(argc!=4){
		printf("Please enter the input and output filename through the command line");
		return 1;
	}
	
	FILE *fpIn= fopen(argv[2],"r");
	FILE *fpOut = fopen(argv[3],"w");
	
	int dec,bin;

	if(fpIn==NULL){
		printf("Error in Opening the Input File");
		return 1;
	}
	
	if(fpOut==NULL){
		printf("Error in Opening the Output File");
		return 1;
	}
	
	while(fscanf(fpIn,"%d",&dec)!=EOF){
		decToBin(dec,fpOut);
		fprintf(fpOut," ");
	}
	fclose(fpOut);
	FILE* disOut=fopen("outDec.dat","r");
	
	if(disOut==NULL){
		printf("Error opening the file");
		return 1;
	}
	printf("The binary equivalents of the input numbers are \n");
	while(fscanf(disOut,"%d",&bin)!=EOF){
		printf("%d \n",bin);
	}
	
	fclose(fpIn);
	fclose(disOut);
	
	return 0;
	


}
