/*   ALGORITHM
1.Greet user and state program purpose
2.Prompt user to enter number of people at the party
3.Read user unput for numPeople
4.Prompt user to input slices per person
5.Read user input for avgSlices
6.Prompt user to enter slices per pizza
7.Read user input for slicesPerPizza
8.Calculate number of pizzas needed 
(Formula: numPeople * avgslices / slicesPerPizza)
9.Display number of pizzas needed to screen
10.Sign off with user
11.Terminate the program
*/

#include<stdio.h>

int main(void)
{

//INITIALIZING LOCAL VARIABLES FOR LATER USE
     double numPeople = 0.0, avgSlices = 0.0, slicesPerPizza = 0.0,
            numPizza = 0.0;

//1.Greet user and state program purpose
     printf("\nHere to help calculate how many pizzas you need!");

//2.Prompt user to enter number of people at the party
     printf("\nHow many people will be at the party?:");

//3.Read user unput for numPeople
     scanf("%lf",&numPeople);

//4.Prompt user to input slices per person
     printf("\nHow many slices will each person eat?:");

//5.Read user input for avgSlices
     scanf("%lf",&avgSlices);

//6.Prompt user to enter slices per pizza
     printf("\nHow many slices are in one pizza?:");

//7.Read user input for slicesPerPizza
     scanf("%lf",&slicesPerPizza);
  
//8.Calculate number of pizzas needed 
//(Formula: numPeople * avgslices / slicesPerPerson)
     numPizza = numPeople * avgSlices / slicesPerPizza;

//9.Display number of pizzas needed to screen
     printf("\nYou will need %.2lf pizzas for your party",numPizza);

//10.Sign off with user
     printf("\nHave a good party");

//11.Terminate the program
     return 0;


}
