#include <stdio.h>
#include <string.h>

int main () {
   const char str[] = "...";
   const char ch = '.';
   char *ret;

   ret = strchr(str, ch);

   printf("String after |%c| is - |%s|\n", ch, ret);
   
   return 0;
}
