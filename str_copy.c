#include <stdio.h>
#include <string.h>

void setTitle(char * title) {
    title = strcpy(title, "C Study");
}

int main() {
    char title[100];
    setTitle(title);

    printf("title is %s\n", title);
}
