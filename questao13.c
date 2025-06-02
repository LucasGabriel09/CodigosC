int main() {
    int quantidadeNotas;
    float valorNota, pesoNota, totalNotasPonderadas = 0, totalPesos = 0;

    printf("Quantas notas você deseja inserir? ");
    scanf("%d", &quantidadeNotas);

    for (int i = 1; i <= quantidadeNotas; i++) {
        printf("Nota %d: ", i);
        scanf("%f", &valorNota);
        printf("Peso da nota %d: ", i);
        scanf("%f", &pesoNota);

        totalNotasPonderadas += valorNota * pesoNota;
        totalPesos += pesoNota;
    }

    if (totalPesos != 0)
        printf("Média ponderada = %.2f\n", totalNotasPonderadas / totalPesos);
    else
        printf("Soma dos pesos é zero. Não é possível calcular.\n");

    return 0;
}
