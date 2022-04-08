#include <stdio.h>
float force(float m);

int main()
{
    float m;
    printf("Enter mass in kgs : ");
    scanf("%f", &m);
    printf("The force is %.3f Newton.", force(m));
    return 0;
}
float force(float m)
{
    float result;
    result = m * 9.8;
    return result;
}