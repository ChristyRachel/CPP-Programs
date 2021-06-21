#include <iostream>
#include <vector>

using namespace std;

int main() {
    int row, queries, col, value,query_row, query_col;

    cin >> row >> queries;

    vector<vector<int>> rowVector;

    for (int i = 0; i < row; i++) {

        vector<int> colVector;
        cin >> col;

        for (int j = 0; j < col; j++) {

            cin >> value;
            colVector.push_back(value);

        }

        rowVector.push_back(colVector);
    }
for(int k=0;k<queries;k++){

    cin >> query_row >> query_col;
    cout << rowVector[query_row][query_col] << endl;
}
return 0;
}

