# Set-Enhanced Dijkstra Pathfinding-

Dijkstra's algorithm allows us to find the shortest path between any two vertices of a graph. It differs from the minimum spanning tree because the shortest distance between two vertices might not include all the vertices of the graph.

Input/Output of code – 
enter vertices count: 4
enter edges count: 4

etner all nodes and weight between two nodes(u,v,w):
1 2 24
1 4 20
3 1 3
4 3 12

Explanation of working of the code –

Distance between 1 and 2 is 24
Distance between 1 and 4 is 20
Distance between 3 and 1 is 3
Distance between 4 and 1 is 12

Edge relaxation process

Suppose u = 1, v = 2, d(u, v) = 24

d= distance 

d(u) = 0; distance from source to source is 0.

Initial d(v) = inf;

So, if  d(v) > d(u, v) + d(u) : then 
 d(v) = d(u,v) + d(u);
 

example – 
if d(2) > d(1,2) + d(1) then
d(2) = d(1,2) + d(1) ? d(2) = 24 + 0 = 24
            
        
Using this relaxation process we find all the shortest distances:

So, our final result will be this 



Shortest distance from node 1 to 1: 0

Shortest distance from node 1 to 2: 24

Shortest distance from node 1 to 3: 3 

Shortest distance  from node 1 to 4: 15


