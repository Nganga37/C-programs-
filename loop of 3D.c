#include <stdio.h>

int main() {
    
    int matrix[2][3][4] = {
        { {85, 85, 65, 32}, {14, 75, 56, 29}, {64, 35, 78, 12} },
        { {45, 23, 67, 89}, {58, 94, 32, 11}, {72, 84, 91, 33} }
    };

    // Loop through each element in the 3D array and print it
    for (int i = 0; i < 2; i++) {         // Loop through the first dimension
        for (int j = 0; j < 3; j++) {     // Loop through the second dimension
            for (int k = 0; k < 4; k++) { // Loop through the third dimension
                printf("matrix[%d][%d][%d] = %d\n", i, j, k, matrix[i][j][k]);
            }
        }
    }

    return 0;
}