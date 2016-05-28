int partationIndex(int *p, int start,int end){
	
	int pivotIndex =start+ rand()%(end - start + 1); // generate Random Index between start and end
	int pIndex = start-1; 
	int pivot = p[pivotIndex]; //value of pivot at pivotIndex
	swap(&p[pivotIndex], &p[end]);  //swap pivot to end
	
	int i;
	for ( i = start; i < end ; ++i) 
	{
		if(p[i]<pivot){ // if value is less than pivot value than swap 
			pIndex++;
			swap(&p[i],&p[pIndex]);
			
		}
	}
	swap(&p[pIndex+1],&p[end]);
	return pIndex+1;
}

void quickSort(int * p ,int start, int end){
	if(start<end){
		
		int pIndex = partationIndex(p,start,end); // getting an Index
		if(flag==1){
		printf("----Selected Index %d--\n",*(p+pIndex));
		}
		if(flag==1){
		printf("----------------------\n");
		printStarArray(p,end+1);
		}
		
		quickSort(p,start,pIndex-1); // recursion call to qucik sort function for start to Index-1 element
		if(flag==1){
		printf("----------------------\n");
		printStarArray(p,end+1);
		}
		
		quickSort(p,pIndex+1,end);  // recursion call to qucik sort function for Index+1 to end element
		
		
	}
}


void quick(int size){
	int *p;
	p= getRandom(size); // getting the random generated array 
	quickSort(p,0,size-1); // calling quicksort 
	printArray(p,size); // printing an array
	free(p);

}