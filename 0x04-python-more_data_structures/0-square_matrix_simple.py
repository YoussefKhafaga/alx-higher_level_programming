#!/usr/bin/python3
import copy
def square_matrix_simple(matrix=[]):
    mat = copy.deepcopy(matrix)
    for i in range(len(mat)):
        for j in range(len(mat[0])):
            mat[i][j] = mat[i][j]**2
    return mat
