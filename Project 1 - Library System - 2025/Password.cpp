#include <stdio.h>

int main() {
  int pin = 0;
  int tries = 0;

  printf("BANK OF CODECADEMY:\n");
  printf("Enter your PIN: ");
  scanf("%d", &pin);

  tries++;
//allows for multiple guesses, but this only allows 3 guesses since that's the number I put
  while (pin != 1234 && tries < 3) {
    printf("Enter your PIN: ");
    scanf("%d", &pin);
    tries++;
  }

  if (pin == 1234) {
    printf("PIN accepted!\n");
    printf("You now have access.\n");
  }
}