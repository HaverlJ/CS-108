/*
Algorithm:
   1. Open the cars.dat file in the read mode and confirm
        you have properly opened the file.
   2. Read the entire contents of the cars.dat file into the
       inventory array.    
   3. Close the cars.dat file
   4. Call function_1( ), which will process the contents of the
       inventory array and will save (write) all the yellow cars that
       cost more the $61,231.57 to a file named
       acceptable_cars.dat   The function call is provided.
   5. Terminate

  ALGORITHM FOR function_1( ):
   //1. Open acceptable_cars.dat into write mode
   //2. Check to confirm that the file is properly opened
   //3. Loop through the inventory array
   //3.a Check if Car is Yellow
   //3.b Check if Car costs more than $61231.57
   //3.c If both tests true, write data to file
   //4. Close the file
   //5.Terminate
*/

#include <stdio.h>
#include <string.h>
typedef  struct  cars {
                                          char  make [ 20 ] ;
                                          char  model [ 20 ] ;
                                          char  color  [ 15 ] ;
                                          int  year ;
                                          double price ;
                                      }  cars ;


//Provide the prototype for function_1( ) below:
void function_1( cars *inventory ,int );

int main (void)
{
    //Local variables declared... add additional variables as required
    cars  inventory [ 25 ] ;
    int col = 0;
    //1. Open the cars.dat file in the read mode and confirm
   //     you have properly opened the file.
   FILE * read_ptr;
   read_ptr = fopen("cars.dat" , "r" ) ;

   if(read_ptr == NULL)
   {
      printf("FILE NOT PROPERLY OPENED");
   }
   else
   {
      printf("File is opened and in read mode\n\n");
   }

    //2. Read the entire contents of the cars.dat file into the
    //    inventory array.
   for ( col = 0 ; col < 25 ; col = col + 1 )
   {
      fscanf( read_ptr , "%s %s %s %d %lf" , &inventory[col].make,&inventory[col].model,
               &inventory[col].color, &inventory[col].year, &inventory[col].price ) ;
   }

    //3. Close the cars.dat file

    fclose(read_ptr);

    //4. Call function_1( ), which will process the contents of the
    //    inventory array and will save (write) all the data about all
    //    the yellow cars that cost more the $61,231.57 to a
    //    file named  acceptable_cars.dat   The function call is provided.

    function_1( inventory , 25 ) ;

   //5. Terminate
   return 0 ;
}

void function_1( cars *inventory ,int col ){
   int i = 0, result = 0;

   //1. Open acceptable_cars.dat into write mode
   FILE * write_ptr;
   write_ptr = fopen("acceptable_cars.dat" , "w" ) ;

   //2. Check to confirm that the file is properly opened
   if(write_ptr == NULL)
   {
      printf("FILE NOT PROPERLY OPENED");
   }
   else
   {
      printf("File is opened and in write mode\n\n");
   }

   //3. Loop through the inventory array
   for(i=0;i<col;i++){
      //3.a Check if Car is Yellow
      result = strcmp(inventory[i].color, "Yellow");
      if(result == 0){
         //3.b Check if Car costs more than $61,231.57
         if(inventory[i].price > 61231.57){
            //3.c If both tests true, write data to file
            fprintf(write_ptr,"%s  %s  %s  %d  %.2lf\n",inventory[i].make,inventory[i].model,
               inventory[i].color, inventory[i].year, inventory[i].price);
         }
      }
   }
   //4. Close the file
   fclose(write_ptr);
   //5.Terminate
   return;
}

      result = strcmp(inventory[i].color, "Yellow");
      if(result == 0){
