# Breadth First Search (BFS) of Graph

🔗 **Problem Link:** https://www.geeksforgeeks.org/problems/bfs-traversal-of-graph/1?page=1&difficulty%5B%5D=0&category%5B%5D=Graph&sortBy=submissions

---

## Problem Statement

Given a connected undirected graph containing **V** vertices, represented by a **2D adjacency list** `adj[][]`, where each `adj[i]` contains the list of vertices connected to vertex `i`, perform a **Breadth First Search (BFS)** traversal starting from **vertex 0**.

Return a list containing the BFS traversal of the graph.

> **Note:** Traverse the neighbors in the exact order they appear in the adjacency list.

---

## Examples

### Example 1

**Input**

```text
adj[][] = [[2,3,1],[0],[0,4],[0],[2]]
```

**Output**

```text
[0,2,3,1,4]
```

**Explanation**

Traversal order:

```text
0 → 2 → 3 → 1 → 4
```

- Start at vertex `0`
- Visit neighbors of `0` in order: `2`, `3`, `1`
- Then visit the unvisited neighbor of `2`, which is `4`

---

### Example 2

**Input**

```text
adj[][] = [[1,2],[0,2],[0,1,3,4],[2],[2]]
```

**Output**

```text
[0,1,2,3,4]
```

**Explanation**

Traversal order:

```text
0 → 1 → 2 → 3 → 4
```

- Start from `0`
- Visit `1` and `2`
- From `2`, visit the remaining unvisited neighbors `3` and `4`

---

## Constraints

- `1 ≤ V = adj.size() ≤ 10^4`
- `0 ≤ adj[i][j] ≤ 10^4`

---

# Approach

Use **Breadth First Search (BFS)** with a queue.

### Algorithm

1. Create a `visited` array of size `V` initialized to `false`.
2. Create an empty queue.
3. Mark vertex `0` as visited and push it into the queue.
4. While the queue is not empty:
   - Pop the front node.
   - Add it to the answer.
   - Traverse all its adjacent vertices.
   - If a neighbor is not visited:
     - Mark it visited.
     - Push it into the queue.
5. Return the BFS traversal.

---

## Time Complexity

**O(V + E)**

Where:

- `V` = Number of vertices
- `E` = Number of edges

---

## Space Complexity

**O(V)**

Used for:

- Visited array
- Queue

---

## BFS Traversal Example

For the graph:

```text
      0
    / | \
   2  3  1
   |
   4
```

Traversal:

```text
Queue: [0]

Visit 0
Queue: [2,3,1]

Visit 2
Queue: [3,1,4]

Visit 3
Queue: [1,4]

Visit 1
Queue: [4]

Visit 4
Queue: []
```

Final BFS:

```text
0 2 3 1 4
```