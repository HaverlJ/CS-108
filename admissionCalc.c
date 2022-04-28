/*   ALGORITHM
1.Greet user and state program purpose
2.Prompt user to enter which test they took
3.Read user input to testType
4.If user took the SAT
   4a.Ask user for SAT Score
   4b.Record user input to satScore
5.If user took the ACT
   5a.Ask user for ACT score
   5b.Record user input to actScore
6.If user enter neither test
   6a.Communicate user must choose a test
   6b.Terminate
7.Prompt user to enter high school average
8. Record user input to schoolAvg
9.If SAT score >= 1420 or ACT >= 31
   9a.Assign admissionDecision 1
10.If SAT score >= 1310 or ACT >= 28 and Avg >= 80.0
   10a.Assign admissionDecision 1
11.If SAT score >= 1200 or ACT >= 25 and Avg >= 82.5
   11a.Assign admissionDecision 1
12.If SAT score >= 1100 or ACT >= 22 and Avg >= 85.0
   12a.Assign admissionDecision 1
13.If SAT score >= 980 or ACT >= 19 and Avg >= 87.5
   13a.Assign admissionDecision 1
14.If SAT score >= 810 or ACT >= 15 and Avg >= 90.0
   14a.Assign admissionDecision 1
15.If SAT score >= 720 or ACT >= 13 and Avg >= 92.5
   15a.Assign admissionDecision 1
16.If Avg >= 95.0
   16a.Assign admissionDecision 1
17.Else
   17a.Assign admissionDecision 0
18.If admissionDecision == 1
   18a.Tell user they have been accepted to qwerty
19.Else tell user they have been rejected
20. Terminate
*/


#include<stdio.h>
int main(void)
{
//Declaring local variables
int testType = 0, satScore = 0, actScore = 0;
int admissionDecision = 0, returnScore;
double schoolAvg = 0.0;


//1.Greet user and state program purpose
   printf("\nInput data to recieve an admissions decision.");

//2.Prompt user to enter which test they took
   printf("\nWhich test did you take?(1 for SAT || 2 for ACT):");

//3.Read user input to testType
   scanf("%d",&testType);

//4.If user took the SAT
   if (testType == 1)
   {
   //4a.Ask user for SAT Score
      printf("\nPlease enter your SAT score:");
   //4b.Record user input to satScore
      scanf("%d",&satScore);
      returnScore = satScore;   
   }

//5.If user took the ACT
   else if (testType == 2)
   {
   //5a.Ask user for ACT score
      printf("\nPlease enter your ACT score:");
   //5b.Record user input to actScore
      scanf("%d",&actScore);
      returnScore = actScore;
   }

//6.If user enter neither test
   else
   {
   //6a.Communicate user must choose a test
      printf("You must specify which test you took");
   //6b.Terminate
      return (0);
   }

//7.Prompt user to enter high school average
   printf("\nPlease enter your High School average:");

//8. Record user input to schoolAvg
   scanf("%lf",&schoolAvg);

//9.If SAT score >= 1420 or ACT >= 31
   if(satScore >= 1420 || actScore >= 31)
   {
   //9a.Assign admissionDecision 1
      admissionDecision = 1;
   }
//10.If SAT score >= 1310 or ACT >= 28 and Avg >= 80.0
   else if((satScore >= 1310 || actScore >= 28) && schoolAvg >= 80.0)
   {
   //10a.Assign admissionDecision 1
      admissionDecision = 1;
   }

//11.If SAT score >= 1200 or ACT >= 25 and Avg >= 82.5
   else if((satScore >= 1200 || actScore >= 25) && schoolAvg >= 82.5)
   {
   //11a.Assign admissionDecision 1
      admissionDecision = 1;
   }

//12.If SAT score >= 1100 or ACT >= 22 and Avg >= 85.0
   else if((satScore >= 1100 || actScore >= 22) && schoolAvg >= 85.0)
   {
   //12a.Assign admissionDecision 1
      admissionDecision = 1;
   }

//13.If SAT score >= 980 or ACT >= 19 and Avg >= 87.5
   else if((satScore >= 980 || actScore >= 19) && schoolAvg >= 87.5)
   {
   //13a.Assign admissionDecision 1
      admissionDecision = 1;
   }

//14.If SAT score >= 810 or ACT >= 15 and Avg >= 90.0
   else if((satScore >= 810 || actScore >= 15) && schoolAvg >= 90.0)
   {
   //14a.Assign admissionDecision 1
      admissionDecision = 1;
   }

//15.If SAT score >= 720 or ACT >= 13 and Avg >= 92.5
   else if((satScore >= 720 || actScore >= 13) && schoolAvg >= 92.5)
   {
   //15a.Assign admissionDecision 1
      admissionDecision = 1;
   }
//16.If Avg >= 95.0
   else if(schoolAvg >= 95.0)
   {
   //16a.Assign admissionDecision 1
      admissionDecision = 1;
   }

//17.Else
   else
   {
   //17a.Assign admissionDecision 0
   admissionDecision = 0;
   }


//18.If admissionDecision == 1
   if (admissionDecision == 1)
   {
   //18a.Tell user they have been accepted to qwerty
      printf("\nBased on your SAT/ACT score of %d and your" 
             " high school average of %.2lf,\nyou have been accepted to"
             " Qwerty University!!! Congratulations",returnScore, schoolAvg);
   }
//19.Else tell user they have been rejected
   else
      printf("\nWe regret to inform you that with your"
             " SAT/ACT score of %d and your high school"
             " average of %.2lf\nyou have been rejected from"
             " Qwerty University", returnScore, schoolAvg);
//20. Terminate
   return (0);

}

