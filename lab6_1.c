#include<stdio.h>
#include<string.h>
int main()
{
    char word[10][10],word1[10][10];
    int n,k=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%s",word[i,i]);
    }
     for(int j=0;j<n;j++)
    {
        for(int i=n-1;i>=0;i--)
        {
            if(strcmp(word[i,i],word[j,j])<0)
            {
                strcpy(word1[i,i],word[j,j]);
                strcpy(word[j,j],word[i,i]);
                strcpy(word[i,i],word1[i,i]);
                continue;
            }
        }
    }
    printf("%s\n",word[n-1,n-1]);
     for(int i=0;i<n-1;i++)
    {
        printf("%s\n",word[i,i]);
    }

}
    /*for(int i=1;i<=n;i++)
    {

        scanf("%s",word);
        if(word[0]>=90)
        {
            word[0]-=32;
        }
        else if(word[0]<word1[0])
        {
            ans[k]=word[0];
            k++;
        }
        else if(word[0]>word1[0])
        {
            ans[k]=word1[0];
            k++;
        }
        else if(word[0]==word1[0])
        {
            if(word[1]<word1[1])
        {
            ans[k]=word[0];
            k++;
        }
        }
    }
    for(int j=n-1;j>=0;j--)
    {
        for(int i=0;i<n;i++)
        {
            if(ans[j]<ans[i])
            {
                fak=ans[j];
                ans[j]=ans[i];
                ans[i]=fak;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        printf("%c",ans[i]);
    }*/

