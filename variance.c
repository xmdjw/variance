#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define MAXNUMBER 255
//standard: ./a.out 1 2 3
//error: ./a.out 1,2,3
int main(int argc,char* argv[])
{
	if (argc <= 2){
		printf("object missing\n");
		return 1;
	}
	
	double list[MAXNUMBER];
	int i;
	for (i =1;i < argc;i++)
		list[i] = atof(argv[i]);

	double average = 0;
	double n,sum = 0;
	for (i =1;i < argc;i++){
		n = list[i];
		sum += n;
	}

	double all = (double)(argc-1);
	average = sum / all;
	printf("average is %.2f\n",average);	

	double variance = 0;
	n = 0,sum = 0;
	for (i =1;i < argc;i++){
		n = list[i];
		sum += (n - average)*(n - average);
	}
	variance = sum / all;
	printf("variance is %.2f\n",variance);

	return 0;
	
}
	
	
	
