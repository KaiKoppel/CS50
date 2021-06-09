
#include <cs50.h>
#include <math.h>
#include <stdio.h>

// Greedy algorithm example

int main(void)
{
   float change;
   int coins_used = 0;



   // Prompt user for amount of change in dollar
   do
   {
       change = get_float("Cash owed: ");
   }
   // Validate input:  No negative change allowed.
   while (change < 0);



   // Convert Change from dollars into cents and round off
   change = round(change * 100);
   printf("Your change is: %.0f cents\n", change);



   // Always use the largest coin possible first
   // Process quarters
   while (change >= 25)
   {
       coins_used++;
       change = change - 25;
   }
   // Process tens
   while (change >= 10)
   {
       coins_used++;
       change = change - 10;
   }
   // Process fives
   while (change >= 5)
   {
       coins_used++;
       change = change - 5;
   }
   // Process ones
   while (change >= 1)
   {
       coins_used++;
       change = change - 1;
   }

   // Print final coins_used
   printf("Change owed:\n");
   printf("%d\n", coins_used);

}