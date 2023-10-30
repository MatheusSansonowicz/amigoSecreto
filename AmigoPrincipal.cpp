#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

#include "RegistraAmigo.h"
#include "ListaAmigos.h"
#include "GerarAmigo.h"

main (){
    int opcao, amg=0;

    do{

        cout << "--Menu Amigo Secreto--\n\n";
        
        cout << "1. Cadastrar\n";
        cout << "2. Listar\n";
        cout << "3. Gerar Amigo Secreto\n";
        cout << "4. Sair\n";
        cout << "Escolha uma opcao: ";
        cin >> opcao;

        switch (opcao){
        case 1:
            CadastrarAmigo();
            break;
         
        case 2:
                listarAmigo();
                break;
        case 3:
                GerarAmigo();
                break;
        case 4:
                cout << "Até mais.\n";
                break;
        default:
                cout << "Opcao invalida. Tente novamente.\n";
        }
    } while (opcao!=4);


}