#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int m, s;
    
    cout << "Введите M";
    cin >> m;
    cout << "Введите S";
    cin >> s;
    
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
    int max = INT_MIN;
    int min = INT_MAX;
    
    
    for (int i = 0; i < m; i++){
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
    }
    
    int* arr_temp = new int [m];
    
    for (int i = 0; i < m; i++){
        arr_temp[i] = arr[i][index_max];
    }
    
    for (int i = 0; i < m; i++){
        arr[i][index_max] = arr[i][index_min];
        arr[i][index_min] = arr_temp[i];
    }
    
    
    for (int i = 0; i < m; i++){
        for (int j = 0; j < s; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    
}
