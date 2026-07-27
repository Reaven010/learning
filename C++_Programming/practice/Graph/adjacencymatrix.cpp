#include<iostream>
#include<vector>

using namespace std;

class Graph{
    int v,u;
    vector<vector<bool>> matrix ;
    public:
    
    void get_parameters(int v,int u){
        this->v=v;
        this->u=u;
    }

    void create_matrix(){
        matrix.resize(v,vector<bool>(v,0));

        cout<<"enter edges"<<endl;

        int a,b;
        for(int i=0;i<u;i++){
            cin>>a>>b;
            matrix[a][b]=1;
            matrix[b][a]=1;
        }
    }

    void show_matrix(){
        for(int i=0;i<v;i++){
            for(int j=0;j<v;j++){
                cout<<matrix[i][j]<<" ";
            }
            cout<<endl;
        }
    }

};

int main(){
    
    Graph g;
    int v,u;
    cout<<"enter vertices and edges"<<endl;
    cin>>v>>u;
    g.get_parameters(v,u);
    g.create_matrix();
    g.show_matrix();
}