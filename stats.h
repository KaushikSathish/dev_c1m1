/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file stats.h 
 * @brief Header file for statistical analysis of a dataset
 *
 * Header file containing the function declarations needed for statistical analysis of a dataset
 *
 * @author Kaushik Sathish
 * @date 10-26-2020
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */ 

/**
 * @brief This function calculates the median of a dataset
 *
 * This function takes an unsigned char pointer which points to a dataset and size of a dataset
 * as inputs and returns median of a dataset in float. 
 *
 * @param dataset unsigned char array of a dataset 
 * @param size    size of a dataset
 *
 * @return median of the dataset in float
 */
float find_median (unsigned char *dataset, unsigned int size);

/**
 * @brief This function calculates the mean of a dataset
 *
 * This function takes an unsigned char pointer which points to a dataset and size of a dataset
 * as inputs and returns mean of a dataset in float. 
 *
 * @param dataset unsigned char array of a dataset 
 * @param size    size of a dataset
 *
 * @return mean of the dataset
 */
float find_mean (unsigned char *dataset, unsigned int size);

/**
 * @brief This function finds the maximum element of a dataset
 *
 * This function takes an unsigned char pointer which points to a dataset and size of a dataset
 * as inputs and returns unsigned char maximum element of a dataset. 
 *
 * @param dataset unsigned char array of a dataset 
 * @param size    size of a dataset
 *
 * @return maximum element of the dataset
 */
unsigned char find_maximum (unsigned char *dataset, unsigned int size);

/**
 * @brief This function finds the minimum element of a dataset
 *
 * This function takes an unsigned char pointer which points to a dataset and size of a dataset
 * as inputs and returns unsigned char minimum element of a dataset. 
 *
 * @param dataset unsigned char array of a dataset 
 * @param size    size of a dataset
 *
 * @return minimum element of the dataset
 */
unsigned char find_minimum (unsigned char *dataset, unsigned int size);

/**
 * @brief This function sorts the elements of a dataset in decreasing order 
 *
 * This function takes an unsigned char pointer which points to a dataset and size of a dataset
 * as inputs and sorts a dataset in decreasing order.
 *
 * @param dataset unsigned char array of a dataset 
 * @param size    size of the dataset
 *
 * @return void
 */
void sort_array (unsigned char *dataset, unsigned int size);

/**
 * @brief This function sorts the elements of a dataset in increasing order 
 *
 * This function takes an unsigned char pointer which points to a dataset and size of a dataset
 * as inputs and sorts a dataset in increasing order. This function is used by function find_median
 * to arrange the dataset in increasing order prior to calculating the median.
 *
 * @param dataset unsigned char array of a dataset 
 * @param size    size of the dataset
 *
 * @return void
 */
void sort_array_internal (unsigned char *dataset, unsigned int size);

/**
 * @brief This function prints the statistical data for a dataset 
 *
 * This function takes an unsigned char pointer which points to a dataset and size of a dataset
 * as inputs and prints the statistical data such as mean, median, maximum and minimum element in a dataset.
 *
 * @param dataset unsigned char array of a dataset 
 * @param size    size of the dataset
 *
 * @return void
 */

void print_statistics (unsigned char *dataset, unsigned int size);

/**
 * @brief This function prints the elements of a datset
 *
 * This function takes an unsigned char pointer which points to a dataset and size of a dataset
 * as inputs and prints the elements of a dataset.
 *
 * @param dataset unsigned char array of a dataset 
 * @param size    size of the dataset
 *
 * @return void
 */

void print_array (unsigned char *dataset, unsigned int size);


#endif /* __STATS_H__ */
