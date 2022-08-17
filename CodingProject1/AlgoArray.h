#pragma once

#include "DynArray.h"

/**
 * @brief Calculates the sum value of the vector
 *
 * @param dynamic_array
 * @return double
 */
double sum(const DynamicArray &dynamic_array);

/**
 * @brief Calculates the mean value of the vector
 *
 * @param dynamic_array
 * @return double
 */
double mean(const DynamicArray &dynamic_array);

/**
 * @brief Calculates the median value of the vector
 *
 * @param dynamic_array
 * @return double
 */
double median(DynamicArray dynamic_array);
