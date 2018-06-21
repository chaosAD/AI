#include <stdio.h>
#include "AI.h"

int stringCompare(char *str1, char *str2) {
  return 0;
}

int copySubstring(char *target, char *source, int startIndex, int length) {
  int i;
  for(i = 0; i < length; i++) {
    *target = source[startIndex++];
  }
}

int getWord(char **strPtr, int *length) {
  int i = 0;
  char *ptr, c = **strPtr;
  // Skip all white spaces
  while(c != '\0' && c != ' ') {    
    *strPtr++;
    c = **strPtr;    
  }
  ptr = strPtr - 1;
  c = **strPtr;
  for(i = 0; c != ' ' && c != NULL; i++, c = **strPtr);
  *length = i; 
  return ptr;
}  

char *speakToAiMachine(char *msg) {
  return NULL;
}