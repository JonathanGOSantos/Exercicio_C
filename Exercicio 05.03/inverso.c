#include <stdio.h>

int main()
{
  int nums[5], i;

  for(i = 0; i < 5; i++)
  {
    printf("Digite um numero: ");
    scanf("%d", &nums[i]);
  }

  for (i = 4; i >= 0; i--)
  {
    printf("%d\n", nums[i]);
  }
}