void insertion(int size){
	int *p;
	p= getRandom(size);
	int i;
	
	for (i = 1; i < size; ++i) // iterating the PIndex 
		{
			 int value = *(p+i);
			 int hole=i;
			 while(hole>0 && *(p+(hole-1))>value){ // swaping current elements to PIndex untill it reach to appropriate place 
			 	*(p+hole) = *(p+(hole-1));
			 	hole--;
			 }
			 *(p+hole)= value;
			 //just for printing stars
			 if(flag==1){
			 	printf("------------------------------\n");
			 	printStarArray(p,size);
			 }
		}	

	printArray(p,size);
	free(p); 
}