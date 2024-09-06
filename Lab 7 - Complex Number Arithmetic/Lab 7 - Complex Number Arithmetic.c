#include <stdio.h>
#include <string.h>
#define MAX 50

typedef struct
{
    int mpn;
    char comb[MAX];
    int lower_bound;
    int upper_bound;
}
mpn1;

int load_mpn_table(const char *filename, mpn1 mpn_table[], int max);
int search(mpn1 mpn_table[], int size, char trip[]);
int mpn_table( mpn1 mpn_table, char trip[] );

int main (void)
{
    mpn1 mpn_table[MAX];
    char trip[MAX];
    int size = 0;
    int index = 0;
    size = load_mpn_table("data.txt",mpn_table,MAX );
    while (strlen(trip) != 3)
    {
        printf("Input combination: ");
        scanf("%s", trip);
        index = search( mpn_table,size,trip);
        if (index != 1)
        {
            printf("For %s, MPN = %d,95%% of samples contain between %d and %d bacteria/ml.\n",mpn_table[index].comb,mpn_table[index].mpn,mpn_table[index].lower_bound,mpn_table[index].upper_bound);
        }
        else
        {
            printf("Triplet not found");
        }
        trip[0] = '\0';
    }
    return 0;

}

int load_mpn_table(const char *filename, mpn1 mpn_table[], int max)
{
    FILE *Ptr;
    int i = 0;
    Ptr = fopen(filename,"r");
    if( Ptr != NULL)
    {
        while ( !feof(Ptr) && (i < max))
        {
            fscanf(Ptr,"%s %d %d %d", mpn_table[i].comb, &mpn_table[i].mpn, &mpn_table[i].lower_bound, &mpn_table[i].upper_bound);
            i++;
        }
        fclose(Ptr);
        return i;
    }
    else
    {
        return -1;
    }
}

int search(mpn1 mpn_table[], int size, char trip[])
{
    int i;
    for (i = 0;i < size;i++)
    {
        if ( strcmp(trip,mpn_table[i].comb) == 0)
        {
            return i;
        }
    }
    return 1 ;
}
int mpn_table( mpn1 mpn_table, char trip[] )
{
  if ( strcmp(trip, mpn_table.comb) == 0)
  {
  return 0;
  }
  else
  {
  return -1;
  }
}
