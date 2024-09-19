#include<stdio.h>
#include<stdlib.h>

int main() {
    int i, j, nr, nc, **p, **q, k, s;
    printf("Enter number of rows and columns for square matrices: ");
    scanf("%d %d", &nr, &nc);
    
    p = (int **) calloc(nr, sizeof(int *));
    q = (int **) calloc(nr, sizeof(int *));
    for(i = 0; i < nr; i++) {
        p[i] = (int *) calloc(nc, sizeof(int));
        q[i] = (int *) calloc(nc, sizeof(int));
    }
    printf("Enter %d elements for matrix A:\n", nr * nc);
    for(i = 0; i < nr; i++) {
        for(j = 0; j < nc; j++) {
            scanf("%d", &p[i][j]);
        }
    }
    printf("Enter %d elements for matrix B:\n", nr * nc);
    for(i = 0; i < nr; i++) {
        for(j = 0; j < nc; j++) {
            scanf("%d", &q[i][j]);
        }
    }
    printf("Resultant Matrix:\n");
    for(i = 0; i < nr; i++) {
        for(j = 0; j < nc; j++) {
            for(s = 0, k = 0; k < nc; k++) {
                s += p[i][k] * q[k][j];
            }
            printf("%4d", s);
        }
        printf("\n");
    }
    for(i = 0; i < nr; i++) {
        free(p[i]);
        free(q[i]);
    }
    free(p);
    free(q);

    return 0;
}

