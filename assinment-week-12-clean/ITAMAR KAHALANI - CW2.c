#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

//DEFINING THE MINMAX FUCNTION
void minmax(int arg[],int size); 
//DEFINING THE SUMEL FUNCTION
int sumel(int arg[], int size);
//DEFINING THE POLY FUNCTION
void poly(double arg[], int deg); 
//DEFINING THE EVAL FUNCTION
double eval(double arg[], int deg,double x); 
//DEFINING THE BSORT FUNCTION
void bsort(int arg[], int size); 
//DEFINING THE SWAP FUCNTION
void swap (int *a, int *b);
//STARTING MAIN
int main(int argc, char *argv[]) {
	//CREATING AN ARRAY OF 10 INTEGERS
	int size = 10; 
	int A [size];
	
	//ASKING THE USER FOR 10 NUMBERS AND STORING THEM IN THE ARRAY
	int i; 
	for(i =0 ; i<size; i++)
	{
		printf("please enter a number\n"); 
		scanf("%d",&A[i]); 
	}
	//CALLING THE MINMAX FUNCTION
	minmax(A,size); 
	
	//ASKING THE USER IF HE WANTS TO KNOW THE SUM OF THE ARRAY
	int num; 
	printf("to calculate the sum of the array enter the number 1\n");
	scanf("%d", &num);
	if(num!=1)
		{
			printf("program over, goodbye\n");
		} 
		else
		{
			//CALLING THE SUMEL FUNCTION
			sumel(A,size);
		}
	//ASKING THE USER TO DETERMAIN THE DEGREE OF A POLYNOMIAL
	int deg; 
	printf("please enter the degree of a polynomial\n"); 
	scanf("%d", &deg); 
	//SETTING THE ARRAY LENGTH TO ONE OVER THE DEGREE
	double func[deg+1];
	int j;
	//STORING THE COEFFICIENTS IN THE ARRAY
	printf("please enter the coefficients\n"); 
	int coe; 
	scanf("%d",&coe); 
	for(j=0; j<deg+1; j++)
		{
			 func[j] = coe;
			 coe--; 
		}
		poly(func,deg);
	//ASKING THE USER FOR THE VALUE OF X
	double x; 
	printf("please enter the value of x\n"); 
	scanf("%lf",&x);
	//CALLING THE EVAL FUNCTION 
	double result = eval(func,deg,x); 
	printf("f(%.0lf) = %.2lf\n", x, result); 
	
	//ELECTRICAL INSTALLATION COMPANY
	//SETTING AN INTEGER FOR THE PV FARM AND AN INTEGER FOR A CHANGE
	int pv = 20; 
	int s; 
	printf("the amount of PV farms is %d\n",pv);
	printf("to update, enter the new number, if its the same enter 1\n"); 
	scanf("%d", &s); 
	if(s!=1)
		{
			pv = s; 
		}
	//INSERTING PRODUCTION INTO AN ARRAY
		int k; 
		int production[pv]; 
		for(k=0; k<pv; k++)
		{
			printf("enter the daily production in MW from each farm\n");
			scanf("%d", &production[k]);  	
		}
		bsort(production, pv);
		//SUMMING UP THE FIVE LOWEST PRODUCTION ENTERIES 
		int indt = 0; 
		int citt = 0; 
		int p = 0; 
		for(p=0; p<5; p++)
		{
			citt = citt + production[p]; 
		}
		//SUMMING UP THE FIVE HIGHEST ENTERIES
		for(p = pv-5; p < pv; p++)
			{
				indt = indt + production[p]; 
			}
			printf("industry total = %d\n", indt); 
			printf("cities total = %d\n", citt);
		
}
//DECLARING THE MINMAX FUNCTION
void minmax(int arg[],int size)
{
	//SETTING INTEGERS FOR COUNTERS 
	int i,j;
	//SETTING MAX AND MIN VALUES TO FIRST ARRAY VALUE
	int max = arg[0]; 
	int min = arg[0]; 
	//DETERAMAIN THE MAX AND MIN VALUES
	for(i=0; i<size; i++)
		{
			if(arg[i] < min)
				{
					min = arg[i]; 
				}
				if(arg[i] > max)
					{
						max = arg[i]; 
					}
		} 
		 //PRINTING THE MAX AND MIN VALUES
		printf("min = %d\n", min); 
		printf("max =  %d\n", max); 
}
//DECLARING THE SUMEL FUNCTION
int sumel(int arg[], int size)
{
	//SETTING SUM TO 0 AND AN INTEGER FOR COUNTER
	int sum = 0;
	int i;  
	//CALCULATING THE SUM OF THE ARRAY
	for(i=0;i<size;i++)
		{
			sum = sum +arg[i]; 
		}
		//PRINTING THE SUM
		printf("sum = %d\n", sum);
}
//DECLARING THE POLY FUNCTION
void poly(double arg[], int deg)
{
	//SETTING A COUNTER AND A VALUE FOR DEGREES 
	int i; 
	int a = deg;
	//PRINTING F(X) 
	printf("f(x) = ");
	//ARRANGING THE WHOLE FUNCTION WITH THE ARRAY VALUES AND THE DEGREES 
	for(i=0; i<a; i++)
		{
		
			printf("%.0lfX^%d", arg[i], deg);
			deg--; 
			if(arg[i]>0)
				{
					printf(" + ");	
				}
		}
		//PRINTING THE CONSTANT
		printf("%.0lf\n", arg[a]); 
}
//DECLARING THE EVAL FUNACTION
double eval(double arg[], int deg,double x)
{
	//SETTING A COUNTER, A VALUE FOR THE FUNCTION RESULT AND A VALUE FOR DEGREES
	int i;
	double y=0; 
	int a = deg; 
	//CALCULATING THE FUNCTION FOR X = SOMETHING
	for(i=0; i<=a; i++)
	{
		y = y + (arg[i] * pow(x,deg));
		deg--; 
	}
	//RETUNRNING THE VALUE OF THE FUCNTION
	return y; 
}
//DECLARING THE BSORT FUNCTION
void bsort(int arg[], int size)
{
	//SETTING COUNTERS
	int m,k; 
	//BUBLLE SORT AALGORITHM
	for(k=0; k<size;k++)
	{
		for(m=(k+1); m<size+1; m++)
		{
			if(arg[m] < arg[k])
				{
					//CALLING THE SWAP FUNCTION
					swap(&arg[m], &arg[k]);
				}
		}
	}
	k=0; 
	for(k=0; k<size; k++)
	{
		printf("%d\t", arg[k]);
		printf("\n");	
	}	
}
//DECLARING THE SWAP FUNCTION
void swap (int *a, int *b)
{
	int temp = *a; 
	*a = *b; 
	*b = temp; 
}
