#include <iostream>
#include <vector>

using namespace std;

class Graph
{
private:
    int vertex, edges;
    // instead of using vector<int>v[vertex](array of vector) i am using vector<vector<int>>v (vector of vector)
    // because in array of vector we have to define the size of array at compile time but in vector of vector we can define the size at run time.
    vector<vector<int>>ajdlist;

public:
    Graph(int v, int e){
        vertex = v;
        edges = e;
        ajdlist.resize(vertex);
    }
    void create_Graph(){
        for (int i = 0; i < edges; i++)
        {
            int u, v;
            cin >> u >> v;
            ajdlist[u].push_back(v);
            ajdlist[v].push_back(u);
        }
    }
    void show_Graph(){
        for (int i = 0; i < vertex; i++)
        {
            cout << i << "->";
            for (int j = 0; j < ajdlist[i].size(); j++)
            {
                cout << ajdlist[i][j] << " ";
            }
            cout << endl;
        }
    }

};

int main()
{
    int v, e;
    cout<< "Enter the number of vertices and edges: ";
    cin >> v >> e;
    Graph g(v, e);
    g.create_Graph();
    g.show_Graph();
    return 0;
}