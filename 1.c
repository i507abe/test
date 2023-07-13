#include <stdio.h>

int main(void)
{
  int n;

  printf("n = ");
  scanf("%d", &n);

  if( (n & 1) == 0 ){     //（n & 1）とすることで演算の優先順位を明確にした。
    printf("%d は偶数です\n", n);
  }
  
  return 0;
}
