#include<stdio.h>
#include<string.h>
struct Employee{
    char name[50];
    int id;
    float salary;
}Employees;
void generateSalarySlip(struct Employee emp){
    printf("Salary Slip for Employee ID: %d\n", emp.id);
    printf("Name: %s\n", emp.name);
    printf("Salary: %.2f\n", emp.salary);
}
int main(){
    printf("Enter Employee ID: ");  
    scanf("%d", &Employees.id);
    printf("Enter Employee Name: ");
    scanf("%s", Employees.name);
    printf("Enter Employee Salary: ");
    scanf("%f", &Employees.salary);
    generateSalarySlip(Employees);  
    return 0;
}   

