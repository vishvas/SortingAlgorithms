#include <stdio.h>
#include <stdlib.h>
#include "misc.h"
#include "insertionsort.h"
#include "countingsort.h"
#include "mergesort.h"
#include "quicksort.h"

int main(){ //Menu event driven
	
	int selection,size;
	printf("1.Insertion Sort 2.Counting Sort 3.Merge Sort 4.Randomized Quick Sort 0.Exit\n");
	scanf("%d",&selection);
	
	
	while(selection!=0){
		MAX=RAND_MAX; //set Rand_Max value of rangom generator
		MIN=0;
		flag=0; // if the number of element is less than 16
		if(1<=selection && selection<=4){
		printf("Enter Number of elements between 1 to 1000 (included)\n");
		scanf("%d",&size);
		if(1<=size && size<=20){
			MAX=15;
			MIN=0;
			flag=1;
		}
		if(selection==1 && 1<=size && size<=1000){
			insertion(size);
		}else if(selection==2 && 1<=size && size<=1000){
			if(flag==0){
				MAX=99;
				MIN=0;
			}
			counting(size);

		}else if(selection==3 && 1<=size && size<=1000){
			merge(size);
		}else if(selection==4 && 1<=size && size<=1000){
			quick(size);
		}
		else{
			printf("Size is incorrect\n");
			
		}
	}else{
		printf("Wrong selection value Entered\n");
		
	}
	printf("1.Insertion Sort 2.Counting Sort 3.Merge Sort 4.Randomized Quick Sort 0.Exit\n");
	scanf("%d",&selection);
	}
	
	return 0;
}