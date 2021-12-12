#include <stdio.h>

void main()
{
    printf("\n\n");
    
    int A[2][3],B[2][3],i,j;

    // For A[2][3] //
    printf("Enter the elements for A[2][3] array \n");
    for(i=0;i<=1;i++) // OUTER LOOPS IS FOR ROWS
    {
        for(j=0;j<=2;j++)  // INNER LOOPS IS FOR COLUMNS
        {
            printf("Enter the element A[%d][%d] : ",i,j);
            scanf("%d",&A[i][j]); //A[0][0]  A[0][1] A[0][2]
        }
    }

    // For B[2][3] //
    printf("\nEnter the elements for B[2][3] array \n");
    for(i=0;i<=1;i++) // OUTER LOOPS IS FOR ROWS
    {
        for(j=0;j<=2;j++)  // INNER LOOPS IS FOR COLUMNS
        {
            printf("Enter the element B[%d][%d] : ",i,j);
            scanf("%d",&B[i][j]); //B[0][0]  B[0][1] B[0][2]
        }
    }
    // For A[2][3] //

    printf("\n");

    printf("A[2][3]:- \n");
    for(i=0;i<=1;i++)  // OUTER LOOPS IS FOR ROWS
    {
        for(j=0;j<=2;j++)  // INNER LOOPS IS FOR COLUMNS
        {
            printf("%d\t", A[i][j]);  // A[0][0]  A[0][1] A[0][
        }
        printf("\n");
    }

    printf("\n");

    // For B[2][3] //
    printf("B[2][3]:- \n");
    for(i=0;i<=1;i++)  // OUTER LOOPS IS FOR ROWS
    {
        for(j=0;j<=2;j++)  // INNER LOOPS IS FOR COLUMNS
        {
            printf("%d\t", B[i][j]);  // B[0][0]  B[0][1] B[0][2]
        }
        printf("\n");
    }

    printf("\n");

    // For Addition of A[2][3] and B[2][3] //
    printf("Addition of A and B array :- \n");
    for(i=0;i<=1;i++)
    {
        for(j=0;j<=2;j++)
        {
           printf("%d\t", A[i][j]+B[i][j]) ;
        }
        printf("\n");
    }

    printf("\n");

    // For Subtraction of A[2][3] and B[2][3] //
    printf("Subtraction of A and B array :- \n");
    for(i=0;i<=1;i++)
    {
        for(j=0;j<=2;j++)
        {
           printf("%d\t", A[i][j]-B[i][j]) ;
        }
        printf("\n");
    }

    printf("\n");

    // For Transpose of A[2][3] and B[2][3] //
    printf("Transpose of A and B array :- \n");
    for(j=0;j<=2;j++)
    {
        for(i=0;i<=1;i++)
        {
           printf("%d\t", A[i][j],B[i][j]) ;
        }
        printf("\n");
    }

}
