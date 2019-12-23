#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    
    int s;
    
    cout << "Введите S";
    cin >> s;
    
    int** arr = new int* [s];
    
    for (int i = 0; i < s; i++){
        arr[i] = new int [s];
    }
    
    for (int i = 0; i < s; i++){
        for (int j = 0; j < s; j++){
            cin >> arr[i][j];
        }
    }
    
    for (int i = 1; i <= s; i++){
        int sum = 0;
        for (int j = 0; j < i; j++){
            sum += arr[j][s - (i - j)];
        }
        cout << sum << endl;
    }
    
    for (int i = s - 1; i > 0; i--){
        int sum = 0;
        for (int j = 0; j < i; j++){
            sum += arr[s - (i - j)][j];
        }
        cout << sum << endl;
    }
    
    for (int i = 0; i < s; i++){
        for (int j = 0; j < s; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}
