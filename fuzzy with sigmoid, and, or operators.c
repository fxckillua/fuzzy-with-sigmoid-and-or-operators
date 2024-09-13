#include <stdio.h>
#include <math.h>


int main()
{
	float I1, I2;
	float W1, W2;
	float soma, O1, T;

	printf("Digite I1: ");
	scanf("%f", &I1);
    
	printf("Digite I2: ");
	scanf("%f", &I2);
    
	printf("Digite W1: ");
	scanf("%f", &W1);
    
	printf("Digite W2: ");
	scanf("%f", &W2);
    
	if(W1>W2)
    	T = W1+1;
	else
    	T = W2+1;
   	 
	soma = I1 * W1 + I2 * W2;
    
	O1 = 1 / (1 + exp(- 10 * (soma - T)));
    
	printf("I1: %.2f\n", I1);
	printf("I2: %.2f\n", I2);
	printf("W1: %.2f\n", W1);
	printf("W2: %.2f\n", W2);
	printf("T : %.2f\n", T);
	printf("Soma : %.2f\n", soma);
	printf("O1 : %.2f\n", O1);
   	 
    
	return 0;
}