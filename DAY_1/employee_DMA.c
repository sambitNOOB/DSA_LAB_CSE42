#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct employee_data
{
    /* data */
    char *name;
    char gender;
    char *designation;
    char *department;
    int basic_pay;
    int gross_pay;
};
int main()
{
    int n=0;
    printf("Enter the number of employees:");
    scanf("%d",&n);
    struct employee_data *employees = (struct employee_data *)malloc(n * sizeof(struct employee_data));
    for(int i=0;i<n;i++)
    {   char temp[50];
        printf("Enter the name of employee %d:",i+1);
        scanf("%s",&temp);
        employees[i].name=(char *)malloc(strlen(temp)+1);
        strcpy(employees[i].name,temp);
        printf("Enter the gender of employee %d:",i+1);
        scanf(" %c", &employees[i].gender);
        printf("Enter the designation of employee %d:",i+1);
        scanf("%s",&temp);
        employees[i].designation=(char *)malloc(strlen(temp)+1);
        strcpy(employees[i].designation,temp);
        printf("Enter the department of employee %d:",i+1);
        scanf("%s",&temp);
        employees[i].department=(char *)malloc(strlen(temp)+1);
        strcpy(employees[i].department,temp);
        printf("Enter the basic pay of employee %d:",i+1);
        scanf("%d",&employees[i].basic_pay);
        int HR=(employees[i].basic_pay)*.25;
        int DA=(employees[i].basic_pay)*.50;
        employees[i].gross_pay=employees[i].basic_pay+HR+DA;


    }
    
    printf("\n========== Employee Records ==========\n");
    for (int i = 0; i < n; i++) {
        printf("\nEmployee %d:\n", i + 1);
        printf("Name       : %s\n", employees[i].name);
        printf("Gender     : %c\n", employees[i].gender);
        printf("Designation: %s\n", employees[i].designation);
        printf("Department : %s\n", employees[i].department);
        printf("Basic Pay  : %d\n", employees[i].basic_pay);
        printf("Gross Pay  : %d\n", employees[i].gross_pay);
    }
    for (int i = 0; i < n; i++)
    {
        free(employees[i].name);
        free(employees[i].designation);
        free(employees[i].department);
    }
    free(employees);

}
