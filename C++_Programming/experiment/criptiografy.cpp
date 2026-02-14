#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

int main() {
    string s;
    cout << "Enter message to encrypt: ";
    getline(cin, s);
    while(s.length() % 3 != 0) {
        s += " ";
    }
    cout << "Original message: '" << s << "'" << endl;
    int **matrix = new int*[3];
    for (int i = 0; i < 3; i++) {
        matrix[i] = new int[3];
    }
    
    // Encryption matrix
    int arr[9] = {1, 2, 1, 0, 1, 3, 0, 0, 1};
    int index = 0;
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            matrix[i][j] = arr[index];
            index++;
        }
    }
    
    cout << "Encryption matrix:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    int n = s.length();
    int *encrypted = new int[n];  // Use dynamic allocation
    
    int i = 0;
    while(i <= n - 3) {
        int a0 = (int)s[i];
        int a1 = (int)s[i + 1];
        int a2 = (int)s[i + 2];
        
        encrypted[i] = a0 * matrix[0][0] + a1 * matrix[1][0] + a2 * matrix[2][0];
        encrypted[i + 1] = a0 * matrix[0][1] + a1 * matrix[1][1] + a2 * matrix[2][1];
        encrypted[i + 2] = a0 * matrix[0][2] + a1 * matrix[1][2] + a2 * matrix[2][2];
        
        i += 3;
    }
    
    cout << "Encrypted values: ";
    for(int i = 0; i < n; i++) {
        cout << encrypted[i] << " ";
    }
    cout << endl;
    //-------------------------------------------------------------------------------
    // Replace matrix with inverse matrix
    int invarr[] = {1, -2, 5, 0, 1, -3, 0, 0, 1};
    index = 0;
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            matrix[i][j] = invarr[index];
            index++;
        }
    }
    cout << "Decryption matrix:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    
    int *decrypted = new int[n];
    i = 0;
    while(i <= n - 3) {
        int e0 = encrypted[i];
        int e1 = encrypted[i + 1];
        int e2 = encrypted[i + 2];
        decrypted[i] = e0 * matrix[0][0] + e1 * matrix[1][0] + e2 * matrix[2][0];
        decrypted[i + 1] = e0 * matrix[0][1] + e1 * matrix[1][1] + e2 * matrix[2][1];
        decrypted[i + 2] = e0 * matrix[0][2] + e1 * matrix[1][2] + e2 * matrix[2][2];
        i += 3;
    }
    string answer = "";
    for(int i = 0; i < n; i++) {
        answer += (char)decrypted[i];
    }    
    cout << "Decrypted message: '" << answer << "'" << endl;
    if(answer == s) {
        cout << "SUCCESS: Decryption matches original message!" << endl;
    } else {
        cout << "ERROR: Decryption doesn't match original message." << endl;
    }
    
    // Clean up memory
    for (int i = 0; i < 3; i++) {
        delete[] matrix[i];
    }
    delete[] matrix;
    delete[] encrypted;
    delete[] decrypted;
    
    return 0;
}