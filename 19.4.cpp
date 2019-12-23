#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int n, m;
    
    cout << "Введите M";
    cin >> m;
    cout << "Введите N";
    cin >> n;
    
    int** arr = new int* [m];
    
    for (int i = 0; i < m; i++){
        arr[i] = new int [n];
    }
    
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            cin >> arr[i][j];
        }
    }
    
    int temp;
    
    for (int i = 0; i < m - 1; i++){
        for (int k = i + 1  ; k < m; k++){
            if (arr[k][0] < arr[i][0]){
                for (int j = 0; j < n; j++){
                    temp = arr[i][j];
                    arr[i][j] = arr[k][j];
                    arr[k][j] = temp;
                }
            }
        }
    }
    
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}
