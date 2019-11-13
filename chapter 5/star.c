#include<stdio.h>
int main()
{
            int t=0 ,s;
            for( int i=5;i>=1;i--)
            {
                        for(int j=1;j<=i;j++)
                        {
                                    printf("%d",j);
                        }
                        for(int k=i-1;k>=1;k--)
                        {
                                    printf("%d",k);

                        }





                        printf("\n");
                        for(int s=0;s<6-i;s++)
                                    printf(" ");

            }

}
