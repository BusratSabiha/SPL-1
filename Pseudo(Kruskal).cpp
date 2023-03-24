/*

    ∅



        if FIND-SET(u) ≠ FIND-SET(v) then
            F:= F ∪ {(u, v)}
            UNION(FIND-SET(u), FIND-SET(v))
    return F
    */

#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    printf("algorithm Kruskal(G) is\nF:={}\nfor each v E G.V do\n     MAKE-SET(v)\nfor each (u, v) in G.E ordered by weight(u, v), increasing do\n   if FIND-SET(u) != FIND-SET(v) then\n     F:= F ∪ {(u, v)}\n    UNION(FIND-SET(u), FIND-SET(v))\nreturn F");
}
