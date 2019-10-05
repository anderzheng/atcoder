/* A - Connection and Disconnection */
/* 13/15 cases passed */

#include <stdio.h>
#include <string.h>

long calcRepeat(char *str, long k)
{
  int i =0, cnt = 0;
  long res =0;
  char buff[1024] = {'\0'};
  int len = strlen(str);
  
  if (len == 1)     // notice: when input a char
    return k/2;
  
  strncpy(buff, str, len);
 
  for(i=1; i<len; i++)
  {
    if(buff[i-1] == buff[i])
    {
      cnt++;
      buff[i] = '\0';// to skip str[i]
    }
  }
  res = (long)cnt * k;    // notice: (long) is needed
  if(buff[0] == buff[len-1])
    res = res+k-1;
  
  return res;
}
void main(void)
{
  char buff[1024] = {'\0'};
  long  kValue = 0;
  long  result = 0;
  
  scanf("%s", buff);
  scanf("%ld", &kValue);    // k<=10000000000
  
  result = calcRepeat(buff, kValue);
  printf("%ld", result);
  
}
