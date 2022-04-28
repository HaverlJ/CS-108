/*
Algorithm:
   1. Open the cars.dat file in the read mode and confirm
        you have properly opened the file.
   2. Read the entire contents of the cars.dat file into the
       inventory array.    
   3. Close the cars.dat file
   4. Call the display( ), which will display the contents of  
       the array to the screen.
   5. Present a menu to the user which communicates different
        sorting options: 1. Sort alphabetically on "Make"
                                      2. Sort alphabetically on "Color" 
                                      3. Sort by price (lowest to highest)
   6. Ask the user to select one of the menu options (either 1, 2. or 3).
   7. Record the user's input
   8. Call bubble_sort( ), which will process the contents of the
       inventory array and sort the array based upon the user's
       input.
   9. Call the display( ), which will display the contents of  
       the array to the screen.       
 10. Call the save_it( ), which will save the sorted array to
        a file named cars_sorted.dat
  11. Terminate
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


//Provide the prototypes for display( ), bubble_sort( ),
//and save_it( ) below:
void save_it(cars inventory[], int);
void bubble_sort  (cars qwerty [ ] , int, int);
void display(cars inventory[] , int ) ;




int main (void)
{
    //Local variables declared... add additional variables as required
    cars  inventory [ 25 ] ;
    int  menu_choice = 0, col = 0 ;

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

    //4. Call the display( ), which will display the contents of  
    //     the array to the screen.
    display( inventory , 25 ) ;
  
   
    //5. Present a menu to the user which communicates different
    //     sorting options: 1. Sort alphabetically on "Make"
    //                                   2. Sort alphabetically on "Color" 
    //                                   3. Sort by price (lowest to highest)

   printf("Sorting Options:\n 1. Alpahbetically on Make\n");
   printf(" 2. Alphabetically on Color\n 3. Lowest to Highest Price\n");
    //6. Ask the user to select one of the menu options (either 1, 2. or 3).   
   printf("Select one of the menu options(1,2,or 3):");
    //7. Record the user's input
   scanf("%d",&menu_choice);
   
    //8. Call bubble_sort( ), which will process the contents of the
    //   inventory array and sort the array based upon the user's
    //   input.
    bubble_sort( inventory , 25 ,  menu_choice ) ;

    //9. Call the display( ), which will display the contents of  
    //   the array to the screen.      
    display( inventory , 25 ) ;

    //10. Call the save_it( ), which will save the sorted array to
    //      a file named cars_sorted.dat
    save_it( inventory , 25 ) ;

    //11. Terminate
    return 0 ;
}


//Provide the definitions for display( ), bubble_sort( ),
//and save_it( ) below:
void  bubble_sort  ( cars qwerty [ ] , int col , int sort_basis ){
   int i, j;
   struct cars temp;

   //1. Check if Sortbasis is 1
   if( sort_basis == 1){
      //1.a Move through bubble sort
      for (i = 0; i < col - 1; i++)
      {
         for (j = 0; j < (col - 1-i); j++)
         {
            //1.b Test to see if next entry make is higher in the alphabet
            if (strcmp(qwerty[j].make,qwerty[j + 1].make) >= 0)
            {
               //1.b.1 If so change around entries
               temp = qwerty[j];
               qwerty[j] = qwerty[j + 1];
               qwerty[j + 1] = temp;

            }
         }
      }
   }

   //2. Check if Sortbasis is 2
   if( sort_basis == 2){
      //2.a Move through bubble sort
      for (i = 0; i < col - 1; i++)
      {
         for (j = 0; j < (col - 1-i); j++)
         {
         //2.b Test to see if next entry color is higher in the alphabet
         if (strcmp(qwerty[j].color,qwerty[j + 1].color) >= 0)
            {
               //2.b.1 If so change around entries
               temp = qwerty[j];
               qwerty[j] = qwerty[j + 1];
               qwerty[j + 1] = temp;

            }
         }
      }
   }

   //3. Check if sort basis is 3
   if( sort_basis == 3){
      //3.a Move through bubble sort
      for (i = 0; i < col - 1; i++)
      {
         for (j = 0; j < (col - 1-i); j++)
         {
            //3.b Test to see if next entry is less expensive
            if (qwerty[j].price > qwerty[j + 1].price)
            {
               //3.b.1 If so change around entries
               temp = qwerty[j];
               qwerty[j] = qwerty[j + 1];
               qwerty[j + 1] = temp;
            } 
         }
      }
   }
   return;
}

void display(cars inventory[], int col){
   int i = 0;
   //1. Move throught the array
   for(i=0;i<col;i++){
      //2. Display the array
      printf("%s  %s  %s  %d  %.2lf\n",inventory[i].make,inventory[i].model,
              inventory[i].color,inventory[i].year,inventory[i].price);

   }
   return;
}

void save_it(cars inventory[] , int col ){
   int i = 0;

   //1. Open acceptable_cars.dat into write mode
   FILE * write_ptr;
   write_ptr = fopen("cars_sorted.dat" , "w" ) ;

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
      fprintf(write_ptr,"%s  %s  %s  %d  %.2lf\n",inventory[i].make,inventory[i].model,
      inventory[i].color, inventory[i].year, inventory[i].price);
   }
   //4. Close the file
   fclose(write_ptr);
   //5.Terminate
   return;

}
