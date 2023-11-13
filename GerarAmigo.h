void GerarAmigo(){

    if (listaAmigos.empty()) {
        cout << "Nenhum Amigo registrado\n";
        system("pause");
        return;
    }
    else if (amg <= 2) {
        cout << "Você não pode fazer o amigo secreto com menos de 3 pessoas!\n";
        system("pause");
        return;
    }
    else
    {
         // Embaralhe a lista de amigos
        random_shuffle(listaAmigos.begin(), listaAmigos.end());

        // Atribua cada amigo secreto
        for (size_t i = 0; i < listaAmigos.size(); ++i) {
            // Se for o último da lista, o amigo secreto é o primeiro
            size_t indexAmigoSecreto = (i == listaAmigos.size() - 1) ? 0 : i + 1;

            listaAmigos[i].amigoSecreto = listaAmigos[indexAmigoSecreto].nome;
    }
    }
    
}
