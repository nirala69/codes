#include<stdio.h>
int main()
{
            int n,f;
            scanf("%d",&n);
            f=factorial(n);

            printf("%d",n);

}
factorial(int f)
{
            int n,i;
            for(i=1;i<f;i++)
                        f=f*i;

            return f;
}
