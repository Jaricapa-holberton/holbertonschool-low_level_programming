#include<stdio.h>
#include<stdlib.h>
//Define the size of the hash table
#define SIZE 7 
//Note: for the cuadratic probing method, the size must be a primary number to make sure 
// that we can insert on collisions. and the hash table must be at least half empty

//Define our function
int quadratic_probing_insert(int *hastable, int *empty, int key);

int main(void)
{
    int hashtable[SIZE]; // creating the hash table
    int empty[SIZE] = {0}; // initializing all elements in the array to 0

    int i;
    for (i = 0; i <= SIZE; i++)
    {
        quadratic_probing_insert(hashtable, empty, i);
    }
    //print the hashtable to the console
    for (i = 0; i < SIZE; i++)
    {
        printf("%d", hashtable[i]);
    }
    return (0);
}

/*
    1. get the key 'k'
    2. set counter i = 0
    3. compute the hash function h[k] = k % SIZE, i will call hash function 'index'
    4. if the hashtable [ h[k] ] is empty:
        4.1 insert key 'k' at hashtable
        4.2 stop
        else:
        4.3 the key space at hashtable is occupied, so we need to find the next available key space
        4.4 increment i
        4.5 compute the new hash function h[k] = (k + i * i) % SIZE
    5. the hashtable is full
    6. stop
*/

int quadratic_probing_insert(int *hashtable, int *empty, int key)
{
     int i, index; //index is the hash function 'h'

     for (i = 0; i < SIZE; i++)
     {
         index = (key + i * i ) % SIZE;

         if (empty[index] == 0)
         {
             hashtable[index] = key;
             empty[index] = -1; // mark that the position in the hashtable has been taken, using the empty array
             return (index);
         }
     }


     return (-1);
}