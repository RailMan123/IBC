#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

vector<int> summaration(vector<int> a, vector<int> b, int size){
    vector<int> result(size);
    for (int i = 0; i < size; i++){
        result[i] = a[i] + b[i];
    }
    return result;
}

vector<int> subtraction(vector<int> a, vector<int> b, int size){
    vector<int> result(size);
    for (int i = 0; i < size; i++){
        result[i] = a[i] - b[i];
    }
    return result;
}

int scalarsum(vector<int> a, vector<int> b, int size){
    int result = 0;
    for (int i = 0;i < size; i++){
        result += a[i] * b[i];
    }
    return result;
}

vector<int> cross_product(vector<int> a, vector<int> b, int size){
    vector<int> result(size);
    result[0] = a[1] * b[2] - a[2] * b[1];
    result[1] = a[2] * b[0] - a[0] * b[2];
    result[2] = a[0] * b[1] - a[1] * b[0];

    return result;
}

int main()
{
    int size = 3;
    vector<int> a(size);
    vector<int> b(size);
    for (int i = 0; i < size; i++){
        cin >> a[i];

    }
    for (int i = 0; i < size; i++){
        cin >> b[i];

    }
    vector<int> summ;

    cout << "Vectors summ:";

    summ = summaration(a, b, size);
    for (int i = 0; i < size;i++){
        cout << summ[i] << ' ';
    }
    cout << endl;

    vector<int> subt;

    cout << "Vectors difference:";

    subt = subtraction(a, b, size);
    for (int i = 0; i < size;i++){
        cout << subt[i] << ' ';
    }

    cout << endl;
    cout << "Vectors scalarum:";
    cout << scalarsum(a, b, size);

    cout << endl;
    cout << "Vectors cross-product:";

    vector<int> cross;
    cross = cross_product(a, b, size);

    for (int i = 0; i < size;i++){
        cout << cross[i] << ' ';
    }
    return 0;
}
