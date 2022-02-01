/**Find total number of rectangles in a 10*10 cheese boards.(square is also counted)
Answer)  3025**/
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int calculate_rectangles(int n)
{
    int ans;
    /**Pick any 2 lines from one set and any 2 lines from the second set. 
    These four will make a particular rectangle. Total nos. is  (n+1)C2 ×(n+1)C2**/
    ans = ((n+1)*n*(n+1)*n)/4;
    return ans;
}
int main()
{
    int n, ans;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    ans = calculate_rectangles(n);
    printf("Answer is %d\n",ans);
    return 0;
}
