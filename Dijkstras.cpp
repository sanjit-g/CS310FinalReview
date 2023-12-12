/**
 * QUESTIONS:
 * 
 * 1. In Dijkstra's algorithm, what data structure do we
 *    use to traverse our nodes in the proper order?
 
 Min-Heap/Priority Queue
 
 * 
 * 2. Could we perform Dijkstra's algorithm if our graph
 *    has negative edge weights?

 Yes
 
 * 
 * 3. What values does each node store in order to perform
 *    dijkstra's algorithm on a graph?

 value, predecesor, distance from start, visited
 
 * 
 * 4. In Dijkstra's algorithm, we have three sub-operations
 *    that we analyzed to help us determine dijkstra's time
 *    complexity. For each of the operations below, explain
 *    what each one is doing:
 *      a) Init-single-source
           -sets all distances to infinity and predecesors to null (O(V))
 *      b) Q = G.V
           -insert all of the verticies into a Priority Queue
 *      c) Extract-min
           -pull the vertex
 *      d) Relax
 * 
 * 5. For each of the sub-operations above, list each of their
 *    time complexities and explain why that is the case.
 Relax itsef is constant, but you have to reorder the priority queue, so in total its O(LogV)
 SSI is O(V)
 Q = G.V is O(V)
 Extract-min is O(LogV)
 Relax is O(ELogV)
 Since Extract occurs for each vertex, you get time complexity of VLogV
 Since relax is performed for every every edge, it is ELogV

 Thus, overall time complexity is VLogV + ELogV
 
 * 
 * 6. What is the overall time complexity of Dijkstra's algorithm?
 *    why is that the case?
 * 
 * 7. After performing Dijkstra's algorithm, how can we obtain the
 *    path from the source node S to the destination node D?
 *    
 * 8. How would the time complexity change for each sub operation
 *    if we used a sorted list instead of a priority queue?
 *  
 **/
