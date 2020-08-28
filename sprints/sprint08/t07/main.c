#include "create_new_agents.h"

#include <stdio.h>

int main () {
    char *names[] = {"Thompson", "Smith", "Colson"};
    int power[] = {33, 66, 99};
    int strength[] = {133, 166, 196};
    int count = 3;

    t_agent **new_agent = mx_create_new_agents(names, power, strength, count);
    for (int i = 0; i < count && new_agent != NULL; i++) {
        printf("Name: %s \nPower: %d \nStrngth: %d \n", new_agent[i]->name, 
               new_agent[i]->power, new_agent[i]->strength);    
    }
    system("leaks -q a.out");
}
