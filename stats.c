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
 * @file stats.c 
 * @brief Statistical analysis of a dataset
 *
 * Report analytics on the maximum, minimum, mean, and median of a data set
 *
 * @author Kaushik Sathish
 * @date 10-26-2020
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Statistics and Printing Functions Go Here */
  print_array(test, SIZE);
  print_statistics(test, SIZE);
  /* Dataset sorted in descending order */
  sort_array(test, SIZE);
}

/* Add other Implementation File Code Here */
void print_array (unsigned char *dataset, unsigned int size)
{
  int i;
  printf ("\nDataset elements are..\n");
  for (i = 0; i < size; i++)
  {
     printf("\ndataset[%d] : %d",i,dataset[i]);
  }
  printf("\n");
}

void sort_array(unsigned char *dataset , unsigned int size)
{ 
    int i=0 , j=0 , temp=0;

    for(i = 0 ; i < size ; i++)
    {
        for(j = 0 ; j < size-1 ; j++)
        {
            if(dataset[j] < dataset[j+1])
            {
                temp          = dataset[j];
                dataset[j]    = dataset[j+1];
                dataset[j+1]  = temp;
            }
        }
    }

    printf("\nThe dataset after sorting in decreasing order is ..\n");
    for(i = 0 ; i < size ; i++)
    {
        printf("\ndataset[%d] : %d",i,dataset[i]);
    }
}

void sort_array_internal(unsigned char *dataset , unsigned int size)
{ 
    int i=0 , j=0 , temp=0;

    for(i = 0 ; i < size ; i++)
    {
        for(j = 0 ; j < size-1 ; j++)
        {
            if(dataset[j] > dataset[j+1])
            {
                temp          = dataset[j];
                dataset[j]    = dataset[j+1];
                dataset[j+1]  = temp;
            }
        }
    }
}

float find_median (unsigned char *dataset, unsigned int size)
{
  float median=0;
  sort_array_internal(dataset, size);
    
  if (size % 2 == 0)
    median = (dataset[(size-1)/2] + dataset[size/2])/2.0;
    
  else
    median = dataset[size/2];
    
  return median;

}

float find_mean (unsigned char *dataset, unsigned int size)
{
  int sum = 0;
  int i = 0;

  for (i = 0; i < size; i++)
        sum += dataset[i];
 
    return (float)sum / (float)size;
}

unsigned char find_maximum (unsigned char *dataset, unsigned int size)
{
  unsigned char maximum = dataset[0];
  int i = 0;

  for (i = 0; i < size; i++)
  {
    if (dataset[i] > maximum)
    {
      maximum = dataset[i];   
    }
  }

  return maximum;
}

unsigned char find_minimum (unsigned char *dataset, unsigned int size)
{
  unsigned char minimum = dataset[0];
  int i = 0;

  for (i = 0; i < size; i++)
  {
    if (dataset[i] < minimum)
    {
      minimum = dataset[i];   
    }
  }

  return minimum;
}

void print_statistics (unsigned char *dataset, unsigned int size)
{
  float median = 0;
  float mean = 0;
  unsigned char maximum = 0;
  unsigned char minimum = 0;

  maximum = find_maximum(dataset, size);
  printf("\nMaximum element in the dataset is %d\n", maximum);
  minimum = find_minimum(dataset, size);
  printf("\nMinimum element in the dataset is %d\n", minimum);
  mean = find_mean(dataset, size);
  printf("\nMean of the dataset is %f\n", mean);
  median = find_median(dataset, size);
  printf("\nMedian of the dataset is %f\n", median);
}

