#include<stdio.h>
int sum(int ,int,int ,int,int);
int main()
{
            int a[5],i,ans;
            for(i=0;i<5;i++)
            scanf("%d",&a[i]);


            sum(a[0],a[1],a[2],a[3],a[4])

            printf("%d",ans)

}
sum(int a[0],int a[1] ,int a[2], int a[3] ,int a[4])
{        int j,ans=0;
            for(j=0;j<5;j++)
                        ans=ans+a[j];

            return ans;
}
