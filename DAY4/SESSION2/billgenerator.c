#include<stdio.h>
#include<string.h>
struct Employee{
    char name[50];
    int id;
    float salary;
};
void generateSalarySlip(struct Employee emp){
    printf("Salary Slip for Employee ID: %d\n", emp.id);
    printf("Name: %s\n", emp.name);
    printf("Salary: %.2f\n", emp.salary);
    