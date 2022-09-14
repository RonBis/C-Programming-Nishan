#include<stdio.h>

int main()
{
  FILE * fp;
  char ch;
  fp=fopen("demo.txt","r");
  while (((ch=getc(fp))!=EOF))
  {
      // printf("%c",ch);
      putc(ch,stdout);
  }
  fclose(fp);
  return 0;
}
