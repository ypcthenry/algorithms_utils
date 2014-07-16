#include<stdio.h>
#include<max_unrepeated_substr.h>
int main()
{
  char *s1 = "abcdbfg";
  Maxnode max = {0};
  max = midstring(s1,7);
  int firstlocation = max.location - max.Maxcount + 1;
  char *p2 = s1;
  for(int i = firstlocation;i < max.location + 1; i++)
    printf("%c",*(p2+i));
  printf("\n");
  return 0;
}
