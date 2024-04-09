#include "function.h"

/*Function to input to array*/

void inputEmployees(struct Employee *employeesArray, int n)
{
	printf("Enter details of %d employees:\n", n);
	for (int i = 0; i < arraysize; i++)
	{
		printf("Enter details of the employee %d:\n", i + 1);
		printf("Name: ");
		scanf("%s", employeesArray[i].name);
		printf("Position: ");
		scanf("%s", employeesArray[i].position);
		printf("Nickname: ");
		scanf("%s", employeesArray[i]. nickname);
		printf("Gender: ");
		scanf("%s", employeesArray[i]. gender);
	}
}

void printEmployees(struct Employee *employeesArray, int n)
{
	printf("\nemployee Details:\n");
	for (int i = 0; i < n; i++)
	{
		printf("employee %d:\n", i + 1);
		printf("Name: %s\n", employeesArray[i].name);
		printf("Position: %s\n", employeesArray[i].position);
		printf("Nickname: %s\n", employeesArray[i].nickname);
		printf("Gender: %s\n", employeesArray[i].gender);
	}

}