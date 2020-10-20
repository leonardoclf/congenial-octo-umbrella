#include <stdio.h>
#include <string.h>

struct Horario {
    int hora;
    int minuto;
    int segundo;
};

struct Data {
    int dia;
    int mes;
    int ano;
};

typedef struct Compromisso {
    struct Data compromisso_data;
    struct Horario compromisso_horario;
    char * descricaoCompromisso[300];
} compromisso;




int main () {
    compromisso segunda;
    segunda.compromisso_horario.hora = 10;
    segunda.compromisso_horario.minuto = 10;
    segunda.compromisso_horario.segundo = 10;
    segunda.compromisso_data.dia = 2;
    segunda.compromisso_data.mes = 2;
    segunda.compromisso_data.ano = 2020;
    strcpy(segunda.descricaoCompromisso, "Fazer a prova");
    return 0;
}