#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
    char             c;
    int              n;
    long             l;
    long long       ll;
    float            f;
    double           d;
    long double     ld;
    printf("sizeof a char        = %d byte, or %d bits\n", sizeof(c), sizeof(c) * 4);
    printf("sizeof an int        = %d byte, or %d bits\n", sizeof(n), sizeof(n) * 4);
    printf("sizeof a long        = %d byte, or %d bits\n", sizeof(l), sizeof(l) * 4);
    printf("sizeof a long long   = %d byte, or %d bits\n", sizeof(ll), sizeof(ll) * 4);
    printf("sizeof a float       = %d byte, or %d bits\n", sizeof(f), sizeof(f) * 4);
    printf("sizeof a double      = %d byte, or %d bits\n", sizeof(d), sizeof(d) * 4);
    printf("sizeof a long double = %d byte, or %d bits\n", sizeof(ld), sizeof(ld) * 4);
    system("pause");
    return EXIT_SUCCESS;
}
