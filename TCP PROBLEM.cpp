#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int find_shortes_path(int size, vector<vector<int>> distances){

    int shortest = 10000;

    vector<int> order(size);
    for (int i = 0; i < size; i++){
        order[i] = i;
    }

    do{
        int path = 0;
        for (int i = 1; i < size; i++){
            path += distances[order[i - 1]][order[i]];
        }
        path += distances[order[size - 1]][order[0]];
        if (path < shortest){
            shortest = path;
        }

    }
    while (next_permutation(order.begin() + 1, order.end()));

    return shortest;
}

int main()
{
    int size;
    string s;
    cin >> size;
    vector<vector<int>> distances(size);
    for (int i = 0; i < size; i++){
        vector<int> distance(size);
        for(int j = 0; j < size; j++){
            cin >> distance[j];
        }
        distances[i] = distance;
    }

    cout << find_shortes_path(size, distances);

    return 0;
}