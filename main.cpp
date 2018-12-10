#include <iostream>
using namespace std;

int main() {
    int n, i, k;
    int arr[10000];
    bool found = false;
    cout << "Введите n.. ";
    cin >> n;
    while(!found) {
        if (n % 2 == 0)
            n /= 2;
        else
            n = 3 * n - 1;
        arr[i] = n;
        cout << "arr [" << i << "]=" << arr[i] << endl;
        for(k = 0; k < i; k++){
            if(n == arr[k])
                found = true;
        }
        i++;
    }
    cout << "Предел на " << k << " элементе";
    return 0;
}