/* Tap Dance */

#include <stdio.h>
#include <string.h>

void main(void)
{
  char input[101] = {'\0'};
  int i = 0, len = 0;
  int flag = 0;		// 0 means yes
  
  scanf("%s", &input);
  len = strlen(input);
  
  for(i=0; i<len; i+=2)
  {
    if (input[i] == 'L')
    {
      printf("No");
      return;
    }
  }
  for(i=1; i<len; i+=2)
  {
    if (input[i] == 'R')
    {
      printf("No");
      return;
    }
  }
  
  printf("Yes");
}
