// Author: 
// Created: 2026-10-16 22:43:48

#include <iostream>
#include <vector>
using namespace std;

void read_and_solve() {

     
        int no_vertices, no_edges;
        cin >> no_vertices >> no_edges;
        std::vector<int> deg(no_vertices, 0);

       

        for (int i = 0; i < no_edges; ++i) {
            int vertex1, vertex2;
            cin >> vertex1 >> vertex2;
            --vertex1; --vertex2;
            ++deg[vertex1]; 
            ++deg[vertex2];
        }

        bool unvisted = false;
        bool cont = false;

        for (auto i : deg) {
            if (i == no_vertices - 1) {
                cont = true;
            }
            if (i == 0) unvisted = true;
        }

        if (unvisted) {cout << "Brain Melt\n";}
        else if (no_edges == no_vertices - 1 && cont) {cout << "2\n";}
        else {cout << "Many\n";}   
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int no_cases;
    cin >> no_cases;

    for (int i = 0; i < no_cases; ++i) read_and_solve();


}
