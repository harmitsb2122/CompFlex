int ALPHABET_SIZE = 26;

// trie node
struct TrieNode
{
  struct TrieNode *children[ALPHABET_SIZE];

  // isEndOfWord is 1 if the node represents end of a word
  int isEndOfWord;
};

// Returns new trie node (initialized to NULLs)
struct TrieNode *getNode()
{
  struct TrieNode *pNode;
  pNode = malloc(sizeof(TrieNode));

  pNode->isEndOfWord = 0;

  int i;
  for (i = 0; i < ALPHABET_SIZE; i++)
  {
    pNode->children[i] = NULL;
  }

  return pNode;
}

int main()
{
  struct TrieNode *root;
  root = getNode();
  return 0;
}