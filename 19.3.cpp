#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    
    int n, s;
    
    cout << "Введите S";
    cin >> s;
    cout << "Введите N";
    cin >> n;
    
    if (n % 2 != 0 || s % 2 != 0){
        cout << "НЕВЕРНОЕ ЗНАЧЕНИЕ";
        return 0;
        
    }
    
    int** arr = new int* [s];
    
    for (int i = 0; i < s; i++){
        arr[i] = new int [n];
    }
    
    for (int i = 0; i < s; i++){
        for (int j = 0; j < n; j++){
            cin >> arr[i][j];
        }
    }
    
    int temp;
    
    for (int i = 0; i < s / 2; i++){
        for (int j = 0; j < n / 2; j++){
            temp = arr[i][j];
            arr[i][j] = arr[s / 2 + i][n / 2 + j];
            arr[s / 2 + i][n / 2 + j] = temp;
        }
    }
    
    for (int i = 0; i < s; i++){
        for (int j = 0; j < n; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}
