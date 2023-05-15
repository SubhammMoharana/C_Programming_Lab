//Compute area and perimeter of a circle, take radius as user input. Use pointer in function
#include<stdio.h>
float circle(float r, float *p);
int main()

{
	float r;
	float perimeter; 
	printf("Enter Radius:");
	scanf("%f",&r);
	int res = circle(r, &perimeter);
	printf("%f",perimeter);
	return 0;
}
float circle(float r, float *p)
{
	float s;
	s = (float)3.14 * r * r;
	*p = (float)3.14 * 2 * r;
	return s;

}
