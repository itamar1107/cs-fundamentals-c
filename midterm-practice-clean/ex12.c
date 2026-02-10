#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	//ordering 3 numbers from high to low
	int a;
	int b; 
	int c; 
	printf("enter three numbers\n"); 
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c); 
	if(a==b && b==c)
		{
			printf("the three numbers are equal");
		}
		else if(a==b || a==c || b==c)
				{
					if(a==b)
						{
							if(a>c)
								{
									printf("the order of the numbers from high to low is:%d,%d,%d", a,b,c);
								}
								else
								{
									printf("the order from high to low is: %d,%d,%d", c,a,b);	
								}
						}
					else if(a==c)
							{
								if(a>b)
									{
										printf("the order from high to low is: %d,%d%,d", a,c,b);
									}
									else
										{
											printf("the order from high to low is: %d,%d,%d", b,a,c);
										}	
							}
							else if(b==c)
									{
										if(b>a)
											{
												printf("the order from high to low is: %d,%d,%d", b,c,a);
											}
											else
											{
												printf("the order from high to low is: %d,%d,%d", a,b,c);	
											}	
									}	
				}
				if(a>b && a>c)
					{
						if(b>c)
							{
								printf("the order from high to low is: %d,%d,%d", a,b,c);
							}
							else
							{
								printf("the order from high to low is: %d,%d,%d", a,c,b);
							}
					}
				else if(b>a && b>c)
						{
							if(a>c)
								{
									printf("the order from high to low is: %d,%d,%d", b,a,c);
								}
								else
								{
									printf("the order from high to low is: %d,%d,%d", b,c,a);
								}
						}
						else if(c>a && c>b)
								{
									if(a>b)
										{
											printf("the order from high to low is: %d,%d,%d", c,a,b);
										}
										else
										{
											printf("the order from high to low is: %d,%d,%d", c,b,a);
										}
								}
	return 0;
}
