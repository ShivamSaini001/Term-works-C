#include <stdio.h>

int main() {
    int n;
    printf("Enter number of subjects: ");
    scanf("%d", &n);
    int marks[n];
    float total = 0, percentage;
    float semesterFee = 125000.0;
    float scholarship = 0.0;
    float netPayable;
    
    // Input marks for n subjects
    printf("Enter marks for %d subjects (out of 100):\n", n);
    for (int i = 0; i < n; i++) {
        printf("Subject %d: ", i+1);
        scanf("%d", &marks[i]);
        
        if(marks[i] < 0 || marks[i] > 100) {
            printf("Invalid marks entered. Please enter marks between 0 and 100.\n");
            i--;  
        }
    }
    
    // Calculate total marks
    for (int i = 0; i < n; i++) {
        total += marks[i];
    }
    
    // Calculate percentage
    percentage = (total / (n*100)) * 100;
    
    // Determine scholarship percentage
    if (percentage < 50)
        scholarship = 0;
    else if (percentage <= 60)
        scholarship = 5;
    else if (percentage <= 74)
        scholarship = 20;
    else if (percentage <= 84)
        scholarship = 30;
    else
        scholarship = 50;
        
    // Calculate net payable amount
    netPayable = semesterFee - (semesterFee * scholarship / 100);
    
    // Display percentage and scholarship
    printf("\nTotal Percentage: %.2f%%\n", percentage);
    printf("Scholarship awarded: %.0f%%\n", scholarship);
    printf("Net amount payable: Rs. %.2f\n", netPayable);
    
    // Display grade for each subject
    printf("\nGrades for each subject:\n");
    for (int i = 0; i < n; i++) {
        printf("Subject %d: Marks = %d, Grade = ", i+1, marks[i]);
        if (marks[i] >= 90)
            printf("A+\n");
        else if (marks[i] >= 80)
            printf("A\n");
        else if (marks[i] >= 70)
            printf("B\n");
        else if (marks[i] >= 60)
            printf("C\n");
        else if (marks[i] >= 50)
            printf("D\n");
        else
            printf("F\n");
    }
    
    return 0;
}
