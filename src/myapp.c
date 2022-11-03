#include "myfuncs.h"
#include <stdio.h>

int main()
{

	// call function 3 times...
	for (int i=0; i<3; i++) {
		foo(); 
		goo();
	}

	foo();
	goo();

	// call zoo three times...
	for(int i=0; i<3; i++) {
		zoo();
	}


	return 0;
}
