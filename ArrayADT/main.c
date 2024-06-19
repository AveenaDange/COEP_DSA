#include "array.h"
#include<stdio.h>


int main()
{
	array a,b;
	init(&a,10);
	init(&b,10);
	append(&a, 1);
    	append(&a, 2);
    	append(&a, 3);
    	append(&a, 4);
    	append(&b, 5);
    	append(&b, 6);
	printf("\n Array A:\n");
	display(a);
	
	printf("\n Array B:\n");
	display(b);
	
	printf("\n Enter position to be inserted for Array a->:");
	insert(&a,2,123);
	display(a);
	
	
	printf("\n Enter the element position to be removed for Array a->:");
	rem(&a,2);
	display(a);
	
	printf("\nMaximum element from array a ->%d \n",max(a));
	printf("\n The revered array b is: ");
	reverse(&b);
	display(b);
	printf("\n");
	
	display(merge(a,b));

	return 0;
}

