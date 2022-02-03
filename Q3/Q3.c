
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int calculate_other_face(int n)
{
    int ans;
    ans = 7 - n;
    return ans;
}
int main()
{
    int n, ans;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    ans = calculate_other_face(n);
    printf("Answer is %d\n",ans);
    return 0;
}