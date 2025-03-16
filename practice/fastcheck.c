// #include <stdio.h>

// int main()
// {
//     long long sum = 0;
//     for (int i = 0; i < 100000000; i++)
//     {
//         sum += i;
//     }
//     printf("%lld\n", sum);
// }

// #include <stdio.h>

// int main()
// {
//     long long n = 100000000;
//     long long sum = (n * (n + 1)) / 2;
//     printf("%lld\n", sum);
// }

#include <stdio.h>
#include <time.h>

int main()
{
    clock_t start = clock();

    long long sum = 0;
    for (long long i = 1; i <= 1000000000; i++)
    {
        sum += i;
    }

    printf("%lld\n", sum);

    clock_t end = clock();
    printf("Time taken: %f seconds\n", (double)(end - start) / CLOCKS_PER_SEC);
}
