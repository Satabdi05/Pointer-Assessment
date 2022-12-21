#include<stdio.h>
#include<conio.h>


void area_of_circle(float *value, float *result) {
  *result = 3.14 * (*value) * (*value);
}

#include<stdio.h>

int main() {
  float radius, area;

  printf("\nEnter the radius of Circle : ");
  scanf("%f", &radius);

  //area = 3.14 * radius * radius;
  area_of_circle(&radius, &area);

  printf("\nArea of Circle : %f", area);

  return (0);
}
