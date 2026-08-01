# DFS of Graph

## Problem Statement

Given a connected undirected graph containing `V` vertices represented by a 2D adjacency list `adj[][]`, where `adj[i]` contains all vertices connected to vertex `i`, perform a **Depth First Search (DFS)** traversal starting from vertex `0`.

The traversal must visit neighbors in the **same left-to-right order** as they appear in the adjacency list.

Return a list containing the DFS traversal.

---

## Examples

### Example 1

**Input**
```text
adj = [[2, 3, 1], [0], [0, 4], [0], [2]]
```

**Output**
```text
[0, 2, 4, 3, 1]
```

**Explanation**

DFS traversal:

- Visit `0`
- Visit `2`
- Visit `4`
- Backtrack to `2`
- Backtrack to `0`
- Visit `3`
- Backtrack to `0`
- Visit `1`

Traversal order:

```text
0 → 2 → 4 → 3 → 1
```

---

### Example 2

**Input**
```text
adj = [[1, 2], [0, 2], [0, 1, 3, 4], [2], [2]]
```

**Output**
```text
[0, 1, 2, 3, 4]
```

**Explanation**

DFS traversal:

```text
0 → 1 → 2 → 3 → 4
```

---

## Constraints

- `1 ≤ V = adj.size() ≤ 10^4`
- `0 ≤ adj[i][j] ≤ 10^4`

---

# Approach

DFS explores a graph by going as deep as possible before backtracking.

1. Start DFS from vertex `0`.
2. Mark the current node as visited.
3. Add it to the answer.
4. Recursively visit every unvisited neighbor in the given order.
5. Continue until all reachable vertices are visited.

---

# Algorithm

1. Create a `visited` array initialized to `false`.
2. Create an empty result vector.
3. Define a recursive DFS function:
   - Mark node as visited.
   - Store it in the result.
   - Traverse all adjacent vertices.
   - Recursively visit every unvisited neighbor.
4. Call DFS starting from node `0`.
5. Return the result.

---

# Complexity Analysis

- **Time Complexity:** `O(V + E)`
- **Space Complexity:** `O(V)`
  - Visited array
  - Recursive call stack (worst case)

---

# Key Points

- DFS uses **recursion (or a stack)**.
- Always mark a node **before** visiting its neighbors.
- Traverse neighbors **in the given order**.
- Since the graph is connected, starting from node `0` visits every vertex.

---

## Topics

- Graph
- Depth First Search (DFS)
- Recursion
- Adjacency List