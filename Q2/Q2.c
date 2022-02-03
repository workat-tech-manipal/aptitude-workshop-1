
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int count_number_of_grids(int n)
{
    //to square the number and divide by 2 and return the ceil of it
    float count;
    int final;
    count = n*n;
    count = (count/2);
    final = ceil(count);
    return final;
}
int main()
{
    int n, ans;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    ans = count_number_of_grids(n);
    printf("Answer is %d\n",ans);
    return 0;
}
