

#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    printf("function Dijkstra(Graph, source):\n\n for each vertex v in Graph.Vertices:\n   dist[v] <- INFINITY\n\n   add v to Q\n dist[source] <- 0");
    printf("\n\n  while Q is not empty:\n   u ← vertex in Q with min dist[u]\n   remove u from Q\n\n   for each neighbor v of u still in Q:\n   alt ← dist[u] + Graph.Edges(u, v)\n   dist[v] <- alt\n   prev[v] <- u\n\n return dist[], prev[]");
}
