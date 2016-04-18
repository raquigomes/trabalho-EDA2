#define

#define

#define


typedef struct btree btree;

struct btree {
  int leaf; 
  int n; 
  char *key[maxkeys]; 
  struct btree *child[maxchildren];
};

btree *btree_nova();
void btree_insere();
void btree_destroy();

int btree_existe();
