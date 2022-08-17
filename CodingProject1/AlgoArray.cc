#include <cmath>
#include <cstdlib>

#include "AlgoArray.h"
#include "DynArray.h"

double sum(const DynamicArray &dynamic_array)
{
    if (dynamic_array.m_data == nullptr || dynamic_array.m_length == 0u)
        return 0.0;

    double result = 0.0;

    for (size_t i = 0; i < dynamic_array.m_length; i++)
    {
        result += dynamic_array.m_data[i];
    }

    return result;

}

double mean(const DynamicArray &dynamic_array)
{
    if (dynamic_array.m_data == nullptr || dynamic_array.m_length == 0u)
        return 0.0;


    return (sum(dynamic_array) / static_cast<double>(dynamic_array.m_length));

}


double median(DynamicArray dynamic_array)
{
    if (dynamic_array.m_data == nullptr || dynamic_array.m_length == 0u)
        return 0.0;

    double result = 0.0;
    size_t middle = (dynamic_array.m_length / 2u);

    if ((dynamic_array.m_length % 2) == 0) // even length
    {
        result = ((dynamic_array.m_data[middle] +
                    dynamic_array.m_data[middle - 1u]) / 2u);
    }
    else
    {
        result = dynamic_array.m_data[middle];
    }

    return result;
}
