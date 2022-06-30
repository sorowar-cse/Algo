// Graph Representation – Adjacency List in C++
#include<iostream>
#include<vector>

using namespace std;

void addNewEdge(vector<int> adjacencyList[], int a, int b)
{
  adjacencyList[a].push_back(b);
  adjacencyList[b].push_back(a);
}

void viewGraph(vector<int> adjacencyList[], int nodes)
{
  for (int i = 0; i < nodes; i++)
  {
    cout << "\nAdjacency List of node '"<< i <<"'";

    for (int j=0; j<adjacencyList[i].size() ; j++)
        {
            cout << " -> " << adjacencyList[i][j];
        }

    cout<<endl;
  }
}

int main()
{
  int nodes = 5;

  vector<int> adjacencyList[nodes];

  addNewEdge(adjacencyList, 0, 1);
  addNewEdge(adjacencyList, 0, 3);
  addNewEdge(adjacencyList, 1, 2);
  addNewEdge(adjacencyList, 1, 3);
  addNewEdge(adjacencyList, 2, 3);
  addNewEdge(adjacencyList, 3, 4);

  viewGraph(adjacencyList, nodes);

  return 0;
}
