
void mergeList(int *A,int *L,int leftCount,int *R,int rightCount) {
	int i,j,k;

	// i - index of left aubarray (L)
	// j - index of right sub-raay (R)
	// k - index of merged subarray (A)
	i = 0; j = 0; k =0;

	while(i<leftCount && j< rightCount) { // placing the low element into the main array from left and right array into main
		if(L[i]  < R[j]) A[k++] = L[i++];
		else A[k++] = R[j++];
	}
	while(i < leftCount) A[k++] = L[i++]; 
	while(j < rightCount) A[k++] = R[j++];
}

void mergeSort(int * p , int size){
	if(flag==1){
		printf("-----------Dividing-----------\n");
		printStarArray(p,size);
	}
	int *left ,* right,i,mid;
	if(size<2) return; //if the value of element is 1 than return to join
	mid = size/2;
	left = (int*)malloc(mid*sizeof(int)); 
	right = (int*)malloc((size- mid)*sizeof(int)); 
	for ( i = 0; i < mid; ++i) 
	{
		left[i]= p[i];
		
	}
	for ( i = mid; i < size; ++i)
	{
		right[i-mid]=p[i];
	}

	
	mergeSort(left,mid); // recursion calling to merge sort with left to mid element
	
	mergeSort(right,(size-mid)); // recursion calling to merge sort with right to remaing element after left part
	
	mergeList(p,left,mid,right,(size-mid)); // merging the list 
	if(flag==1){
		printf("-----------Mergering----------\n");
		printStarArray(p,size);
	}
	
	free(left);
	free(right);
}

void merge(int size){
	int *p;
	p= getRandom(size);
	mergeSort(p,size);
	printArray(p,size);
	free(p);

}