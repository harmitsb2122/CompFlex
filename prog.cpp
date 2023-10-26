
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
  k->data = malloc(40); // represents a 1-d array
  k->next = k1;

  function<int(struct LinkedList *)> recurse = [&](struct LinkedList *z)
  {
    if (z->next == NULL)
    {
      return 0;
    }
    recurse(z->next);
  };
  recurse(k);
  return 0;
}