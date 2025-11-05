#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Livro {
    private:
        // atributos da class livro
        string nome;
        string autor;

    public:
        Livro(string n, string a) : nome(n), autor(a) {}

        string getNome() const { return nome; }
        string getAutor() const { return autor; }
};

class Biblioteca {
    private:
        vector<Livro> livros; // vector para armazenar varios livros

    public:
            // usando o void pois nao retorna valor
            void cadastrar() {
                string nome, autor;
                cout << " = Cadastrar Livro = \n";
                cin.ignore();
                cout << "Digite o nome do livro: ";
                getline(cin, nome);
                cout << "Digite o autor do livro: ";
                getline(cin, autor);
                
                // ajuda de IA
                livros.emplace_back(nome, autor);
                cout << " = Livro cadastrado com sucesso! = \n\n";
                //
            }

            void buscar() {
                string Busca;
                    cout << " = Buscar Livro = \n";
                    cin.ignore();
                    cout << "Digite o nome do livro: ";
                    getline(cin, Busca);
            
            // ajuda de IA
            bool encontrado = false;
            for (const auto& livro : livros) {
                if (livro.getNome() == Busca) {
                    cout << "Livro encontrado!\n";
                    cout << "Nome: " << livro.getNome() << "\n";
                    cout << "Autor: " << livro.getAutor() << "\n\n";
                    encontrado = true;
                    break;
                }
            }
            //

            if (!encontrado)
                cout << "Livro nao encontrado.\n\n";
            }

            void sair() {
                cout << "Sair do Sistema. \n";
            }
};

int main() {
    Biblioteca biblioteca;
    int op;

    do {
        // criacao do menu
        cout << " = Menu = \n";
        cout << " 1 - Cadastrar Livro \n";
        cout << " 2 - Buscar Livro \n";
        cout << " 3 - Sair \n";
        cout << "Escolher op: ";
        cin >> op;

        switch (op) {
            // chamando a class biblioteca com os dados do void
            case 1:
                biblioteca.cadastrar();
                break;
            case 2:
                biblioteca.buscar();
                break;
            case 3:
                biblioteca.sair();
                break;
            default:
                cout << "Opcao invalida.\n";
        }
    } while (op != 3);

    return 0;
}