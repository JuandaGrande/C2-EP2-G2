#include <iostream>
#include <string>
using namespace std;

class ExcelColumnConverter {
public:
    int titleToNumber(const string& caracteres) {
        int result = 0;

        for (int i = 0; i < caracteres.size(); i++) {
            char c = caracteres[i];         
            int valor = c - 'A' + 1;          
            result = result * 26 + valor;
        }

        return result;
    }
};

int main() {
    ExcelColumnConverter converter;
    string caracteres;

    cout << "Ingresa el nombre de la columna (por ejemplo AB): ";
    cin >> caracteres;

    int columnNumber = converter.titleToNumber(caracteres);
    cout << "El número correspondiente es: " << columnNumber << endl;

    return 0;
}