#include <stdio.h>
#include <function.h>

int main()
{
	int arraysize = 10;

	struct Employee employeesArray[arraysize];

	/*input employees name*/
	inputEmployees(employeesArray, arraysize);

	/*print employee names*/
	printEmployees(employeesArray, arraysize);

	return 0;
}