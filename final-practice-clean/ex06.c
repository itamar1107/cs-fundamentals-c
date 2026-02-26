#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

//defining the calculate statistics function
void calculate_statistics(int *grades, int size, int *min, int *max, double *average);
//definig the count above threshold function
int count_above_threshold(int *grades, int size, int threshold); 
//definig the sort gardes function
void sort_grades(int *grades, int size);
//definig the swap function
void swap(int *a, int *b); 
int main(int argc, char *argv[]) {
	//declaring variables
	int amountOfGrades, min, max, mainThreshold, aboveThreshold;
	double average;
	//ask the user for the anount of grades  
	printf("enter the amount of grades\n"); 
	scanf("%d", &amountOfGrades); 
	//setting an array for the gardes
	int gradeArray[amountOfGrades];
	//ask the user for threshold
	printf("please enter threshold\n"); 
	scanf("%d", &mainThreshold); 
	int i; 
	//user enter the gardes
	for(i=0; i<amountOfGrades; i++)
		{
			printf("enter the %d grade\n", i); 
			scanf("%d", &gradeArray[i]);
			if(gradeArray[i] < 0 || gradeArray[i] >100)
				{
					printf("invalid grade, try again\n");
					i--;  
				 } 	
		}
		//calling the function caculate statistics
		calculate_statistics(gradeArray, amountOfGrades, &min, &max, &average); 
		aboveThreshold =  count_above_threshold(gradeArray, amountOfGrades, mainThreshold); 
		printf("students above threshold: %d\n", aboveThreshold); 
		sort_grades(gradeArray, amountOfGrades);
		for(i=0;i<amountOfGrades;i++)
			{
				printf("%d\t", gradeArray[i]); 
			}
}
void calculate_statistics(int *grades, int size, int *min, int *max, double *average)
{
	grades[size]; 
	int i, sum; 
	*min = grades[0]; 
	*max = grades[0]; 
	for(i=0; i<size; i++)
		{
			if(grades[i] < *min)
				{
					*min = grades[i]; 	
				}	
		} 
		for(i=0; i<size; i++)
			{
				if(grades[i] > *max)
					{
						*max = grades[i]; 	
					}	
			}
			for(i=0; i<size; i++)
				{
					sum = sum +grades[i]; 	
				}
				*average = sum/size; 
				printf("the minimum grade is: %d\n", *min); 
				printf("the maximum grade is: %d\n", *max); 
				printf("the average grade is: %lf\n", *average); 	
}
int count_above_threshold(int *grades, int size, int threshold)
{
	int i, count=0; 
	for(i=0; i<size; i++)
		{
			if(grades[i] > threshold)
				{
					count++; 
				}
		}
		return count; 
}
void sort_grades(int *grades, int size)
{
	int i, j, k;  
	for(i=0;i<size-1; i++)
		{
			for(j=0;j<size-i-1; j++)
				{
					if(grades[j] > grades[j+1])
						{
							swap(&grades[j], &grades[j+1]); 	
						} 
				}
		}
}
void swap(int *a, int *b)
{
	int temp = *a; 
	*a = *b; 
	*b = temp; 
}
