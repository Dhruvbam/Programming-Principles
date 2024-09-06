#ifndef CUSTOM_C
#define CUSTOM_C

//prototype for needsRestocking

int needsRestocking(int);

#endif


int needsRestocking(int quantity){
	if(quantity == 0){                       //checks the value of quantity and returns 1 if it is zero
		return 1;
	}
	return 0;
}

