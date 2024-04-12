// ATV1
/*
#include <iostream>

using namespace std;

int main() {
    // Definindo os preços dos serviços
    const double precoInstalacao = 300.00;
    const double precoLimpeza = 150.00;
    const double precoManutencao = 499.99;

    // Calculando o total dos serviços
    double totalServicos = precoInstalacao + precoLimpeza + precoManutencao;

    // Exibindo o total a ser pago pelo cliente
    cout << "O cliente devera pagar a empresa Termal: R$" << totalServicos << endl;

    return 0;
}*/

// ATV2
/*
#include <iostream>

using namespace std;

int main() {
    // Definindo o valor por hora e as horas trabalhadas por Joaquim
    const double valorPorHora = 35.00;
    const int horasPorDia = 8;

    // Calculando o total a receber
    double salarioDiario = valorPorHora * horasPorDia;

    // Exibindo o total a receber por Joaquim
    cout << "Ao final do dia, Joaquim deve receber: R$" << salarioDiario << endl;

    return 0;
}*/

// ATV3
/*
#include <iostream>

using namespace std;

int main() {
    // Definindo o número de unidades por caixa e o número de caixas compradas
    const int unidadesPorCaixa = 27;
    int caixasCompradas = 16;

    // Calculando o total de bombons
    int totalBombons = unidadesPorCaixa * caixasCompradas;

    // Exibindo o total de bombons que Pamela tem
    cout << "Pamela tem um total de " << totalBombons << " bombons." << endl;

    return 0;
}*/

// ATV4
/*
#include <iostream>

using namespace std;

int main() {
    // Definindo o número total de garrafas vendidas e o número de garrafas por caixa
    const int garrafasVendidas = 300;
    const int garrafasPorCaixa = 20;

    // Calculando o número de caixas usadas
    int caixasUsadas = garrafasVendidas / garrafasPorCaixa;

    // Exibindo o número de caixas usadas
    cout << "Foram usadas " << caixasUsadas << " caixas de água." << endl;

    return 0;
}*/

// ATV5
/*
#include <iostream>

using namespace std;

int main() {
    // Definindo as quantidades e o preço das camisetas
    int camisetasCompradasInicialmente = 120;
    int camisetasVendidas = 80;
    int camisetasCompradasDepois = 50;
    double precoPorCamiseta = 30.00;

    // Calculando o número de camisetas que restam na loja
    int camisetasRestantes = camisetasCompradasInicialmente - camisetasVendidas;

    // Somando as camisetas adicionais compradas
    int totalCamisetas = camisetasRestantes + camisetasCompradasDepois;

    // Calculando o faturamento total
    double faturamento = totalCamisetas * precoPorCamiseta;

    // Exibindo o número total de camisetas e o faturamento
    cout << "A loja tem agora " << totalCamisetas << " camisetas." << endl;
    cout << "O faturamento total foi de R$" << faturamento << "." << endl;

    return 0;
}*/