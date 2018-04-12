#include <stdio.h>
int main() {
    
    char chessdeck[8][8];
    int i, j;
    char vid = ' ', pb = 'p', pw = 'P';
    char blackp[8], whitep[8];
    char blackc[8] = {'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r'};
    char whitec[8] = {'R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R'};
    
    
    
    for (i =0; i <8; i++) {
    blackp[i] = pb;
    whitep[i] = pw;
    }
    
    for (i = 0; i<8; i++) {
    for(j=0; j<8; j++) {
        chessdeck[i][j] = vid;
    }
    }
    
    for (i=0; i<1; i++) {
    for (j=0; j<8; j++) {
        chessdeck[i][j] = blackc[j];
    }
    }
    
    for (i=1; i <2; i++) {
    for (j=0; j<8; j++) {
        chessdeck[i][j] = blackp[j];
    }
    }
    
    for (i = 6; i<7; i++) {
    for ( j =0; j <8; j++) {
        chessdeck[i][j] = whitep[j];
    }
    }
    
    for (i=7; i<8; i++) {
    for(j=0; j<8; j++) {
        chessdeck[i][j] = whitec[j];
    }
    }
    printf("   abcdefgh\n   ");
    for (i =1; i<=8; i++) {
    printf("-");
    }
    printf("\n");
    for (i = 0; i<8; i++) {
    printf("%d| ", i+1);
    for (j = 0; j < 8; j++) {
        printf("%c", chessdeck[i][j]);
    }
    
    printf("\n");
    }
}