A. Implementar funções em C para manipular listas lineares de elementos inteiros; definir um novo tipo (com typedef): IntegerList. A assinatura de cada função deve ser igual a que está especificada a seguir.

int isEmpty(IntegerList *) /* returns 0 if the argument is a non-empty list, 1 otherwise; */

int size(IntegerList *) /* returns the size of the list; */

void insertElement(IntegerList **, int) /* insert node with integer element at the end of the list; */

void printList(IntegerList *) /* prints the integer value of each of the list elements. */

B. Colocar o código no GitHub, em um repositório seu, individual, chamado de "matd04", na subpasta (folder) "atividades/listas" (estrutura matd04/atividades/listas/) . Usar um arquivo .h para definir tipos e protótipos de funções usadas (ver https://github.com/christinaflach/aulas/blob/master/matd04/atividades/listas/IntegerList.h).

Obs.: Não é preciso disponibilizar a função "main".


#include <stdio.h>
#include <stdlib.h>
  
// A linked list node
typedef struct Node {
  int data;
  struct Node * next;
} IntegerList;

int main(){
  int x = 0;
  int *n;
  n = &x;
  void printList(IntegerList *n);
  IntegerList *head = NULL;
  head = (IntegerList*)malloc(sizeof(IntegerList));
  head -> data = 90;
  if(head)
    printList(head);

}
//Imprime a Lista
void printList(IntegerList *n)
{ 
    while (n != NULL) { 
        printf(" %d ", n->data); 
        n = n->next;
    } 
} 

//Lista Vazia
int isEmpty(IntegerList *p){
  if(p == NULL)
    return 0;
  else
    return 1;
}
