import networkx as nx

def kruskal(graph):
    mst = []
    uf = nx.utils.UnionFind()
    edges = sorted(graph.edges(data=True), key=lambda x: x[2]['weight'])
    for u, v, d in edges:
        if uf[u] != uf[v]:
            uf.union(u, v)
            mst.append((u, v, d['weight']))
    return mst


# Create an empty graph
graph = nx.Graph()

# Add vertices to the graph
graph.add_nodes_from([0, 1, 2, 3, 4])

# Add edges to the graph
graph.add_edge(0, 1, weight=2)
graph.add_edge(0, 2, weight=3)
graph.add_edge(1, 2, weight=1)
graph.add_edge(1, 3, weight=4)


# Find the minimum spanning tree using Kruskal's algorithm
mst = kruskal(graph)

# Print the edges in the minimum spanning tree
print(mst)
