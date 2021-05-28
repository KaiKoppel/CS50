#include <cs50.h>
#include <stdio.h>


int main(void)
{
     int start;
     int end;
     int years;
     int a;
     int b;

     // TODO: Prompt for start sizes
     do
     {
        start = get_int("Enter your start population: ");
     }
     while (start < 9);

     // TODO: Prompt for end size
     do
     {
        end = get_int("Enter your end population: ");
     }
     while (end < start);

     // TODO: Calculate number of years until we reach threshold
     for (years = 0; start < end; years++)
    {
     a = start / 3;
     b = start / 4;
     start = start + a - b;
    }

     // TODO: Print number of years
      printf("Years: %i\n", years);
}