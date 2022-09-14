#include <stdio.h>

int main() {
  FILE * fp;
  fp=fopen("test1.txt","w");
  int no,num;
  printf("PLEASE ENTER A NUMBER: ");
  scanf("%d", &no);
  // fprintf(fp,"%s","PLS ENTER A NUM:");
  fprintf(fp,"%d",no);
  fclose(fp);
  //Reading the same number
  fp = fopen("test1.txt", "r");
  fscanf(fp,"%d",&num);
  printf("%d",num);
  return 0;
}
