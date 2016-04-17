
#define Maxel 'z'

#define Minel 'a'

#define Nel (Maxel - Minel +1)

/* nomear tipos*/

typedef struct trie trie;

/* definir tipos*/

struct trie {
	int existe; 
	trie *prox[Nel];
	trie *father;
};


/* assinatura funcoes*/

trie *nova_trie();
void insere_trie(trie *t, char *chave);
void remover_trie(trie *t, char *chave);
void destroy_trie(trie *t);

//void lista_ord(trie *t, char *cadeia, int n);
//void min(trie *t, char *cadeia);
//void max(trie *t, char *cadeia);
int existe_trie(trie *t, char *cadeia);
