/*
1.Tell user program function
2.Ask for an integer
3.Record user input
4.Ask how many factors per line
5.Read user input
6.Test if i is less than integer
   6.a.if true test if g is less than or equal to perline
      6.a.1.if true test if interger / i leaves no remainder
         6.a.1.a. if true 
            6.a.1.a.1.Display i to the screen
            6.a.1.a.2.Increment g
            6.a.1.a.3.Return to step 6
      6.a.2.if false
         6.a.2.a.Display a new line
         6.a.2.b.Set g equal to 0
         6.a.2.c.Test if interger / i leaves no remainder
            6.a.2.c.1.if true
               6.a.1.c.1.a.Display i to the screen
               6.a.1.c.1.b.Increment g
               6.a.1.c.1.c.Return to step 6
            6.a.2.c.2.if false return to step 6
   6.b if false go to step seven
7.Ask if the User wants to run program again (Y/N)
8.Record user input
9.Test if again is equal to Y
   9.a.If true return to step 2
   9.b.If false go to step 10
10.Sign off with user
11.Terminate.
*/

//Preprocessor Directives
#include<stdio.h>

int main()
{
   // Variable Declaration
   int perline = 0, integer = 0, i = 0, g = 0;
   char go = 'Y';


   //1.Tell user program function
   printf("This program takes an integer and produces all its factors");


   while(go == 'Y' || go == 'y')
   {
      //2.Ask for an integer
      printf("\nPlease Enter an Integer:");

      //3.Record user input
      scanf("%d",&integer);

      //4.Ask how many factors per line
      printf("How many factors per line?:");

      //5.Read user input
      scanf("%d",&perline);
      
      //Resetting g
      g = 0;

      //Heading
      printf("\nThe factors of %d are:\n",integer);

      //6.Test if i is less than integer
      for(i=1; i<=integer; i++)
      {
         //6.a.if true test if g is less than or equal to perline
         if(g < perline)
         {
            //6.a.1.if true test if interger / i leaves no remainder
            if(integer % i == 0)
            {
               //6.a.1.a. if true
               //6.a.1.a.1.Display i to the screen
               printf("%d ",i);

               //6.a.1.a.2.Increment g
               g += 1;

               //6.a.1.a.3.Return to step 6
            }
         }
         //6.a.2.if false
         else
         {
            //6.a.2.a.Display a new line
            printf("\n");

            //6.a.2.b.Set g equal to 0
            g = 0;

            //6.a.2.c.Test if interger / i leaves no remainder
            if(integer % i == 0)
            {
            //6.a.2.c.1 if true
               //6.a.2.c.1.a.Display i to the screen
               printf("%d ",i);

               //6.a.2.c.1.b.Increment g
               g += 1;

               //6.a.2.c.1.c.Return to step 6
            }

         //6.a.2.c.2.if false return to step 6
         }

      //6.b if false go to step seven
      }

      //7.Ask if the User wants to run program again (Y/N)
      printf("\nDo you want to run the program again (Y/N):");

      //8.Record user input
      scanf(" %c",&go);


   }
   //9.Sign off with user
   printf("\nHave a good day!!!");

   //10.Terminate;
   return (0);
}
