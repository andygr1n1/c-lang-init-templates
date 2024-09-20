#include <stdio.h>
#include <cs50.h>

// const int ARRAY[] = {13, 23, 42};

const int N = 3;

float average(int array[], int size);
int main(void)

{
   int scores[N];

   for (int i = 0; i < N; i++)
   {
      scores[i] = get_int("Score %d: ", i + 1);
   }

   // printf("Average: %f\n", (scores[0] + scores[1] + scores[2]) / (float)N);
   printf("Average: %f\n", average(scores, N));
}

float average(int array[], int size)
{
   int sum = 0;
   for (int i = 0; i < size; i++)
   {
      sum += array[i];
   }
   return sum / (float)size;
}