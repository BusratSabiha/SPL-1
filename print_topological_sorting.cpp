#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    printf("DFS(V, E)\n\nfor each u E V\n do color[u] <- WHITE\n  prev[u] <- NIL\ntime <- 0\nfor each u E V\n do if color[u] = WHITE\n  then DFS-VISIT(u)");
    printf("\n\nDFS-VISIT(U)\n\ntime <- time+1\nd[u] <- time\nfor each v E Adj[u]\n  do if color[v] = WHITE\n   then prev[v] <- u\n    DFS-VISIT(v)\ncolor[u] <- BLACK\ntime <- time + 1\nf[u] <- time");


}
