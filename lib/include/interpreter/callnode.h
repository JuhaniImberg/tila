#ifndef CALLNODE_H
#define CALLNODE_H

#include "tila.h"

/**
 * @brief Creates a new calling node, a node that calls its identifier with a
 *        list of arguments
 * @param What The node that's value will be called
 * @param token The token that represents the start of this node
 * @param args A list of arguments that get passed to the function that's called
 */
struct Node *CallNode_new(struct Node *what, struct Token *token,
                          struct Vector *args, struct GC *gc);

/**
 * @brief Prints the representation of the function call
 */
void CallNode_repr(struct Node *, struct Environment *);

/**
 * @brief Executes the calling of the function this call points to with the
 *        arguments given
 */
void CallNode_get_value(struct Node *, struct Environment *);

#endif
