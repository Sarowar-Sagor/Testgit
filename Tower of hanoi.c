#include <stdio.h>

void towerOfHanoi(int n, char from_rod, char aux, char end)
{
    if (n == 1)
    {
        printf("\n Move disk 1 from rod %c to rod %c", from_rod, end);
        return;
    }
    towerOfHanoi(n-1, from_rod, end, aux);
    printf("\n Move disk %d from rod %c to rod %c", n, from_rod, end);
    towerOfHanoi(n-1, aux,from_rod,end);
}

int main()
{
    int n = 4; // Number of disks
    towerOfHanoi(n, 'A', 'B', 'C');  // A, B and C are names of rods
    return 0;
}
