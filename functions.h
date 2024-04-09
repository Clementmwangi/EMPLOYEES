#ifndef FUNCTION_H
#define FUNCTION_H

struct Employee {
	char name[100];
	char position[100];
	char nickname[100];
	char gender[100];
};

void inputEmployees(struct Employee *employeesArray, int arraysize);
void printEmployees(struct Employee *employeesArray, int arraysize);

#endlf
