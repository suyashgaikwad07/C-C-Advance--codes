#include <stdio.h>

#define PI 3.14f

int main()
{
	float rad, area, perm;

	printf("Enter radius of circle: ");
	scanf("%f", &rad);

	area = PI * rad * rad;
	perm = 2 * PI * rad;

	printf("Area of circle: %f\n", area);
	printf("Perimeter of circle: %f\n", perm);
	return 0;
}