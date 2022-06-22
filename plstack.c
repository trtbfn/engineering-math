#include <stdlib.h>
#include "plstack.h"

// struct PolyNode {
//     int power;
//     int multiplier;
// };

// struct PolyStackNode {
//     PolyNode *node;
//     PolyStackNode *next;
// };

// struct PolyStack {
//     PolyStackNode *head;
// };

void plstk_push(PolyNode *plnode, PolyStack *plstack) {
    PolyStackNode *plstknode = malloc(sizeof(PolyStackNode));
    plstknode -> node = plnode;
    plstknode -> next = NULL;

    if(plstack -> head == NULL) {
        plstack -> head = plstknode;
        return; 
    }
        
    plstknode -> next = plstack -> head;
    plstack -> head = plstknode;   
}

PolyNode *plstk_pop(PolyStack *plstack) {
    if(plstack -> head == NULL) return NULL; 

    PolyNode *poped_node = NULL;
    if(plstack -> head -> next == NULL) {
        poped_node = plstack -> head -> node;
        free(plstack->head);
        plstack->head = NULL;

        return poped_node;
    }

    poped_node = plstack -> head -> node;
    PolyStackNode *next = plstack -> head -> next;
    free(plstack -> head);
    plstack -> head = next;

    return poped_node;
}

PolyNode *plstk_create_polynode(int power, int multiplier) {
    PolyNode *plnode = malloc(sizeof(PolyNode));
    plnode -> power = power;
    plnode -> multiplier = multiplier;

    return plnode;
}

PolyStackNode *plstk_create_polystacknode(PolyNode *plnode) {
    PolyStackNode *plstknode = malloc(sizeof(PolyStackNode));
    plstknode -> node = plnode;
    plstknode -> next = NULL;

    return plstknode;
}

PolyStack *plstk_create_polystack(int length, PolyNode *polynodes) {
    PolyStack *plstack = malloc(sizeof(PolyStack));
    for(int i = 0; i < length; i++) 
        plstk_push(
            plstk_create_polystacknode(&polynodes), 
            plstack
        );
        
    return plstack;
}



