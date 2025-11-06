#if defined(__linux__)
#include "/home/codeleaded/System/Static/Container/Graph.h"
#elif defined(_WINE)
#include "/home/codeleaded/System/Static/Container/Graph.h"
#elif defined(_WIN32)
#include "F:/home/codeleaded/System/Static/Container/Graph.h"
#elif defined(__APPLE__)
#error "Apple not supported!"
#else
#error "Platform not supported!"
#endif

int main(){

    Graph graph = Graph_New(ADJACENCY_MATRIX);

    Graph_Push(&graph,"FIRT",sizeof("FIRT"));
    Graph_Push(&graph,"SECD",sizeof("SECD"));
    Graph_Push(&graph,"THID",sizeof("THID"));
    Graph_Push(&graph,"FORT",sizeof("FORT"));
    Graph_Push(&graph,"FITH",sizeof("FITH"));

    Graph_SetEdgeNoDir(&graph,0,1,60);
    Graph_SetEdgeNoDir(&graph,0,2,61);
    Graph_SetEdgeNoDir(&graph,0,3,62);

    Graph_SetEdge(&graph,1,1,99);
    Graph_SetEdgeNoDir(&graph,1,2,63);
    Graph_SetEdgeNoDir(&graph,1,4,64);

    Graph_SetEdgeNoDir(&graph,2,3,65);
    Graph_SetEdgeNoDir(&graph,2,4,66);

    Graph_Print(&graph);

    Graph_Free(&graph);

    return 0;
}