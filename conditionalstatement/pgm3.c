#include <stdio.h>

int main() {
    int age;
    float monthlyIncome;

    // Taking user input for age and monthly income
    printf("Enter your age: ");
    scanf("%d", &age);
    
    printf("Enter your monthly income: ");
    scanf("%f", &monthlyIncome);

    // Check eligibility based on the age and monthly income
    if (age >= 18) {
        if (age >= 18 && age <= 25) {
            if (monthlyIncome >= 5000) {
                printf("You are eligible for the loan.\n");
            } else {
                printf("Your monthly income is too low for your age group. Minimum income required: 5000.\n");
            }
        } else if (age >= 26 && age <= 40) {
            if (monthlyIncome >= 10000) {
                printf("You are eligible for the loan.\n");
            } else {
                printf("Your monthly income is too low for your age group. Minimum income required: 10000.\n");
            }
        } else if (age > 40) {
            if (monthlyIncome >= 15000) {
                printf("You are eligible for the loan.\n");
            } else {
                printf("Your monthly income is too low for your age group. Minimum income required: 15000.\n");
            }
        }
    } else {
        printf("You are not eligible for the loan because your age is below 18.\n");
    }

    return 0;
}
