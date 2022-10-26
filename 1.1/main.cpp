// Includes
#include <iostream>
#include <string>

using namespace std;

class dados{
    private:
        int idade;
        string usuario;
        string senha;
    public:
        dados(int x, string y, string z){
            idade = x;
            usuario = y;
            senha = z;
        }
        bool verifyUser(int x, string y, string z){
            if(x == idade && y == usuario && z == senha){
                return true;
            }else{
                return false;
            } 
        }
};

// Inicio do Código
int main()
{
    int idade = 21;
    string usuario = "Arthur Yukio";
    string senha = "harbor";
    dados login(idade, usuario, senha);
    while(1){
        cout << "Insira a idade do admin: ";
        cin >> idade;
        cin.ignore (80,'\n');               // Descarta um input do buffer se ele tem tamanho > 80 ou '\n'; int 
        cout << "Insira seu nome: ";
        getline(cin,usuario);
        cout << "Insira a senha: ";
        getline(cin,senha);

        dados login(idade, usuario, senha);

        if(login.verifyUser(idade, usuario, senha)){
            cout << "Acesso concedido" << endl;
            
        }
        else{
            cout << "Acesso Negado" << endl;
        }
    }
}
