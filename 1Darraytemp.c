#include<stdio.h>
#include<stdlib.h>
#define size 7
int main()
{
 float temperature[size];
 int i;
  float sum=0.0;
  int hottest_day=0;
  int coldest_day=0;
  float average_temp;

  for(i=0;i<size;i++){
    printf("enter the temperature for day %d: ", i + 1);
    scanf("%f",&temperature[i]);
    sum += temperature[i];
  }

  average_temp = sum / size;

  for(i=0;i<size;i++){
    if(temperature[i] > temperature[hottest_day])
      hottest_day = i;
    if(temperature[i] < temperature[coldest_day])
      coldest_day = i;
  }

  printf("Average temperature: %.2f\n", average_temp);
  printf("Hottest day: %d with temperature: %.2f\n", hottest_day + 1, temperature[hottest_day]);
  printf("Coldest day: %d with temperature: %.2f\n", coldest_day + 1, temperature[coldest_day]);

  return 0;
}

