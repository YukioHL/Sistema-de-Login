// Includes
#include <iostream>
#include <string>

using namespace std;

struct data{
    int idade;
    string usuario;
    string senha;
};

// Inicio do Código
int main()
{
    struct data loginPadrao;
    struct data login;
    loginPadrao.idade = 21;
    loginPadrao.usuario = "Arthur Yukio";
    loginPadrao.senha = "harbor";

    while(1){
        cout << "Insira a idade do admin: ";
        cin >> login.idade;
        cin.ignore (80,'\n');               // Descarta um input do buffer se ele tem tamanho > 80 ou '\n'; int 
        cout << "Insira seu nome: ";
        getline(cin,login.usuario);
        cout << "Insira a senha: ";
        getline(cin,login.senha);


        if(login.idade == loginPadrao.idade && login.usuario == loginPadrao.usuario && login.senha == loginPadrao.senha){
            cout << "Acesso concedido" << endl;
            
        }
        else{
            cout << "Acesso Negado" << endl;
        }
    }
}
