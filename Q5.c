/**Given a series of numbers  3,10,21,36 …., Find the 100th value of the above series.
Answer)  20100**/
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