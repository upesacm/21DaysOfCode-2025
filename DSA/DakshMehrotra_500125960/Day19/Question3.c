#include <stdio.h>
#include <stdbool.h>

bool searchMatrix(int** matrix, int matrixSize, int* matrixColSize, int target) 
{
    if (matrixSize == 0 || *matrixColSize == 0) 
    {
        return false;
    }
    
    int row = 0;
    int col = *matrixColSize - 1;
    
    while (row < matrixSize && col >= 0) 
    {
        if (matrix[row][col] == target) 
        {
            return true;
        } 
        else if (matrix[row][col] > target) 
        {
            col--;
        } 
        else 
        {
            row++;
        }
    }
    
    return false;
}

int main() 
{
    int rows, cols;
    scanf("%d %d", &rows, &cols);
    
    if (rows <= 0 || cols <= 0) 
    {
        printf("false\n");
        return 0;
    }
    
    int matrix[rows][cols];
    for (int i = 0; i < rows; i++) 
    {
        for (int j = 0; j < cols; j++) 
        {
            scanf("%d", &matrix[i][j]);
        }
    }
    
    int target;
    scanf("%d", &target);
    
    int* matrixPtr[rows];
    for (int i = 0; i < rows; i++) 
    {
        matrixPtr[i] = matrix[i];
    }
    int matrixColSize = cols;
    
    bool found = searchMatrix(matrixPtr, rows, &matrixColSize, target);
    printf(found ? "true\n" : "false\n");
    
    return 0;
}