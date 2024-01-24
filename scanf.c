#include <stdio.h>

int main()

{
	int age;
	float gpa;
	char grade;

	printf("What is your age? ");
	scanf("%i", &age);

	printf("What is your GPA? ");
	scanf("%f", &gpa);

	printf("What is your letter grade? ");
	scanf(" %c", &grade);

	printf("Your age is %i\n", age);
	printf("Your GPA is %f\n", gpa);
	printf("Your grade is %c\n", grade);

	return 0;
}
