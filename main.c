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
    printf("Total is %f and average is %f \n",total,average);
    return 0;
}
