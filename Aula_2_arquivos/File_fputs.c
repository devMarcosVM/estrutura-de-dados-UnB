/* Receives strings from keyboard and writes them to file */
#include <stdio.h>
int main()
{
  FILE *fp;
  char s[100];
  fp = fopen ( "POEM.TXT", "w" ) ;
  if ( fp == NULL )
  {
    puts ( "Cannot open file" ) ;
    exit(0) ;
  }
  printf ( "\nEnter a few lines of text:\n" ) ;
  scanf("%s",s);
  while (strcmp(s,"fim") != 0)
  {
    printf("%d\n", strlen(s));
    fputs ( s, fp ) ;
    fputs ( "\n", fp ) ;
    scanf("%s",s);
  } 
  fclose ( fp );
  return 0;
}