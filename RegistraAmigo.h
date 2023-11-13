/*struct AmigoSecreto{
    string nome;
    string contato;
}

vector <AmigoSecreto> listaAmigos;*/

bool nomeExistente (string nome){
    for ( const AmigoSecreto& amigoSecreto : listaAmigos){
        if (amigoSecreto.nome == nome){
            return true;
        }
    }
    return false;
}

bool contatoExistente (string contato){
    for ( const AmigoSecreto& amigoSecreto : listaAmigos){
        if (amigoSecreto.nome == contato){
            return true;
        }
    }
    return false;
}

void CadastrarAmigo(){

    AmigoSecreto novoAmigo;

    do {
        cout << "Digite o nome do novo amigo: ";
        cin >> novoAmigo.nome;

        if (nomeExistente(novoAmigo.nome)) {
            cout << "Nome amigo já existe. Tente novamente.\n";
        }

    } while (nomeExistente(novoAmigo.nome));

    do {
        cout << "Digite o contato do novo amigo: ";
        cin >> novoAmigo.contato;

        if (contatoExistente(novoAmigo.contato)) {
            cout << "Contato já registrado. Tente novamente.\n";
        }

    } while (contatoExistente(novoAmigo.contato));

    listaAmigos.push_back(novoAmigo);

    amg++;

    cout << "Novo amigo registrado com sucesso!\n";

    system("pause");
}
