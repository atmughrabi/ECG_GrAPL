#ifndef GRAPHGRID_H
#define GRAPHGRID_H

#include <stdint.h>

#include "graphConfig.h"
#include "edgeList.h"
#include "grid.h"


// A structure to represent an adjacency list
struct  GraphGrid
{

    uint32_t num_edges;
    uint32_t num_vertices;
    uint32_t avg_degree;
#if WEIGHTED
    float max_weight;
#endif


    struct Grid *grid;

    uint32_t *offset_matrix;

};

void  graphGridReset(struct GraphGrid *graphGrid);
void  graphGridPrint(struct GraphGrid *graphGrid);
struct GraphGrid *graphGridNew(struct EdgeList *edgeList);
void   graphGridFree(struct GraphGrid *graphGrid);
void   graphGridPrintMessageWithtime(const char *msg, double time);
struct GraphGrid *graphGridPreProcessingStep (struct Arguments *arguments);

#endif