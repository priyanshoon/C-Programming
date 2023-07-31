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

	return 0;
}
