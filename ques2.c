#include <stdio.h>
#include <stdlib.h>

int main()
{
int n;
scanf("%d", &n)

int dp[n];

dp[0]=0;
dp[1]=1; 
dp[2]=2;

for (int 1=3;i<=n;i++){ 
    dp[1]=dp[i-2]+dp[i-3];
}

printf("%d\n", dp[n]);

return 0;
}