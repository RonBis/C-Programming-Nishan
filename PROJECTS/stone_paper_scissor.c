#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int stonePaperScissor(char yourT, char compT) {
  if (yourT == compT) {
    return 0;
  }
  if (yourT == 's' && compT == 'p') {
    return -1;
  } else if (yourT == 'p' && compT == 's') {
    return 1;
  }
  if (yourT == 'p' && compT == 'c') {
    return -1;
  } else if (yourT == 'c' && compT == 'p') {
    return 1;
  }
  if (yourT == 'c' && compT == 's') {
    return -1;
  } else if (yourT == 's' && compT == 'c') {
    return 1;
  }
}

int main() {
  char yourT, compT;

  printf("CHOOSE 'S' FOR STONE, 'P' FOR PAPER, 'C' FOR SCISSOR: ");
  scanf("%c", &yourT);

  srand(time(0));
  int n = rand() % 100 + 1;
  if (n < 33) {
    compT == 's';
  } else if (n > 33 && n < 66) {
    compT == 'p';
  } else {
    compT == 'c';
  }

  int result = stonePaperScissor(yourT, compT);
  printf("YOU CHOOSED %c AND COMPUTER CHOOSED %c .", yourT, compT);
  if (result == 0) {
    printf("MATCH IS DRAW!\n");
  } else if (result == 1) {
    printf("CONGO! YOU HAVE WON!!\n");
  } else {
    printf("YOU LOOSE!\n");
  }
  return 0;
}
