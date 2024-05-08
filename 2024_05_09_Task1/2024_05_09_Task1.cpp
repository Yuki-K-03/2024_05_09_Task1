#include <iostream>
#define TASK1

template <typename TYPE>
TYPE triangleArea(TYPE base, TYPE height) {
    return (base * height / 2);
}

int main()
{
#ifdef TASK1
    printf("三角形の面積 %d\n", triangleArea(3, 10));
    printf("三角形の面積 %g\n", triangleArea(2.5, 5.4));
#else
    printf("三角形の面積 %d\n", triangleArea<int>(3, 10));
    printf("三角形の面積 %d\n", triangleArea<int>(2.5, 5.4));
#endif // TASK1

    return 0;
}