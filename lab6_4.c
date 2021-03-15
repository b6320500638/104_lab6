#include<stdio.h>
int main()
{
    int n,max=0,min=0,a,b;
    scanf("%d",&n);
    int x[n],y[n],z[n];
    for(int i=0;i<n;i++)
    {
        printf("\n");
        scanf("%d %d",&x[i],&y[i]);
    }
    for(int j=1;j<=n;j++)
    {
        z[j-1]=0;
        for(int k=0;k<n;k++)
        {
            if(j==x[k])
            {
                z[j-1]++;
            }
            else if(j==y[k])
            {
                z[j-1]++;
            }
        }
    }
        min=z[0];
     for(int k=0;k<n;k++)
        {
            if(z[k]>max)
            {
                max=z[k];a=k+1;
            }
            if(z[k]<min)
            {
                min=z[k];b=k+1;
            }
        }
for(int k=0;k<n;k++)
        {
            printf("\n");
        }
printf("%d %d",a,b);
}

