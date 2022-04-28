/*
ALGORITHM
1.Prompt user to enter an exam grade
2.Read user input 
3.if input is positive
   3a.Test to see if score is greater than or equal to 90
      3a.1.If so add score to atotal
      3a.2.Increment acounter
      3a.3.Return to step 1
   3b.Test to see if score is greater than or equal to 80 and less than 90
      3b.1.If so add score to btotal
      3b.2.Increment bcounter
      3b.3.Return to step 1
   3c.Test to see if score is greater than or equal to 70 and less than 80
      3c.1.If so add score to ctotal
      3c.2.Increment ccounter
      3c.3.Return to step 1
   3d.Test to see if score is greater than or equal to 65 and less than 70
      3d.1.If so add score to dtotal
      3d.2.Increment dcounter
      3d.3.Return to step 1
   3f.Else
      3f.1.Add score to ftotal
      3f.2.Increment fcounter
      3f.3.Return to step 1
4.Once a negative number is inputted stop taking inputs
5.Calculate the A grade average
6.Calculate the B grade average
7.Calculate the C grade average
8.Calculate the D grade average
9.Calculate the F grade average
10.Display the three category headers (Grade, Counter, Average)
11.Display the information for the A grades
12.Display the information for the B grades
13.Display the information for the C grades
14.Display the information for the D grades
15.Display the information for the F grades
16.Terminate
*/


//PREPROCESSOR DIRECTIVES
#include<stdio.h>

int main( )
{
   //Variable Declaration and Initialization
   double score = 0.0, aTotal = 0.0, bTotal = 0.0;
   double cTotal = 0.0, dTotal = 0.0, fTotal = 0.0;
   int aCounter = 0, bCounter = 0, cCounter = 0;
   int dCounter = 0, fCounter = 0;
   double aAvg = 0.0, bAvg = 0.0, cAvg = 0.0,dAvg = 0.0,fAvg = 0.0;

   while(score >=0.0)
   {
      //1.Prompt user to enter an exam grade
      printf("Enter a test score or a negative number to stop:");

      //2.Read user input
      scanf("%lf",&score);

      //3.if input is positive
      if(score >= 0.0)
      {
         //3a.Test to see if score is greater than or equal to 90
         if(score >= 90.0)
         {
            //3a.1.If so add score to atotal
            aTotal += score;

            //3a.2.Increment acounter
            aCounter +=1;

            //3a.3.Return to step 1
         }
         //3b.Test to see if score is greater than or equal to 80 
         else if(score >= 80)
         {
            //3b.1.If so add score to btotal
            bTotal += score;

            //3b.2.Increment bcounter
            bCounter += 1;

            //3b.3.Return to step 1
         }
         //3c.Test to see if score is greater than or equal to 70 
         else if(score >= 70)
         {
            //3c.1.If so add score to ctotal
            cTotal += score;

            //3c.2.Increment ccounter
            cCounter += 1;

            //3c.3.Return to step 1
         }
         //3d.Test to see if score is greater than or equal to 65 
         else if(score >= 65)
         {
            //3d.1.If so add score to dtotal
            dTotal += score;

            //3d.2.Increment dcounter
            dCounter += 1;
            //3d.3.Return to step 1
         }
         //3f.Else
         else
         {
            //3f.1.Add score to ftotal
            fTotal += score;

            //3f.2.Increment fcounter
            fCounter += 1;

            //3f.3.Return to step 1
         }
      //4.Once a negative number is inputted stop taking inputs
      }
   }
   //5.Calculate the A grade average
   aAvg = aTotal/aCounter;

   //6.Calculate the B grade average
   bAvg = bTotal/bCounter;

   //7.Calculate the C grade average
   cAvg = cTotal/cCounter;

   //8.Calculate the D grade average
   dAvg = dTotal/dCounter;
 
  //9.Calculate the F grade average
   fAvg = fTotal/fCounter;

   //10.Display the three category headers (Grade, Counter, Average)

   printf("\nGrade Number Average");
   //11.Display the information for the A grades
   printf("\n  A     %d    %lf",aCounter, aAvg);

   //12.Display the information for the B grades
   printf("\n  B     %d    %lf",bCounter, bAvg);

   //13.Display the information for the C grades
   printf("\n  C     %d    %lf",cCounter, cAvg);

   //14.Display the information for the D grades
   printf("\n  D     %d    %lf",dCounter, dAvg);

   //15.Display the information for the F grades
   printf("\n  F     %d    %lf",fCounter, fAvg);

   //16.Terminate
   return(0);




}
