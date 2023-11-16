#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <map>
#include <set>

using namespace std;

int main() {

    ifstream file;
    file.open("archivo.txt");
    if(!file) {
        cerr << "No se logra abrir el archivo. \n" << endl;
    } else {
        cout << "El archivo se abrio correctamente. \n" << endl;
    }
    file.close();

    ofstream file2;
    file.open("archivo2.txt");
    if(file2) {
        long text;
        file2 << text;
        cout << "Se escribio correctamente. \n" << endl;
    } else {
        cerr << "No se pudo abrir el archivo. \n" << endl;
    }
    file. close();

    string texto;
    cout << "Ingresa el texto: ";
    getline(cin, texto);
    stringstream ss;
    texto;
    string text_from_ss;
    cout << "El texto desde el flujo de cadena es: " << endl;
    
    //Vector
    vector<int> numeros {1, 2, 3, 4, 5};
    numeros.push_back(6);
    cout << "Vectores: " << endl;
    for(int i: numeros) {
        cout << i << " ";
    }
    //Map
    map<string, int>edad;
    edad["Juan"] = 25;
    edad.erase("Joseph");
    //Set
    set<int> conjunto {1, 2, 3, 4, 5};
    conjunto.insert(6);
    conjunto.erase(1);
    cout << endl;
    cout << "Set: " << endl;
    for(const auto& elemento: conjunto) {
        cout << elemento << " ";
    }
    return 0;
}
