#include <bits/stdc++.h>
using namespace std;
 
int main() {
    long long n; cin >> n;
    long long sum = 0;
    map<string, int> shapes;
    shapes.insert(pair<string, int>("Tetrahedron", 4));
    shapes.insert(pair<string, int>("Cube", 6));
    shapes.insert(pair<string, int>("Octahedron", 8));
    shapes.insert(pair<string, int>("Dodecahedron", 12));
    shapes.insert(pair<string, int>("Icosahedron", 20));
    for(int i = 0; i < n; i++) {
        string shape; cin >> shape;
        sum += shapes[shape];
    }
    cout << sum;
}
