#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct card {
	char *face;
	char *suit;
};

struct employee {
	char *firstname;
	char *lastname;
	int age;
	char gender;
	double salary;
	struct employee *boss;
};

struct employee2 {
	char firstname[30];
	char lastname[30];
	int age;
	char gender;
	double salary;
};

void printEmployee(struct employee aEmp);
void printEmployee2(struct employee *aEmp);
void printName(char *fName, char *lName);

int main(int argc, char *argv[]) {
	//  09 - Intro to Structures (Part 1)

	struct card aCard;
	// struct card aCard = {"King", "spades"}; ---> could be in this way too...
	aCard.face = "King";
	aCard.suit = "spades";

	// printf("The member are: %s - %s \n", aCard.face, aCard.suit);

	struct employee aEmp;

	aEmp.firstname = "Priyanshu";
	aEmp.lastname = "Gupta";
	aEmp.age = 19;
	aEmp.gender = 'M';
	aEmp.salary = 2000;

	struct employee2 aEmp2;
	// aEmp2.firstname = "Josh"; this wont work cuz firstname is a pointer which stores mem addr

	// printf("The value of array : %p\n", aEmp2.firstname);

	strcpy(aEmp2.firstname, "Josh");
	strcpy(aEmp2.lastname, "Gupta");

	struct employee *ePtr = &aEmp;
	//ePtr = &aEmp;

	//ePtr->firstname = "Updated";

	//printf("First Name: \t%s\n", ePtr->firstname);

	//printEmployee(aEmp);
	//printf("Main func First Name: \t%s\n", aEmp.firstname);
	//printEmployee2(&aEmp);
	//printf("First Name: \t%s\n", aEmp.firstname);
	//printEmployee2(ePtr);

	printName(ePtr->firstname, ePtr->lastname);

	return 0;
}

void printEmployee(struct employee aEmp) {
	printf("First Name: \t%s\n", aEmp.firstname);
	printf("Last Name: \t%s\n", aEmp.lastname);

	aEmp.firstname = "updated!";
	printf("First Name: \t%s\n", aEmp.firstname);
}

void printEmployee2(struct employee *aEmp) {
	printf("First Name: \t%s\n", aEmp->firstname);
	printf("Last Name: \t%s\n", aEmp->lastname);
	aEmp->firstname = "In function";
}

void printName(char *fName, char *lName) {
	printf("First Name: \t%s\n", fName);
	printf("Last Name: \t%s\n", lName);
}
