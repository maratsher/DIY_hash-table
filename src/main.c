#include "hash_table.h"
#include <stdio.h>

int main() {
    ht_hash_table* ht = ht_new();
    ht_insert(ht, "Lina","5");
    ht_insert(ht, "Alex","4");
    ht_insert(ht, "Trimlan","3");
    char* val = ht_search(ht, "Lina");
    printf("Value in key 'Lina': %s\n", val);
    ht_insert(ht, "Lina","3");
    val = ht_search(ht, "Lina");
    printf("Modified value in key 'Lina': %s\n", val);
    ht_del_hash_table(ht);
}
