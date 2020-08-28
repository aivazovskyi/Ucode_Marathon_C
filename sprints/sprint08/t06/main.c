#include "create_agent.h"
#include <stdio.h>

int main() {
    t_agent *new_agent = mx_create_agent("Smith", 150, 66);
    printf("%s", new_agent->name);

}
