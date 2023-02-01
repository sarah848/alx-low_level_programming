#include <stdio.h>
#include "dog.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 **/

	struct dog{
		char* name;
		float age;
		char* owner;
	
	};

	int main(void){

		struct dog dog;

		dog.name = "Poppy";
		dog.age = "2.1";
		dog.owner = "Fiona";

	return (0);
}
