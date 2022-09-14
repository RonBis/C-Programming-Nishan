#include <stdio.h>
#include <string.h>
int main() {
  // there are mainly two ways to define a string in C
  // char demo[]={'N','I','S','H','A','N','\0'};//Method 1
  // char demo[]="NISHAN"; //Method 2
  /*
      '\0' is known as NULL character it is automatically inserted into the end
     of the string
  */

  // Reading and writing a string using printf and scanf
  // string declaration
  // char Name1[30]="Nishan";
  // printf("\nPlease enter your name:");
  // scanf("%s",Name);

  // printing the user input string
  //  printf("Hi %s",Name);

  // Reading and writing a string using gets and puts
  //  puts("Pleasae enter your name:");
  //  gets(Name);
  //  puts(Name);

  // C built in string function
  //  1.strlen :It returns the length of the string including white space
  //  printf("Length of the string %s=%d",Name,strlen(Name));

  // 2. strcmp: it compares two strings and return an int value
  //  a. if both the strings are equal it returns 0
  //  b. if str1<str2 it returns negative val
  //  c. if str1>str2 it returns positive val

  // char Name2[30]="Nishan";

  // if(strcmp(Name1,Name2)==0)
  // {
  //     printf("Both the strings are equal");
  // }
  // else
  // {
  //     printf("Both the strings are different!!");
  // }

  // 3.strcat function
  //  It concatenates two strings and returns the concatenated string
  //  char fname[10]="Nishan ";
  //  char Lname[10]="Das";
  //  strcat(fname,Lname);
  //  printf("your Name:%s",fname);

  // 4.strcpy function :It copies str2 into str1 including the end char
  //  char s1[30]="demo1";
  char s2[50] = "I am going to be copied into s1";
  // strcpy(s1,s2);
  // printf("After copying the string=%s",s1);

  // 5.strchr function
  //  printf("%s",strchr(s2,'b'));
  // 6. strstr function searches for a string instead of a char

  // printf("%s",strstr(s2,"be"));

  // 7. strrev It reverses a string
  // printf("Reversed String:%s",strrev(s2));
  // 8. strset function replaces all the characters of a string
  // printf("%s",strset(s2,'*'));

  // 9. strupr :it converts the string to upper case
  //  printf("%s",strupr(s2));

  // 10. strlwr:it converts the string to lower case
  //  printf("%s",strlwr(s2));

  // 11.strdup: It creates a duplicated string
  //  char *Name="Nishan";
  //  char *Name2;
  //  Name2=strdup(Name);
  //  printf("Duplicated string:%s",Name2);
  return 0;
}
