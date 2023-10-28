
struct LinkedList
{
  int *data;
  struct LinkedList *next;
};

int a;
int main()
{
  struct LinkedList *k;
  struct LinkedList *k1;
  int p;
  p = 10;
  k->data = malloc(p); // represents a 1-d array
  k->next = k1;

  function<int(struct LinkedList *)> recurse = [&](struct LinkedList *z)
  {
    if (z->next == NULL)
    {
      return 0;
    }
    return recurse(z->next);
  };
  recurse(k);
  return 0;
}