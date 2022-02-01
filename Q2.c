/**Ayush is very interested in archery, so he goes to the sports club to practice his skills. 
Today he was given a unique task to enhance his skills,and he was given a n*n grid as a target. 
If he aims at a grid and successfully aims, he cannot strike the grid that occupies the immediate top, bottom, left, or right position. 
Your task here is to find the maximum number of grids that he can aim for, if n = 21.
Answer) 221 **/
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
