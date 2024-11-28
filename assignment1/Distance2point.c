#include<stdio.h>
#include<math.h>

float p1_x;
float p1_y;
float p2_x;
float p2_y;

float sqare(float x)
{
    return x * x;
};


int main(int argc, char const *argv[])
{
    printf("Enter the x-coordinate of the first point (x1): ");
    scanf("%f", &p1_x);
    printf("Enter the y-coordinate of the first point (x1): ");
    scanf("%f", &p1_y);
    printf("Enter the x-coordinate of the second point (x1): ");
    scanf("%f", &p2_x);
    printf("Enter the y-coordinate of the second point (x1): ");
    scanf("%f", &p2_y);  
    float d = sqare(p2_x - p1_x) + sqare(p2_y - p1_y);
    float distance = sqrt(d);
    
    printf("('%f','%f') and ('%f','%f') is %f",p1_x, p1_y, p2_x, p2_y, distance);
    return 0;
}
