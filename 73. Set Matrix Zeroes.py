import copy
class Solution:
    def setZeroes(self, matrix: List[List[int]]) -> None:
        rows,columns = len(matrix),len(matrix[0])
        row1=1
        for i in range(rows):
            for j in range(columns):
                if(matrix[i][j]== 0):
                    matrix[0][j]=0
                    if i>0:
                        matrix[i][0] = 0
                    else:
                        row1 = 0

        for i in range(1,rows):
            for j in range(1,columns):
                if matrix[0][j] == 0 or matrix[i][0]== 0:
                    matrix[i][j] = 0
        if matrix[0][0] == 0: #Order important, changing rows first would create a problem
            for i in range(rows):
                matrix[i][0] = 0
        if row1==0:
            for i in range(columns):
                matrix[0][i] = 0
        
        return matrix   
