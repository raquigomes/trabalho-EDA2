#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "btree.h"

btree new_node()
{
    return ((BTREE)malloc(sizeof(NODE)));
}


btree btree_nova(DATA a[], int i, int size)
{
    if (i >= size)
        return NULL;
    else
        return(init_node(a[i],
    create_tree(a, 2*i+1, size),
    create_tree(a, 2*i+2, size)));
}

void btree_nova(btree **t); 


void btree_insere(btree **t, char k[]);


void btree_destroy();


int pesquisa(btree *t, int v)
{
  int i;
  for (i=0; i < t->n; i++) {
    if (t->chave[i] == v) {
      return 1;
    }
    else if (t->chave[i] > v) { 
      break;
    }
  }
  
  if (t->folha) return 0;
  else return pesquisa(t->filho[i], v);
}
