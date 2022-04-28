/*
Volume of Cylinder

Inputs: radius of cylinder, height of cylinder
Outputs: volume of cylinder, radius, and height

Algorithm:
1)Introduce program
2)Request cylinder radius
3)Record cylinder radius
4)Request cylinder height
5)Record cylinder height
6)Compute cylinder volume (formula: PI * radius * radius * height)
7)Output cylinder volume, echoing radius and height
8)Sign off with user
9)Terminate program
*/

#include <stdio.h>
#define   PI_VAL    3.14159265359


//1. Introduce Program
void ProgramIntro(void) {
   printf("\n\n") ;
   printf("Welcome! This program calculates the volume of a cylinder.\n") ;   
   return;
}

//2. Request Cylinder Radius
void RadiusRequest(void) {
   printf("\nPlease enter the radius of the cylinder: ") ;
   return;
}

//3.Record Cylinder Radius
double RadiusRecord(void){
   double radius;
   scanf("%lf" , &radius);
   return radius;
}

//4.Request Cylinder Height
void HeightRequest(void){
   printf("\nPlease enter the height of the cylinder: ") ;
   return;
}

//5. Record Cylinder Height 
double HeightRecord(void){
   double height;
   scanf("%lf" , &height);
   return height;
}

//6. Compute Cylinder Volume
double VolumeCompute(double radius, double height){
   double volume;
   volume = PI_VAL * radius * radius * height;
   return volume;
}

//7. Output Cylinder Volume
void VolumeOutput(double radius, double height, double volume){
   printf("\n");
   printf("Given that the radius of a cylinder is %3.2lf,\n" , radius);
   printf("And that the height is %3.2lf,\n" , height);
   printf("The volume of the cylinder is approximately: %3.2lf\n\n", volume);
   return;
}

//8. Sign Off With User
void SignOff(void){
    printf("Thank you for using my program!\n\n");
   return;
}

int main ( void )
{
   //Local variable for the main( ) declared below
   double  radius = 0.0 ;
   double  height = 0.0 ;
   double  volume = 0.0 ;

   //1. Introduce Program
   ProgramIntro();

   //2.Request Cylinder Radius
   RadiusRequest();

   //3.Record Cylinder Radius
   radius = RadiusRecord();

   //4.Request Cylinder Height
   HeightRequest();

   //5.Record Cylinder Height
   height = HeightRecord();

   //6.Compute Cylinder Volume
   volume = VolumeCompute(radius, height);

   //7.Output Cylinder Volume
   VolumeOutput(radius,height,volume);
   
   //8.Sign Off With User
   SignOff();

   //9)Terminate program
   return 0;
}
