//program to enter price of 3 items & print thier find cost with gst 18% use array

#include <stdio.h> 

int main() 
{ 
	// Declaring array 
	float price[3]; 

	// Input prices of 3 items 
	printf("Enter prices of 3 items: "); 
	for (int i = 0; i < 3; i++) 
		scanf("%f", &price[i]); 

	// Calculating cost with GST 
	float total_price = 0; 
	for (int i = 0; i < 3; i++) 
		total_price = total_price + price[i] + (price[i] * 0.18); 
	// Printing total cost 
	printf("Total cost with GST: %f", total_price); 

	return 0; 
}