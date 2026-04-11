#include<stdio.h>
int main()
{
	float x, y, z;
	float *px, *py, *pz;
	px = &x; py = &y; pz = &z;

	printf("Enter three number:");
	scanf("%f %f %f", px, py, pz);

	if(*px > *py)
	{
		if(*px > *pz)
			printf("Biggest = %.2f", *px);
		else
			printf("Biggest = %.2f", *pz);
	}
	else
	{
		if(*py > *pz)
			printf("Biggest = %.2f", *py);
		else
			printf("Biggest = %.2f", *pz);
	}

	return 0;
}