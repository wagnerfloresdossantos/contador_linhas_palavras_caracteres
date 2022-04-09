#include <iostream>
#include <string>
#include <fstream>
#include <errno.h>
#include <ctype.h>

using namespace std;

int main(int argc, char *argv[0]) {
    // abre o arquivo
    ifstream arq("/home/wagner/CLionProjects/2022_1/contar_linhas_palavras_caracteres/teste.txt");

    //verifica se o arquivoabriu
    if (! arq.is_open()){
        perror("Erro ao Abrir...");
        return errno;
    }
    //conta linhas e caracteres
    string line;
    int cont_line = 0;
    int cont_char = 0 ;
    while(getline(arq, line)){
       cont_line ++;
       cont_char = cont_char + line.size();
    }
    //arquivo se fechou
    // abre novamente o aqruivo com outro nome aqrq2
    ifstream arq2("/home/wagner/CLionProjects/2022_1/contar_linhas_palavras_caracteres/teste.txt");

    //conta as palavras
    string word;
    int cont_word = 0;
    while (arq2 >> word){
        cont_word++;
    }
    //mostraquantas linhas, palavras e caracteres;
    cout << cont_line  << " " << cont_word << " " << cont_char <<  endl ;
}
