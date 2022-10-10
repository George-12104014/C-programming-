#include <stdio.h>
#include<math.h>
float main()
{   
    float x,y,BMI;
    printf ("Enter Your Weight(kg) = ");
    scanf("%f",&x);
    printf("Enter Your Height(metre) = ");
    scanf("%f",&y);
    printf("BMI=%f", x/pow(y,2));
    scanf("%f",&BMI);

    if("BMI<18.5"){
        printf("Underweight");
    }
    else if("BMI>=18.5 && BMI<=24.99"){
        printf("Idealweight");
    }
    
    
   
   
   
   







    return 0;
}
