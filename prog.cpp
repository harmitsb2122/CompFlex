int f(int a, int b)
{
  return f(a + b, a);
}

int a;
struct
{
  int a;
  int b;
} my;

int main()
{
  struct my;
  my.a = 1;
  // int a, b;
  // int *k;
  // int c[10];
  // c[2] = k;
  // a = 1;
  // a = -1;
  // b = 1;
  // f(a, b);
  // int *d;
  // d = malloc(40);
  // int i, n;
  // n = 10;
  // for (i = 0; i < n; i++)
  // {
  //   a = a + b;
  //   if (a == 1)
  //   {
  //     continue;
  //   }
  //   else
  //   {
  //     break;
  //   }
  // }
  return 0;
}