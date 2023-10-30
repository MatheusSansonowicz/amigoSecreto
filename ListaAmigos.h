void listar(){
    if (listaAmigos.empty()) {
        cout << "Nenhum Amigo registrado\n";
        system("pause");
        return;
    }

    cout << "Lista de amigos:\n";
    for (const AmigoSecreto& amigoSecreto : listaAmigos) {
        cout << "Nome: " << amigoSecreto.nome << endl;
        cout << "contato: " << amigoSecreto.contato << endl;
   
        cout << "-------------------------\n";
    }
    system("pause");
}