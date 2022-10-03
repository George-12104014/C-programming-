#include<stdio.h>
 
int main(){
float Height,Weight,age;
printf("Enter Height in cm  =");
scanf("%f",&Height);
printf("Enter Weight in kg =");
scanf("%f",&Weight);
printf("Enter your age in years = ");
scanf("%f",&age);
printf("BMR=%f", 88.362 + (13.397 * Weight) + (4.799 * Height)- (5.677 * age) );
return 0;

}
