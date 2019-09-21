/* Weather Prediction */

#include<stdio.h>
#include<string.h>

#define   WEATHER_SIZE	3
#define	  WEATHER_STR_LEN  8
void main(void)
{
  int i = 0;
  char weather[WEATHER_SIZE][WEATHER_STR_LEN] = {"Sunny", "Cloudy", "Rainy"};  /* notice: 2D array */
  char input[16] = {'\0'};
  
  scanf("%s", &input);   /* notice: scanf , and & */
  
  for(i=0; i<WEATHER_SIZE; i++)
  {
    if (strcmp(input, weather[i]) == 0)
    {
      printf("%s", weather[(i+1)%WEATHER_SIZE]);
      break;
    }
  }
  if (i==WEATHER_SIZE)
  {
    printf("unknown");
  }
  
  return;
}
