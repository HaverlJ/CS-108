/*
  ALGORITHM FOR function_1( ):
 //1.Ensure min and max are assigned values from the array
 //2.Create a nested for loop to go through the array
 //3.Test that the current min is greater than the current test number
 //4.Test that the current max is greater than the current test number
 //5.Add current number to the total
 //6.Reassign values to be sent to function
 //7.Calculate Average
 //8.Terminate
*/

#include <stdio.h>

//Provide the prototype for function_1( ) below:
double function_1 ( double [][5],double,double, double *, double * );


int main (void)
{
   //Local variables declared
   double  qwerty [ 3 ] [ 5 ] =
                   { 31.07 , 21.51 , 1.61,  71.71 , 1.81 , 32.22 , 2.39 , 2.47 ,
                     2.55 , 42.72 , 11.24 , 81.31 , 11.77 , 11.89 , 11.92 } ;
   double  min = 0 , max = 0  ;
   double avg = 0.0 ;
  
   //The call for function_1( ) is provided below:
   avg =  function_1 ( qwerty, 3 , 5 , &min , &max ) ;

   //Display Results to screen
   printf("Minimum:%lf  Maximum:%lf  Average:%lf",min,max,avg);
   return 0 ;
}


double function_1 ( double qwerty[][5], double row, double col, 
                    double *min, double *max ){
   //DECLARE LOCAL VARIABLES
   int i = 0, g = 0;
   double avg = 0.0;
   double total = 0.0;



 //1.Ensure min and max are assigned values from the array
   double minHolder = qwerty[0][0];
   double maxHolder = qwerty[0][0];

   //2.Create a nested for loop to go through the array
   for(i = 0; i < row;i++)
   {
      for(g = 0; g < col; g++)
      {
         //3.Test that the current min is greater than the current test number
         if(minHolder > qwerty[i][g])
         {
            minHolder = qwerty[i][g];
         }

         //4.Test that the current max is greater than the current test number
         if(maxHolder < qwerty[i][g])
         {
            maxHolder = qwerty[i][g];
         }

         //5.Add current number to the total
         total += qwerty[i][g];
      }
   }

   //6.Reassign values to be sent to function
   *max = maxHolder;
   *min = minHolder;

   //7.Calculate Avergae
   avg = total/(row*col);
   
   //8.Terminate
   return avg;
}
