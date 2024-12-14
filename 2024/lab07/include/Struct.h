#ifndef STRUCT_H
#define STRUCT_H


struct AdjListCity {
    int dest;
    AdjListCity* next;
};

struct AdjList {
    AdjListCity* head;
};

struct Map {
    int V;
    AdjList* array;
};


AdjListCity* newAdjListCity(int dest);

Map* createMap(int V);

void deleteMap(Map* map);

void addHighway(Map* map, int src, int dest);

void deleteHighway(Map* map, int src, int dest);

int searchHighway(Map* map, int src, int dest);

void DFSUtil(int v, int visited[], Map* map);

void DFS(Map* map, int startCity);


#endif
