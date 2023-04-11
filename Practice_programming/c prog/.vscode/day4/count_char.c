#include <stdio.h>

int main()
{
  int blank_char, tab_char, new_line;
  blank_char = 0;
  tab_char = 0;
  new_line = 0;
  char strigh[100] ;
  printf("Number of blanks, tabs, and newlines:\n");
  printf("Input few words/tab/newlines\n");
  gets(strigh);

  int i=0;

  while (strigh[i]!='\0')
  {
    if ( strigh[i] == ' ' ){
      blank_char++;
    }
    if ( strigh[i] == '\t' ){
      tab_char++;
    }
    if ( strigh[i] == '\n' ){
      new_line++;
    }

    i++;
  }  
  printf("blank=%d,tab=%d,newline=%d\n",blank_char,tab_char,new_line);

  return 0;
}