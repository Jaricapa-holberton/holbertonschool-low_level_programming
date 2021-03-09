#include <stdio.h>

#include "pos.h"

#include <math.h>



int main(int argc, char *argv[])

{

	point p1 = {2,3,1};

	point p2 = {8,-5,0};



	double distance;



	distance = sqrt( pow((p2.x - p1.x), 2) + pow((p2.y - p1.y), 2) + pow((p2.z - p1.z), 2) );



	printf("%f\n", distance);

	return 0;

	
}
