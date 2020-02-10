#include <stdio.h>
#include <stdlib.h>
int i; float subject[4], total, average; char grade;
int main()
{
    for(i=0; i<4;i++) {
        printf("Enter marks for subject %d: \t", i+1);
        scanf("%f",&subject[i]);
        total = total+subject[i];
    }
    average = total/i;

    if(average>=70) {
        grade = 'A';
    } else if (average >= 60) {
        grade = 'B';
    } else if (average >= 50) {
        grade = 'C';
    } else if (average >= 40) {
        grade = 'D';
    } else {
        grade = 'F';
    }

    printf("Total is %f Average is %f and grade is %c \n",total,average,grade);
}
