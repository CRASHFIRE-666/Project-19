#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int m, s;
    
    cout << "Введите M";
    cin >> m;
    
    cout << "Введите S";
    cin >> S;
    
    int** arr = new int* [m];
    
    for (int i = 0; i < m; i++){
        arr[i] = new int [s];
    }
    
    for (int i = 0; i < m; i++){
        for (int j = 0; j < s; j++){
            cin >> arr[i][j];
        }
    }
    
    int index_max;
    int index_min;
    for (int i = 0; i < m; i++){
        int max = INT_MIN;
        int min = INT_MAX;
        for (int j = 0; j < s; j++){
            if (arr[i][j] >= max){
                max = arr[i][j];
                index_max = j;
            }
            if (arr[i][j] <= min){
                min = arr[i][j];
                index_min = j;
            }
        }
        arr[i][index_max] = min;
        arr[i][index_min] = max;
    }
    
    for (int i = 0; i < m; i++){
        for (int j = 0; j < s; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    
}
