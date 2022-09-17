#include <math.h>
#include <stdio.h>

int main() {
  int n, reminder, power, decimal = 0, i = 0, m, remindern;
  printf("Enter your binary number: ");
  scanf("%d", &n);
  m = n;
  do {
    reminder = m % 10;
    m = m / 10;
    if (reminder == 1 || reminder == 0)
      continue;
    else {
      printf("Please Enter a binary number !");
      return 0;
    }
  } while (m >= 1);

  do {
    remindern = n % 10;
    power = remindern * pow(2, i);
    decimal = decimal + power;
    n = n / 10;
    i++;
  } while (n >= 1);

  printf("Your decimal number is %d ", decimal);
}
