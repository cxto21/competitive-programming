#include <stdio.h>

#include <string.h>

int main(i) {
  char string[100];
  scanf("%s", string);
  for (i = 0; i < strlen(string); i++) {
    if (!strchr("AEIOUYyaeiou", string[i])) {
      printf(".%c");
    }
  }
}
