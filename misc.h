int  MAX=RAND_MAX;
int  MIN=0;
int flag=0;

void swap(int *a, int *b){ // swap elements of pointer
	int temp = *b;
	*b=*a;
	*a=temp;
}

int * getRandom(int arraySize) { // creating random value array 
	int i;
	static int* gArr;
	gArr = malloc(arraySize * sizeof(int)); // space allocating for given size array

   /* set the seed */
   srand( (unsigned)time( NULL ) );
  
   printf("========Unsorted Array=======\n");
   for ( i = 0; i < arraySize; ++i) {
      *(gArr + i)= rand()%(MAX-MIN+1)+MIN; //generate random number with including Max and Min Value
      printf( "%d\n",*(gArr + i));
   }
   printf("\n");
   return gArr; // returning the array 
}

void printArray(int * a, int size){ // printing  the sorted array
	int i;
	printf("========Sorted Array=========\n");
	for ( i = 0; i < size; i++ ) {
      printf( "%d\n",*(a + i));
   }
   printf("\n");
}

void printStarArray(int *a, int size){ // printing stars at each iteration
	int i,j;
	//printf("------------------------------\n");
	for ( i = 0; i < size; i++ ) {
		printf("%d-",*(a+i));
      for (j = 0; j < *(a+i); ++j){
      	printf("*");
      }
      printf("\n");
   }
}