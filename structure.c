#include <stdio.h>
#include <string.h>
// creating a structure with person var

// typedef struct Person {
//   char Name[50];
//   int citNo;
//   float salary;
// } prsn;

struct Person
{
  char Name[50];
  int citNo;
  float salary;
};

int main()
{

  printf("%d\n", sizeof(struct Person));
  // assigning values to structure person 1
  // prsn person1;
  struct Person person1;
  strcpy(person1.Name, "Nishan Das");
  person1.citNo = 2000;
  person1.salary = 500;

  // printing struct var
  printf("NAME IS: %s\n", person1.Name);
  printf(" CIT NUMBER IS: %d\n", person1.citNo);
  printf("AMOUNT OF SALARY: %.3f\n", person1.salary);

  return 0;
}
