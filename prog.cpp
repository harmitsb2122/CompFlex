int f(int a)
{
  int k;
  return a;
}
int main()
{
  int a;
  a = 1;
  function<int(int, int)> fi = [&](int a, int b)
  {
    int c[10];
    c[7] = a + b;

    return c[7];
  };
  int j;
  j = 1;

  fi(0, 1);
  return 0;
}