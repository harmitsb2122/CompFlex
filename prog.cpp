// #include <bits/stdc++.h>
// using namespace std;

struct Map
{
  int _map[40];
  int _size;
};

int _INTERNAL_MAP_SIZE;
int main()
{
  _INTERNAL_MAP_SIZE = 40;

  function<int(struct Map *)> map_init = [&](struct Map *map)
  {
    if (map == NULL)
    {
      return 0;
    }
    int i;
    for (i = 0; i < _INTERNAL_MAP_SIZE; i++)
    {
      map->_map[i] = -1;
    }
    map->_size = 0;
    return 1;
  };

  struct Map *map;
  int sizeofint;
  sizeofint = 4;
  int *sz;
  sz = malloc(40 * sizeofint);
  map->_map = sz;
  map_init(map);

  return 0;
}