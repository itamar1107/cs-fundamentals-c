#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	//program that check wehther the entred number is an armstrong number
	int num; 
	int sum, sum1, sum2=0, sum3;
	int numdig=0;  
	printf("enter the number you want to check\n"); 
	scanf("%d", &sum);
	sum1 = sum;
	sum3 = sum; 
	while(sum>0)
	{
		sum=sum/10; 
		numdig++; 
	}
		while(sum1>0)
			{
				num = sum1%10;
				sum2= sum2 + pow(num,numdig);
				sum1 = sum1/10;
			}
			if(sum2==sum3)
				{
					printf("armstrong");
				}
				else 
				{
					printf("not armstrong");
				}
	
	return 0;
}
