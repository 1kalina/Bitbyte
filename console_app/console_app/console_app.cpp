// ПРИМІТКА
/*
Це програма консольного блокноту який працює тільки зі свторенням файлів.
На цій програмі я вчусь пушити програми на гітхаб
*/


#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    string fileName;
    string content;

    cout << "Введіть назву файлу + .txt: ";
    cin >> fileName;

    // Відкриття файлу у режимі запису
    ofstream file(fileName.c_str());
    file.close();

    cout << "Починайте писати свій текст. Після завершення введіть 'зберегти та вийти' на новому рядку.\n";

    // Відкрийте файл у режимі додавання, щоб додати новий вміст
    ofstream outFile(fileName.c_str(), ios::app);

    while (true) {
        getline(cin, content);

        if (content == "зберегти та вийти")
            break;

        outFile << content << endl;
    }

    outFile.close();

    cout << "Файл збережено.\n";

    return 0;
}