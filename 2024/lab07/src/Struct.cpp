#include "Struct.h"
#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;




int searchHighway(Map* map, int src, int dest)
{
    AdjListCity* temp = map->array[src].head;
    while (temp != NULL) {
        if (temp->dest == dest)
            return 1; // Found
        temp = temp->next;
    }
    return 0; // Not Found
}

void DFSUtil(int v, int visited[], Map* map)
{
    visited[v] = 1;

    AdjListCity* temp = map->array[v].head;
    while (temp) {
        int adjCity = temp->dest;
	    cout << "[" << v << "," << adjCity << "] ";

        if (!visited[adjCity])
        {
            DFSUtil(adjCity, visited, map);
    	}
        temp = temp->next;
    }
}

void DFS(Map* map, int startCity)
{
    int* visited = new int[map->V];
    for (int i = 0; i < map->V; i++)
        visited[i] = 0;

	cout << "\nHighways beetwen cities: ";

	DFSUtil(startCity, visited, map);
	
	cout << "\n";
	
    delete [] visited;
}


