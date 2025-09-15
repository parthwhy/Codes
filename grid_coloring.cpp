#include <iostream>
#include <vector>
#include <string>
#include <set> // Using a set is cleaner and more efficient

using namespace std;

int main() {
    long long n, m;
    cin >> n >> m;

    vector<string> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Define neighbors to check: right and up
    int drow[] = {0, -1};
    int dcol[] = {1, 0};

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            
           if((i+j)%2==0){
            if(arr[i][j]=='A'){
                arr[i][j]='C';
            
            }
            else arr[i][j]='A';

           }
           else{
            if(arr[i][j]=='B'){
                arr[i][j]='D';
            
            }
            else arr[i][j]='B';

           }
        }
    }

    // Print the final grid
    for (int i = 0; i < n; i++) {
        cout << arr[i] << endl;
    }

    return 0;
}