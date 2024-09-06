//CS 1412 501 Assignment 10 
//Name: Dhruv Maniar R11713343


#include <stdio.h>
#include <stdlib.h>
#include <custom.h>      //path for custom.h 

//Struct for item
struct item{ int id; double price; int quantity; };

//prototype for readInventory 
void readInventory(struct item *);

int main(void){

	struct item items[10];         	
	int a;
	readInventory(items);

	for(int i=0; i<10; i++){         
		a = items[i].quantity;              //assigning a the value of quantity from the struct
		if(needsRestocking(a)){             //using our needsRestocking function
			printf("Item ID: %d, needs restocking.\n", items[i].id);
		}
	}
	return 0;
}

//the fuction readInventory 
void readInventory(struct item *items){
	
	FILE *fp = fopen("inventory.txt", "r");      //open the file 
	
	while(1){                                    //loop to read each line one by one
		int id;
		double price;
		int quantity;
		int result = fscanf(fp, "%d %d %lf", &id, &quantity, &price);
		if(result == EOF){
			break;
		}

		items->id = id;                          //assigning the values to the struct
		items->price = price;
		items->quantity = quantity;
		items++;
	}
	fclose(fp);                                  //close the file.
}