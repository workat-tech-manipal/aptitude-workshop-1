/**You are given a cubic dice with 6 faces. All the individual faces have a number printed on them. 
The numbers are in the range of 1 to 6, like any ordinary dice. 
You will be provided with a face of this cube, your task is to guess the number on the opposite face of the cube. 
If n = 5, what we will be number on the other side.
Answer) 2 **/
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