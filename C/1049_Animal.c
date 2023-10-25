#include <stdio.h>
#include <string.h>

int main(){

    char palavra1[50], palavra2[50], palavra3[50];

    fgets(palavra1, sizeof(palavra1), stdin);
    fgets(palavra2, sizeof(palavra2), stdin);
    fgets(palavra3, sizeof(palavra3), stdin);

    if (strcmp(palavra1, "vertebrado\n") == 0){
        if (strcmp(palavra2, "ave\n") == 0){
            if (strcmp(palavra3, "carnivoro\n") == 0){
                printf("aguia");
            }
            else {
                printf("pomba");
            }
        } else if (strcmp(palavra2, "mamifero\n") == 0) {
            if (strcmp(palavra3, "onivoro\n") == 0) {
                printf("homem");
            }
            else {
                printf("vaca");
            }
        }
    }
    else {
        if (strcmp(palavra2, "inseto\n") == 0){
            if (strcmp(palavra3, "hematofago\n") == 0){
                printf("pulga");
            }
            else {
                printf("lagarta");
            }
        }
        else {
            if (strcmp(palavra3, "hematofago\n") == 0){
                printf("sanguessuga");
            }
            else {
                printf("minhoca");
            }
        }
    }

    return 0;
}
