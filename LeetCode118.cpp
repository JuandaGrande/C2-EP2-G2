#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    Solution(int n);
    void printTriangulo() const;
private:
    vector<vector<int>> triangulo;
    int numRows;
    void GenerarTriangulo();
};


Solution::Solution(int n) : numRows(n) {
    GenerarTriangulo();
}

void Solution::GenerarTriangulo() {
    triangulo.resize(numRows);
    for(int i=0;i<numRows;i++){
        triangulo[i].resize(i+1);
        triangulo[i][0]=1;
        triangulo[i][i]=1;
        for(int j=1;j<i;j++){
            triangulo[i][j]=triangulo[i-1][j-1] + triangulo[i-1][j];
        }
    }
}


void Solution::printTriangulo() const {
    for (const auto& row : triangulo) {
        for (int val : row) {
            cout << val << " ";
        }
        cout << endl;
    }
}

int main() {
    int n;
    cout<<"Ingrese el número de filas para generar el triángulo de Pascal"<<endl;
    cin>>n;
    if(n>1 && n<30){
        Solution sol(n);
        sol.printTriangulo();
    }else{cout<<"El número de filas debe estar entre 1 y 30"<<endl;}
    return 0;

}