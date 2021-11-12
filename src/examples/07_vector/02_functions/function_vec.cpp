#include "function_vec.h"

void my_vectors(std::vector<int> n1, std::vector<int> &n2, const std::vector<int> &n3)
{
    n1[0] = 100;
    n2[0] = 200;
    //n3[0] = 300; not allowed
}