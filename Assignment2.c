#include <stdio.h>
int main()
{
    int N, X; // number of domestic animals and wild anmals respectively

    printf("Enter the number of Domestic animals:\n");
    scanf("%d", &N);              // taking the number of domestic animals.
    char domesticsAnimals[N][50]; // 2d array to store multiple values of domestic animals

    printf("Enter the domestic animals:\n");
    for (int i = 0; i < N; i++)
    {
        scanf("%s", domesticsAnimals[i]); // accepting user input for the domestic animals
    }
    printf("\n");
    printf("Enter the number of wild animals:\n");
    scanf("%d", &X);         // taking the number of wild animals.
    char wildAnimals[X][50]; // 2d array to store multiple values of wild animals
    
    printf("Enter the wild animals:\n");
    for (int j = 0; j < X; j++)
    {
        scanf("%s", wildAnimals[j]); // accepting user input for the wild animals
    }

    printf("\n---Combined domestic and wild animals---\n");

    int maxCount = (N > X) ? N : X; // making sure to always print the maximum of either wild animals or
    // domestic animals so as to avpid leaving out input.
    for (int k = 0; k < maxCount; k++)
    {
        if (k < N)//prints domestic animals if true
        {
            printf("\nDomestic animals:%s", domesticsAnimals[k]);
        }
        else
        {
            printf("\nDomestic animals:(None)");
        }

        if (k < X)//prints wild animals if true
        {
            printf("- -- -wild animals:%s", wildAnimals[k]);
        }
        else
        {
            printf("- -- -wild animals:(None)");
        }
    }

    return 0;
}