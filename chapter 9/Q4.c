#include<stdio.h>
#include<math.h>
void shift(int ,int, int);
int main()
{


            int a,b,c;
            printf("enter nos");
            scanf("%d %d %d",&a,&b,&c);
            shift(a,b,c);

            return 0;
}
void shift(a,b,c)
{

            printf("%d %d %d",b,c,a);
}
