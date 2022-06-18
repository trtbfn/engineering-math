#ifndef PLSTACK_HEADER 
#define PLSTACK_HEADER 

typedef struct PolyNode PolyNode;
typedef struct PolyStack PolyStack;
typedef struct PolyStackNode PolyStackNode;

void plstk_push(PolyNode *plnode, PolyStack *plstack);
PolyNode *plstk_pop(PolyStack *plstack);
PolyNode *plstk_create_polynode(int power, int multiplier);
PolyStackNode *plstk_create_polystacknode(PolyNode *plnode); 
PolyStack *plstk_create_polystack(int length, PolyNode *polynodes);

#endif