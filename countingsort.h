
void counting(int size){ 

	int *p;
	p= getRandom(size);
	int a,b,i,j,k=0;
	//printStarArray(p,size);
	
	int max_value=0;
	
	for ( i = 0; i < size; ++i) // finding maximum value from the array to create that size array
	{
		if(*(p+i)>max_value){
			max_value=*(p+i);
		}
	}
	MAX=max_value;

	int tempArray[MAX+1];
	for ( a = 0; a <= MAX; ++a) // initialzing max size array to 0
	{
		tempArray[a]=0;
		
	}
	//printf("-----Storing Elements-----\n");
	int tempMax=0;
	for ( i = 0; i < size; ++i)
	{	

		int value = *(p+i);
		tempArray[value]=tempArray[value]+1; // incrementing the corresponding value which found
		if(value>tempMax){
			tempMax=value;
		}
		if(flag==1){
			int q;
			printf("-----Loop time %d-------\n",i);
			for (q = 0; q <= tempMax; ++q)
				{
					if(tempArray[q]>0){
						printf("%d -> %d\n",q,tempArray[q]);
					}
				}	
		}
	}
	


	//printf("-----Writing Counting Elements------\n");
	int m=0;
	for (i = 0; i <= MAX; ++i)
	{
		
		if(tempArray[i]>0){
			//printf("Value is greater than 0 of %d\n", i);
		for ( j = tempArray[i]; j >0 ; j--) // restoring the original array with occurence of temp array element
		{
			*(p+m)=i;
			m++;

			
		}
		}
		

	}
	printf("=====Final Sorted Array=======\n");
	if(flag==1){
	printStarArray(p,size);
	}else{
	printArray(p,size);
	}
	free(p);
}