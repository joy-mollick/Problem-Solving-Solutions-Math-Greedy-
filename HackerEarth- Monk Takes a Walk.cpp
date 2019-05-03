#include<bits/stdc++.h>

using namespace std;

char s[100001];

bool isvowel(char c)
{
    if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
    {
        return true;
    }
    else
    return false;
}

int main()

{
    int n;
    scanf("%d",&n);
    getchar();
    while(n--)
    {
        gets(s);
        int count=0;
        for(int i=0;i<strlen(s);i++)
        {
            char c=tolower(s[i]);
            if(isvowel(c))
            {
                count++;
            }
        }
        printf("%d\n",count);
    }
    return 0;
}
