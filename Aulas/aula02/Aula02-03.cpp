//============================================================================
// Name        : Aula02-03.cpp
// Author      : Prof. Alexandre Donizeti Alves
//============================================================================

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
 // caractere
 cout.put('A');
 cout.put('A').put('p').put('p').put('\n');
 cout.put(65);

 cout << endl << endl;

 cout << "|" <<  1 << "|"  << endl;         // |1|
 cout << "|" << -1 << "|"  << endl;         // |-1|
 cout << "|" <<  123456789 << "|" << endl;  // |123456789|
 cout << "|" << -123456789 << "|" << endl;  // |-123456789|

 cout << endl;

 cout << "|" << 1.20000 << "|" << endl;       // |1.2| (zeros a esquerda nao exibidos)
 cout << "|" << 1.23456 << "|" << endl;       // |1.23456| (precisao default: 6 digitos)
 cout << "|" << -1.23456 << "|" << endl;      // |-1.23456|
 cout << "|" << 1.234567 << "|" << endl;      // |1.23457|
 cout << "|" << 123456.7 << "|" << endl;      // |123457|
 cout << "|" << 1234567.89 << "|" << endl;    // |1.23457e+006| (notacao cientifica para e>=6)
 cout << "|" << 0.0001234567 << "|" << endl;  // |0.000123457|  (zeros a esquerda nao contados para a precisao)
 cout << "|" << 0.00001234567 << "|" << endl; // |1.23457e-005| (notacao cientifica para e<=-5)

 cout << endl;

 // setw() - usar <iomanip>
 cout << "|" << setw(5) << 123 << "|" << 123 << endl;  // |  123|123
 cout << "|" << setw(5) << -123 << "|" << endl;        // | -123|123 (sinal de menos eh incluido na largura)
 cout << "|" << setw(5) << 1234567 << "|" << endl;     // |1234567| (nenhum truncamento de dados)

 cout << endl;

 // setfill() e alinhamento (left|right|internal)
 cout << setfill('_');
 cout << setw(6) << 123 << setw(4) << 12 << endl;      // ___123__12
 cout << left;
 cout << setw(6) << 123 << setw(4) << 12 << endl;      // 123___12__

 cout << endl;

 // alinhamento (left|right|internal)
 cout << showpos;  // exibe sinal positivo (+)
 cout             << '|' << setw(6) << 123 << '|' << endl;  // |  +123| (alinhamento default)
 cout << left     << '|' << setw(6) << 123 << '|' << endl;  // |+123  |
 cout << right    << '|' << setw(6) << 123 << '|' << endl;  // |  +123|
 cout << internal << '|' << setw(6) << 123 << '|' << endl;  // |+  123|

 cout << endl;

 // formato de ponto flutuante default
 cout << "|" << 123.456789 << "|" << endl;    // |123.457| (formato de ponto fixo - precisao default eh 6, i.e., 6 dígitos antes e depois do ponto decimal)
 cout << "|" << 1234567.89 << "|" << endl;    // |1.23457e+006| (notacao cientifica para e>=6 - precisao default eh 6)

 cout << endl;

 // showpoint - exibe zeros a esquerda no modo default
 cout << showpoint << 123. << "," << 123.4 << endl; // 123.000,123.400
 cout << noshowpoint << 123. << endl;               // 123

 cout << endl;

 // formatacao de ponto fixo
 cout << fixed;
 cout << "|" << 1234567.89 << "|" << endl;    // |1234567.890000| (precisao default eh 6, i.e., 6 digitos depois do ponto decimal)

 cout << endl;

 // formatacao cientifica
 cout << scientific;
 cout << "|" << 1234567.89 << "|" << endl;    // |1.234568e+006| (precisao default eh 6, i.e., 6 digitos depois do ponto decimal)

 cout << endl;

 // precisao
 cout << fixed << setprecision(2);
 cout << "|" << 123.456789 << "|" << endl;  // |123.46|
 cout << "|" << 123. << "|" << endl;        // |123.00|

 cout << setprecision(0);
 cout << "|" << 123.456789 << "|" << endl;  // |123|

 cout << 1234 << endl;        // 1234 (default is dec)
 cout << hex << 1234 << endl; // 4d2
 cout << 1234 << "," << -1234 << endl; // 4d2,fffffb2e (numero negativo no complemento de 2)

 cout << oct << 1234 << endl;          // 2322
 cout << 1234 << "," << -1234 << endl; // 2322,37777775456
 cout << setbase(10) << 1234 << endl;  // 1234 (setbase requer <iomanip>)

 cout << endl;

 // showbase - hex com prefixo 0x; oct com prefixo 0
 cout << showbase << 123 << "," << hex << 123 << "," << oct << 123 << endl;  // 123,0x7b,0173
 cout << noshowbase << dec;

 cout << endl;

 // showpos - sinal (+)
 cout << showpos << 123 << endl;  // +123

 // uppercase
 cout << uppercase << hex << 123 << endl;  // 7B

 // boolalpha - tipo bool (true/false; 1,0)
 cout << boolalpha << false << "," << true << endl;   // false,true
 cout << noboolalpha << false << "," << true << endl; // 0,1

 return 0;
}
