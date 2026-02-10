#include <stdio.h> 
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[])
 {	
 // calculating the price after taxes for random product (part a) 
 
 	//setting floats for old price, new price, vat precentage and vat amount
	float price,vat,vatamount,newprice;   
	//asking the user to fill the price and vat precentage
	printf("please enter the product price (two decimal digits) and enter the vat precentage (decimal)\n"); 
	//the user inputs the data
	scanf("%f", &price); 
	scanf("%f", &vat); 
	//calculating the amount of tax and the new price for the product
	 vatamount = price * vat;  
	 newprice = price + vatamount;
	 //printing the results
	 printf("the price after tax is %.2f\n",newprice, "euros"); 
	 printf("the amount of tax is %f\n",vatamount, "euros");
					
		return 0;		
}
int cylinder (int argc, char *argv[]) {
		//calculate the base circumference, total area and a volume of a cylinder
	
	// setting floats for varibales radius,height,base circumference, total area and volume, and a constant for pi
	float radius, height,basecirc,totalarea,volume;
	const float  Pi = 3.14;
	//asking the user to insert values for the hieght and raius of the cylinder
	printf("please insert values for the radius and height of the cylinder\n");
	scanf("%f", & radius); 
	scanf("%f", & height);
	// calculating the base circumference 
		basecirc = Pi * radius * 2; 
		totalarea = (2*Pi*radius*height) + (pow(radius, 2)*Pi*2); 
		volume = Pi * pow(radius, 2) * height; 
	//print the results 
	printf("the base circumference of the cylinder is%f\n", basecirc); 
	printf("the total area of the cylinder is %f\n", totalarea); 
	printf("the volume of the cylinder is %f\n", volume); 
}
int flowchart (int argc, char *argv[]) {
	// following the flowchart and calculatin the hypotenuse of a right triangle
	
	//setting two integers for the two sides and one float for the hypotenuse
	int a,b;
	float hyp; 
	//asking the user to insert the length of the two sides
	printf("please insert the length of side a and side b of a right triangle\n"); 
	scanf("%d", &a); 
	scanf("%d", &b); 
		//checking weather the length of one or both side in positive
		if (a <= 0 || b <= 0)
			{
				printf("length of one or more sides does not make sense\n");
			 } 
			else
			{
				//calculating the hypotenuse 
				hyp = sqrt(pow(a,2)+pow(b,2)); 
				printf("the length of the hypotenuse is%.2f\n", hyp);
			}
} 
int month (int argc, char *argv[]) {
	// matching the number to the month
	
	//creating a integer variable for the month
	int month;
	// asking the user for a number between 1-12 
	printf("please insert a number between 1-12\n"); 
	scanf("%d", & month);
	//figuring out which number the user choose and printing the relevant month
	switch(month)
		{
		
	 	case 1: 
	 	printf("january"); break; 
	 	case 2: 
	 	printf("february"); break;  
	 	case 3:
		printf("march"); break; 
		case 4: 
	 	printf("april"); break;  
		case 5: 
	 	printf("may"); break;
		case 6: 
	 	printf("june"); break;
		case 7: 
	 	printf("july"); break;
		case 8: 
	 	printf("august"); break;  
	 	case 9: 
	 	printf("september"); break;
	 	case 10: 
	 	printf("october"); break;
	 	case 11: 
	 	printf("november"); break;
	 	case 12: 
	 	printf("december"); break;
	 	default: 
	 	printf("invalid number");
	 }
	
	
} 



