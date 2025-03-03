#include<stdio.h>
int main()
{
    float phyMarks[4],chemMarks[4],mathMarks[4];
    float phySum=0,chemSum=0,mathSum=0;
    float phyAvg=0,chemAvg=0,mathAvg=0;

    //Getting user input for physics
    printf("Enter marks for physics(assignment, Course work, mid term and end of term) exams respectively:\n");

    for(int i=0;i<=3;i++)
    {
        scanf("\n%f",&phyMarks[i]);
    
        phySum+=phyMarks[i];//calculating the sum of physics

    }
    printf("Sum of Physics marks:%.2f",phySum);
    phyAvg=phySum/4;//calculating the average of physics
    printf("\nThe average of Physics:%.2f",phyAvg);
    printf("\n");
    printf("---------------------------------------");
    printf("\n");
   //Getting user input for chemistry
    printf("\nEnter marks for chemistry(assignment, Course work, mid term and end of term) exams respectively:\n");

    for(int i=0;i<=3;i++)
    {
        scanf("%f",&chemMarks[i]);
        
        chemSum+=chemMarks[i];//calculating the sum of chemistry

    }
    printf("Sum of Chemistry marks:%.2f",chemSum);
    chemAvg=chemSum/4;//calculating the average of chemistry
    printf("\nThe average of chemistry:%.2f",chemAvg);
    printf("\n");
    printf("---------------------------------------");
    printf("\n");
    //Getting user input for Math
    printf("\nEnter marks for Math(assignment, Course work, mid term and end of term) exams respectively:\n");

    for(int i=0;i<=3;i++)
    {
        scanf("%f",&mathMarks[i]);
       
        mathSum+=mathMarks[i];//calculating the sum of math

    }
    printf("Sum of math marks:%.2f",mathSum);
    mathAvg=mathSum/4;//calculating the average of math
    printf("\nThe average of math:%.2f",mathAvg);

}