#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "trie.h"


/*
void le_ficheiro(){

}

*/

int  main()
{ 
  trie *t = nova_trie();
  
  insere_trie(t, "maria");
  int a = existe_trie(t, "maria");
  int b = existe_trie(t, "blabla");
  printf("%d\n", a);
  printf("%d\n", b);
  remover_trie(t, "maria");
  //printf("%s\n", "ahjhsja" );
  int c = existe_trie(t, "maria");
  printf("%d\n", c );


 return 0;
}


/*
while (1) {

    scanf ("%s", comando);
    if (!strcmp (comando, "i")) {
      scanf ("%s", v);
      insere(t, v);
      printf ("inseriu %s\n", v);
    }
    else if (!strcmp (comando, "l")) {
      lista_ord(t,v,0);
    }
    else if (!strcmp (comando, "min")) {
      min(t, v);
      printf("min: %s\n", v);
    }
    else if (!strcmp (comando, "q")) {
      exit (0);
    }
}
}
 */ 
