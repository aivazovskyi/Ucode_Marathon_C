#include "create_new_agents.h"

t_agent **mx_create_new_agents(char **name, int *power, int *strength, int count) {
    t_agent **new_agents = NULL;

    if (name == NULL || power == NULL || strength == NULL)
        return NULL;    
    new_agents = (t_agent**)malloc(sizeof(t_agent *) * count);
    for (int i = 0; i < count; i++) {
        new_agents[i] = mx_create_agent(name[i], power[i], strength[i]);
    }
    return new_agents;
}
