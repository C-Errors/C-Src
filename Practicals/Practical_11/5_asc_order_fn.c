# include <stdio.h>
void asce(int n)
{
   int i=0,j=0,k;
   int m[5];
   
   for (i=0;i<n;i++)

    {
        printf("\nEnter a number :");
        scanf("%d",&m[i]);
    }
     
   for (i=0;i<n;i++)

    {
      for (j=i+1;j<n;j++)
        {
    
        if (m[i]>m[j])
        {
            k=m[i];
            m[i]=m[j];
            m[j]=k;
        }
        }
    }
     for (i=0;i<n;i++)

    {
       printf("%d\n",m[i]);
    }
   
    printf("\nEND OF PROGRAM");
}
void main()
{
    int n;
    printf("\nEnter number of elements in an array :");
    scanf("%d",&n);
    asce(n);
}