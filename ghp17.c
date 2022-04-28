/*
Algorithm:
1. Populate a 12-row and 25-column 2D array of characters with
   upper-case characters from the file named ghp17.dat

2. Show the contents of the 2D array as 12 rows and 25 columns

3. Call a PCF that will determine the number of each vowel
   that is in the 2D array.  The number of As will be stored to
   element 0 of the results array, the number of Es will be
   stored to element 1 of the results array, the number of
   Is will be stored to element 2 of the results array, the
   number of Os will be stored to element 3 of the results
   array, and the number of Us will be stored to element 4
   of the results array.  Algorithm steps for everything
   accomplished in this PCF will be inside the PCF itself.

4. Call a PCF that will display to the screen the number of
   each vowel that was in the 2D array (in other words, this PCF
   will display the appropriate contents of the results array).
   Algorithm steps for everything accomplished in this PCF will
   be inside the PCF itself.

   Note 1: PCFs may not be combined.
   Note 2: PCFs must be called from the main( )
   Note 3: PCF prototypes must be above main( )
   Note 4: PCF definitions must be below main( )
   
5. Terminate
*/


#include<stdio.h>

//FUNCTION PROTOTYPES
int* VowelCounter(char [][25],int,int);

void CounterDisplay(int [5],int);


int main( void )
{
   //DO NOT CHANGE - Local variables declared below
   char data_array[12][25] = { '\0' } ;
   int  results_array[ 5 ] = { 0 } ;
   int row = 0 , col = 0 ;
   FILE * read_ptr = NULL ;
   read_ptr = fopen("ghp17.dat" , "r" ) ;

   //DO NOT CHANGE: 1.  Populate a 12-row and 25-column 2D array of
   //characters with upper-case characters from the file named ghp17.dat
   for ( row = 0 ; row < 12 ; row = row + 1 )
   {
       for ( col = 0 ; col < 25 ; col = col + 1 )
       {
           fscanf( read_ptr , "%c " , &data_array[row][col] ) ;
       }
   }

   //DO NOT CHANGE - 2. Show the contents of the 2D array as 12 rows
   //and 25 columns
   for ( row = 0 ; row < 12 ; row = row + 1 )
   {
       for ( col = 0 ; col < 25; col = col + 1 )
       {
           printf( "%c ", data_array[row][col] ) ;
           if (col == 24)
           {
               printf( "\n" ) ;
           }
       }
   }

   //3. Call a PCF that will determine the number of each vowel
   //that is in the 2D array.  The number of As will be stored to
   //element 0 of the results array, the number of Es will be
   //stored to element 1 of the results array, the number of
   //Is will be stored to element 2 of the results array, the
   //number of Os will be stored to element 3 of the results
   //array, and the number of Us will be stored to element 4
   //of the results array.  Algorithm steps for everything
   //accomplished in this PCF will be inside the PCF itself.

   
   int *array;
   array =  VowelCounter(data_array,12,25);
   
   //4. Call a PCF that will display to the screen the number of
   //each vowel that was in the 2D array (in other words, this PCF
   //will display the appropriate contents of the results array).
   //Algorithm steps for everything accomplished in this PCF will
   //be inside the PCF itself.
   
   CounterDisplay(array,5);


   //Note 1: PCFs may not be combined.
   //Note 2: PCFs must be called from the main( )
   //Note 3: PCF prototypes must be above main( )
   //Note 4: PCF definitions must be below main( )


   // 5. Terminate
   return 0 ;
}


int* VowelCounter(char data_array[][25],int numrows,int numcol){
   static int results_array[ 5 ] = { 0 } ;
   int row = 0 , col = 0 ;
   
      //1. FOR LOOPS TO MOVE THROUGH ARRAY
      for ( row = 0 ; row < 12 ; row = row + 1 )
      {
         for ( col = 0 ; col < 25; col = col + 1 )
        {
            // 2. VOWEL TESTS
            // 2.a TEST IF LETTER IS A 
            if(data_array[row][col] == 'A') 
            {
                //2.a.1 IF TRUE INCREMENTS THE A COUNTER AND GOES TO NEXT LETTER
                results_array[0] = results_array[0] + 1;
            }

            // 2.b TEST IF LETTER IS E
            else if(data_array[row][col] == 'E')
            {
                //2.b.1 IF TRUE INCREMENTS THE E COUNTER AND GOES TO NEXT LETTER
                results_array[1] = results_array[1] + 1;
            }

            // 2.c TEST IF LETTER IS I
            else if(data_array[row][col] == 'I')
            {
                //2.c.1 IF TRUE INCREMENTS THE I COUNTER AND GOES TO NEXT LETTER
                results_array[2] = results_array[2] + 1;
            }

            // 2.d TEST IF LETTER IS O
            else if(data_array[row][col] == 'O')
            {
                //2.d.1 IF TRUE INCREMENTS THE O COUNTER AND GOES TO NEXT LETTER
                results_array[3] = results_array[3] + 1;
            }

            // 2.e TEST IF LETTER IS U
            else if(data_array[row][col] == 'U')
            {
                //2.e.1 IF TRUE INCREMENTS THE U COUNTER AND GOES TO NEXT LETTER

                results_array[4] = results_array[4] + 1;
            }


       }
   }
   //3. TERMINATE
   return results_array;
}



void CounterDisplay(int results_array[5],int){
   int col = 0;
   
   //1. FOR LOOP TO RUN THROUGH THE RESULTS ARRAY
   for(col = 0; col <= 4; col++)
   {
      //2. TEST ARRAY POSITION
      //2.a TEST IF ARRAY PODITION IS EQUAL TOO 0
      if(col == 0)
      {
         //2.a.1 Display A results
         printf("\nThere are %d A's",results_array[col]);
      }

      //2.b TEST IF ARRAY PODITION IS EQUAL TOO 1
      else if(col == 1)
      {
         //2.b.1 Display E results
         printf("\nThere are %d E's",results_array[col]);
      }


      //2.c TEST IF ARRAY PODITION IS EQUAL TOO 2
      else if(col == 2)
      {
         //2.c.1 Display I results
         printf("\nThere are %d I's",results_array[col]);
      }


      //2.d TEST IF ARRAY PODITION IS EQUAL TOO 3
      else if(col == 3)
      {
         //2.d.1 Display O results
         printf("\nThere are %d O's",results_array[col]);
      }                                               
  
      //2.e TEST IF ARRAY PODITION IS EQUAL TOO 4
      else if(col == 4)
      {
         //2.e.1 Display U results
         printf("\nThere are %d U's",results_array[col]);
      }     
   }
   //3. TERMINATE
   return;
}
