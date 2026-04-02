#include<iostream>
#include<vector>
using namespace std;
class Matrix {
public:
    vector<vector<int>> a;

    Matrix operator+(const Matrix& other) {
        Matrix result;
        int n = a.size();
        int m = a[0].size();

        result.a = vector<vector<int>>(n, vector<int>(m));

        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                result.a[i][j] = a[i][j] + other.a[i][j];
            }
        }
        return result;
    }
};