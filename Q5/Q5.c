
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int calculate_term(int n)
{
    int ans;
    ans = (n*((2*n) + 1));
    return ans;
}
int main()
{
    int n, ans;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    ans = calculate_term(n);
    printf("Answer is %d\n",ans);
    return 0;
}