#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

vector<vector<int>> summaration(vector<vector<int>> a, vector<vector<int>> b, int size){
    vector<vector<int>> result(size);
    for (int i = 0; i < size; i++){
        vector<int> p(size);
        for (int j = 0; j < size; j++){
            p[j] =0;
        }
        result[i] = p;
    }

    for (int i = 0; i < size; i++){
        for (int j = 0; j < size; j++){
            result[i][j] = a[i][j] + b[i][j];
        }
    }
    return result;
}

vector<vector<int>> subtraction(vector<vector<int>> a, vector<vector<int>> b, int size){
    vector<vector<int>> result(size);
    for (int i = 0; i < size; i++){
        vector<int> p(size);
        for (int j = 0; j < size; j++){
            p[j] =0;
        }
        result[i] = p;
    }

    for (int i = 0; i < size; i++){
        for (int j = 0; j < size; j++){
            result[i][j] = a[i][j] - b[i][j];
        }
    }
    return result;
}

int determination(vector<vector<int>> a){
    int result = 0;
    result += a[0][0] * a[1][1] * a[2][2] + a[1][0] * a[2][1] * a[0][2] + a[0][1] * a[1][2] * a[2][0];
    result -= (a[2][0] * a[1][1] * a[0][2] + a[2][1] * a[1][2] * a[0][0] + a[1][0] * a[0][1] * a[2][2]);
    return result;
}



int main()
{
    int size;
    cin >> size;
    vector<vector<int>> a(size);
    for (int i = 0; i < size; i++){
        vector<int> b(size);
        for (int j= 0; j< size; j++){
            cin >> b[j];
        }
        a[i] = b;

    }

    cout << endl;
    for (int i = 0; i < size; i++){
        for (int j= 0; j< size; j++){
            cout << a[i][j] << ' ';
        }
        cout << endl;

    }
    cout << endl;

    vector<vector<int>> c(size);
    for (int i = 0; i < size; i++){
        vector<int> b(size);
        for (int j= 0; j< size; j++){
            cin >> b[j];
        }
        c[i] = b;

    }
    cout << endl;
    for (int i = 0; i < size; i++){
        for (int j= 0; j< size; j++){
            cout << c[i][j] << ' ';
        }
        cout << endl;

    }
    cout << endl;

    vector<vector<int>> summ;

    cout << "Matrix summ:";

    summ = summaration(a, c, size);
    cout << endl;
    for (int i = 0; i < size; i++){
        for (int j= 0; j< size; j++){
            cout << summ[i][j] << ' ';
        }
        cout << endl;

    }

     vector<vector<int>> subt;

     cout << "Matrix difference:";

     subt = subtraction(a, c, size);
     cout << endl;
     for (int i = 0; i < size; i++){
         for (int j= 0; j< size; j++){
             cout<< subt[i][j] << ' ';
         }
         cout << endl;

     }
     cout << "Determination value:";
     cout << determination(a);
    return 0;
}
