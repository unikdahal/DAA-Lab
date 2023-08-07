#include<stdio.h>
#include<stdlib.h>

int gcdCalc(int a,int b){
	if(b==0){
		return a;
	}else{
		return gcdCalc(b,a%b);
	}
}

int main(int argc,char* argv[]){
	if(argc!=4){
		printf("Please enter the input and output filename through the command line");
		return 1;
	}
	
	FILE *inNum= fopen(argv[2],"r");
	FILE *outNum = fopen(argv[3],"w");
	if(inNum==NULL){
		printf("Error opening the file");
	}
	if(outNum==NULL){
		printf("Error opening the file");
	}
	int num1,num2;
	while(fscanf(inNum,"%d %d",&num1,&num2)!=EOF){
		int result = gcdCalc(num1,num2);
		fprintf(outNum,"The GCD of %d & %d is %d",num1,num2,result);
		printf("The GCD of %d & %d is %d\n",num1,num2,result);
	}
	
	fclose(inNum);
	fclose(outNum);
	
	return 0;
		
}

