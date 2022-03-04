#include <stdio.h>
#define PI 3.14

float midpoint(float a, float b){
	float midpoint;
	midpoint = (a+b)/2;

return midpoint;
} /* midpoint end */

float take_slope(float x1, float y1, float x2, float y2) {
	float slope_value = (y2 - y1)/ (x2 - x1);

return slope_value;
} /* take_slope end */

float take_distance(float x1, float y1, float x2, float y2) {
	float distance_value;
	distance_value = (x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1);
	
return distance_value;
} /* take_distance end */

float take_area(float diameter_sqr) {
	float area_value;
	area_value = PI*diameter_sqr/4; //area = PI*(diameter/2)^2
return area_value;
} /* take_area end */

int main(void) {
	int x1, y1;
	int x2, y2;
	float midx, midy;
	float slope_value;
	float diameter_value;
	float area_value;
	
	printf("Point1 coordinates in 'x1,y1' form:\n");
	scanf("%d,%d", &x1, &y1);
	
	printf("Point2 coordinates in 'x2,y2' form:\n");
	scanf("%d,%d", &x2, &y2);	
	
	midx = midpoint(x1, x2);
	midy = midpoint(y1, y2);
	printf("Midpoint: M(x,y) = (%.3f,%.3f)\n", midx, midy);
	
	slope_value = take_slope(x1, y1, x2, y2);
	printf("Slope: m = %.1f\n", slope_value);
	
	diameter_value = take_distance(x1, y1, x2, y2);
	area_value = take_area(diameter_value);
	printf("Area: A = %.1f\n", area_value);
	
	

return 0;
} /* main end */
