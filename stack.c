#include <stdlib.h>

typedef struct Polynode Polynode;
typedef struct Polystack Polystack;

struct Polynode {
    int power;
    int multiplier;
    Polynode *next;
};

struct Polystack {
    Polynode *head;
};

void plstk_push(Polynode *plnode, Polystack *plstack) {
    if(plstack -> head == NULL) {
        plstack -> head = plnode;
        return; 
    }
        
    plnode-> next = plstack -> head;
    plstack -> head = plnode;   
}

Polynode *plstk_pop(Polystack *plstack) {
    if(plstack -> head == NULL) return; 
    if(plstack -> head -> next == NULL) {
        free(plstack->head);
        plstack->head = NULL;
        return;
    }

    Polynode *poped_node = plstack -> head;
    free();
    plstack -> head = next;
}

Polynode *create_polynode(int power, int multiplier) {
    Polynode *plnode = malloc(sizeof(Polynode));
    plnode -> power = power;
    plnode -> multiplier = multiplier;
    plnode -> next = NULL;

    return plnode;
}

Polystack *create_polystack(int length, int *multipliers) {
    Polystack *plstack = malloc(sizeof(Polystack));
    for(int i = 0; i < length; i++) {
        
    }
}



