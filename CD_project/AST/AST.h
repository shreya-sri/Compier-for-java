#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node
  {
    struct node *left;
    struct node *right;
    char *value;
  } node;
  
typedef struct asciinode_struct asciinode;

struct asciinode_struct
{
  asciinode * left, * right;

  //length of the edge from this node to its children
  int edge_length; 
    
  int height;      

  int lablen;

  //-1=I am left, 0=I am root, 1=right   
  int parent_dir;   
                         
  //max supported unit32 in dec, 10 digits max
  char label[11];  
};

node *createnode(node *left, node *right, char *value);
asciinode * build_ascii_tree_recursive(node* AST);
asciinode * build_ascii_tree(node* AST) ;
void compute_lprofile(asciinode *node, int x, int y) ;
void compute_rprofile(asciinode *node, int x, int y) ;
void compute_edge_lengths(asciinode *node) ;
void print_level(asciinode *node, int x, int level) ;
void print_ascii_tree(node* AST) ;

