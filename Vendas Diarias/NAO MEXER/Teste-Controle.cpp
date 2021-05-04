#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

float totalDiario, maiorVenda=1, metaDia, totalDinheiro, totalDebito, totalCredito;
char formaMaior[10], data[10];
	
float fVenda(FILE* pArquivo){
	
	float valorProduto, valorTotal;
	int quantidadeProduto, respostaVenda, codigoDeBarras, formaPagamento;	
//LIMPA TELA PARA PROXIMA OPERACAO
	system("cls");
//INSERCAO DE PRODUTOS
	while(respostaVenda != 3){
		
		printf("\nCodigo: ");
		scanf("%d", &codigoDeBarras);
		fprintf(pArquivo, "\nCodigo: %d", codigoDeBarras);
//SESSAO DE IDENTIFICAÇAO DE CODIGO DE BARRAS
		switch(codigoDeBarras){
			case 17: valorProduto = 0.01;
				printf("\nValor: R$ 0,01\n");
				fprintf(pArquivo, "\nValor: R$ 0,01\n");
				break;
			case 1007: valorProduto = 1;
				printf("\nValor: R$ 1,00\n");
				fprintf(pArquivo, "\nValor: R$ 1,00\n");
				break;
			case 5005: valorProduto = 5;
				printf("\nValor: R$ 5,00\n");
				fprintf(pArquivo, "\nValor: R$ 5,00\n");
				break;
			case 12997: valorProduto = 12.99;
				printf("\nValor: R$ 12,99\n");
				fprintf(pArquivo, "\nValor: R$ 12,99\n");
				break;
			case 15004: valorProduto = 15;
				printf("\nValor: R$ 15,00\n");
				fprintf(pArquivo, "\nValor: R$ 15,00\n");
				break;
			case 16001: valorProduto = 16;
				printf("\nValor: R$ 16,00\n");
				fprintf(pArquivo, "\nValor: R$ 16,00\n");
				break;
			case 16995: valorProduto = 16.99;
				printf("\nValor: R$ 16,99\n");
				fprintf(pArquivo, "\nValor: R$ 16,99\n");
				break;
			case 11112: valorProduto = 18;
				printf("\nValor: R$ 18,00\n");
				fprintf(pArquivo, "\nValor: R$ 18,00\n");
				break;
			case 19996: valorProduto = 19.99;
				printf("\nValor: R$ 19,99\n");
				fprintf(pArquivo, "\nValor: R$ 19,99\n");
				break;
			case 22002: valorProduto = 22;
				printf("\nValor: R$ 22,00\n");
				fprintf(pArquivo, "\nValor: R$ 22,00\n");
				break;
			case 25003: valorProduto = 25;
				printf("\nValor: R$ 25,00\n");
				fprintf(pArquivo, "\nValor: R$ 25,00\n");
				break;
			case 27007: valorProduto = 27;
				printf("\nValor: R$ 27,00\n");
				fprintf(pArquivo, "\nValor: R$ 27,00\n");
				break;
			case 30007: valorProduto = 30;
				printf("\nValor: R$ 30,00\n");
				fprintf(pArquivo, "\nValor: R$ 30,00\n");
				break;
			case 35002: valorProduto = 35;
				printf("\nValor: R$ 35,00\n");
				fprintf(pArquivo, "\nValor: R$ 35,00\n");
				break;
			case 40006: valorProduto = 40;
				printf("\nValor: R$ 40,00\n");
				fprintf(pArquivo, "\nValor: R$ 40,00\n");
				break;
			case 45001: valorProduto = 45;
				printf("\nValor: R$ 45,00\n");
				fprintf(pArquivo, "\nValor: R$ 45,00\n");
				break;
			case 50005: valorProduto = 50;
				printf("\nValor: R$ 50,00\n");
				fprintf(pArquivo, "\nValor: R$ 50,00\n");
				break;
			case 22224: valorProduto = 55;
				printf("\nValor: R$ 55,00\n");
				fprintf(pArquivo, "\nValor: R$ 55,00\n");
				break;
			case 60004: valorProduto = 60;
				printf("\nValor: R$ 60,00\n");
				fprintf(pArquivo, "\nValor: R$ 60,00\n");
				break;
			case 65009: valorProduto = 65;
				printf("\nValor: R$ 65,00\n");
				fprintf(pArquivo, "\nValor: R$ 65,00\n");
				break;
			case 70003: valorProduto = 70;
				printf("\nValor: R$ 70,00\n");
				fprintf(pArquivo, "\nValor: R$ 70,00\n");
				break;
			case 75008: valorProduto = 75;
				printf("\nValor: R$ 75,00\n");
				fprintf(pArquivo, "\nValor: R$ 75,00\n");
				break;
			case 200004: valorProduto = 200;
				printf("\nValor: R$ 200,00\n");
				fprintf(pArquivo, "\nValor: R$ 200,00\n");
				break;
			case 250009: valorProduto = 250;
				printf("\nValor: R$ 250,00\n");
				fprintf(pArquivo, "\nValor: R$ 250,00\n");
				break;
			default: break; 
		}
//SESSAO DE QUANTIDADE DO PRODUTO
		printf("\nQuantidade: ");
		scanf("%d", &quantidadeProduto);
		fprintf(pArquivo, "\nQuantidade: %d", quantidadeProduto);
//CALCULANDO O VALOR DO PRODUTO E ADICIONANDO AO VALOR TOTAL
		valorProduto *= quantidadeProduto;
		valorTotal += valorProduto;
		printf("\nParcial: R$%.2f\n", valorTotal);
		fprintf(pArquivo, "\nParcial: R$%.2f\n", valorTotal);
//FLAG PARA FINAL DO LOOP
		printf("\n1 - Continuar\n2 - Reajustar\n3 - Encerrar\n\nResposta: ");
		scanf("%d", &respostaVenda);
//SESSAO DE REAJUSTE
		if(respostaVenda==2){
			while(respostaVenda==2){
				printf("\nCodigo: "); scanf("%d", &codigoDeBarras);
				fprintf(pArquivo, "\nCodigo: %d", codigoDeBarras);
//SESSAO DE IDENTIFICAÇAO DE CODIGO DE BARRAS
				switch(codigoDeBarras){
					case 17: valorProduto = -0.01;
						printf("\nValor: - R$ 0,01\n");
						fprintf(pArquivo, "\nValor: - R$ 0,01\n");
						break;
					case 1007: valorProduto = -1;
						printf("\nValor: - R$ 1,00\n");
						fprintf(pArquivo, "\nValor: - R$ 1,00\n");
						break;
					case 5005: valorProduto = -5;
						printf("\nValor: - R$ 5,00\n");
						fprintf(pArquivo, "\nValor: - R$ 5,00\n");
						break;
					case 12997: valorProduto = -12.99;
						printf("\nValor: - R$ 12,99\n");
						fprintf(pArquivo, "\nValor: - R$ 12,99\n");
						break;
					case 15004: valorProduto = -15;
						printf("\nValor: - R$ 15,00\n");
						fprintf(pArquivo, "\nValor: - R$ 15,00\n");
						break;
					case 16001: valorProduto = -16;
						printf("\nValor: - R$ 16,00\n");
						fprintf(pArquivo, "\nValor: - R$ 16,00\n");
						break;
					case 16995: valorProduto = - 16.99;
						printf("\nValor: - R$ 16,99\n");
						fprintf(pArquivo, "\nValor: - R$ 16,99\n");
						break;
					case 11112: valorProduto = -18;
						printf("\nValor: - R$ 18,00\n");
						fprintf(pArquivo, "\nValor: - R$ 18,00\n");
						break;
					case 19996: valorProduto = -19.99;
						printf("\nValor: - R$ 19,99\n");
						fprintf(pArquivo, "\nValor: - R$ 19,99\n");
						break;
					case 22002: valorProduto = -22;
						printf("\nValor: - R$ 22,00\n");
						fprintf(pArquivo, "\nValor: - R$ 22,00\n");
						break;
					case 25003: valorProduto = -25;
						printf("\nValor: - R$ 25,00\n");
						fprintf(pArquivo, "\nValor: - R$ 25,00\n");
						break;
					case 27007: valorProduto = -27;
						printf("\nValor: - R$ 27,00\n");
						fprintf(pArquivo, "\nValor: - R$ 27,00\n");
						break;
					case 30007: valorProduto = -30;
						printf("\nValor: - R$ 30,00\n");
						fprintf(pArquivo, "\nValor: - R$ 30,00\n");
						break;
					case 35002: valorProduto = -35;
						printf("\nValor: - R$ 35,00\n");
						fprintf(pArquivo, "\nValor: - R$ 35,00\n");
						break;
					case 40006: valorProduto = -40;
						printf("\nValor: - R$ 40,00\n");
						fprintf(pArquivo, "\nValor: - R$ 40,00\n");
						break;
					case 45001: valorProduto = -45;
						printf("\nValor: - R$ 45,00\n");
						fprintf(pArquivo, "\nValor: - R$ 45,00\n");
						break;
					case 50005: valorProduto = -50;
						printf("\nValor: - R$ 50,00\n");
						fprintf(pArquivo, "\nValor: - R$ 50,00\n");
						break;
					case 22224: valorProduto = -55;
						printf("\nValor: - R$ 55,00\n");
						fprintf(pArquivo, "\nValor: - R$ 55,00\n");
						break;
					case 60004: valorProduto = -60;
						printf("\nValor: - R$ 60,00\n");
						fprintf(pArquivo, "\nValor: - R$ 60,00\n");
						break;
					case 65009: valorProduto = -65;
						printf("\nValor: - R$ 65,00\n");
						fprintf(pArquivo, "\nValor: - R$ 65,00\n");
						break;
					case 70003: valorProduto = -70;
						printf("\nValor: - R$ 70,00\n");
						fprintf(pArquivo, "\nValor: - R$ 70,00\n");
						break;
					case 75008: valorProduto = -75;
						printf("\nValor: - R$ 75,00\n");
						fprintf(pArquivo, "\nValor: - R$ 75,00\n");
						break;
					case 200004: valorProduto = -200;
						printf("\nValor: - R$ 200,00\n");
						fprintf(pArquivo, "\nValor: - R$ 200,00\n");
						break;
					case 250009: valorProduto = -250;
						printf("\nValor: - R$ 250,00\n");
						fprintf(pArquivo, "\nValor: - R$ 250,00\n");
						break;
					default: break; 
				}
//SESSAO DE QUANTIDADE DO PRODUTO
				printf("\nQuantidade: ");
				scanf("%d", &quantidadeProduto);
				fprintf(pArquivo, "\nQuantidade: %d", quantidadeProduto);
//CALCULANDO O VALOR DO PRODUTO E ADICIONANDO AO VALOR TOTAL
				valorProduto *= quantidadeProduto;
				valorTotal += valorProduto;
				printf("\nParcial: R$%.2f\n", valorTotal);
				fprintf(pArquivo, "\nParcial: R$%.2f\n", valorTotal);
				printf("\n1 - Continuar\n2 - Reajustar\n3 - Encerrar\n\nResposta: ");
				scanf("%d", &respostaVenda);
			}
		}
	}
	
//SESSAO PARA DESIGNAÇAO DE DADOS DA VENDA
	printf("Valor Total: R$ %.2f\nForma de Pagamento: ", valorTotal);
	scanf("%d", &formaPagamento);
	
//SESSAO PARA DESIGNAÇAO DO VALOR À FORMA DE PAGAMENTO RESPECTIVA
	if(formaPagamento == 11112){
		totalDinheiro += valorTotal;
		fprintf(pArquivo, "\nValor Total: R$ %.2f\nForma de Pagamento: Dinheiro", valorTotal);
	}	
	if(formaPagamento == 22224){
		totalDebito += valorTotal;
		fprintf(pArquivo, "\nValor Total: R$ %.2f\nForma de Pagamento: Debito", valorTotal);
	}	
	if(formaPagamento == 33336){
		totalCredito += valorTotal;
		fprintf(pArquivo, "\nValor Total: R$ %.2f\nForma de Pagamento: Credito", valorTotal);
	}
//SESSAO PARA SEPARACAO DA MAIOR VENDA
	if(valorTotal > maiorVenda){
		
		maiorVenda = valorTotal;
//SESSAO PARA ADICAO DA FORMA DE PAGAMENTO DA MAIOR VENDA
		if(formaPagamento == 11112){
			strcpy(formaMaior,"Dinheiro");
		}
		else if(formaPagamento == 22224){
			strcpy(formaMaior,"Debito");
		}
		else if(formaPagamento == 33336){
			strcpy(formaMaior,"Credito");
		}
	}
//ADICAO DO VALOR TOTAL DA VENDA AO VALOR TOTAL DO DIA
	totalDiario += valorTotal;
	fprintf(pArquivo, "\n------------------------------\n");
	fclose(pArquivo);
}

void fParcial(){
	
	float restanteMeta, extraMeta;
// LIMPA TELA PARA PROXIMA OPERACAO
	system("cls");
// CALCULO PARA RESTANTE DA META
	restanteMeta = metaDia - totalDiario;
// AMOSTRA DO CALCULO	
	printf("\nParcial Diaria: R$ %.2f\nFaltam R$ %.2f para META\n", totalDiario, restanteMeta);
	
}

int fEncerrar(FILE* pEncerrar){
	float totalMaquina;
	
	pEncerrar = fopen("Encerrar.txt", "a");
	fprintf(pEncerrar, "\n------------------------------\n");
	fprintf(pEncerrar, "\nDATA: %s\n", data);
	fprintf(pEncerrar, "\n------------------------------\n");
// LIMPA TELA PARA PROXIMA OPERACAO
	system("cls");
// CALCULO DO TOTAL DA MAQUINA
	totalMaquina = totalDebito + totalCredito;
// AMOSTRAGEM DE DADOS
	printf("\n\tENCERRAMENTO DE VENDAS\n\t\nTOTAL VENDIDO: R$ %.2f\n\nMAIOR VENDA: R$ %.2f\nFORMA DE PAGAMENTO: %s\n\nTOTAL EM DINHEIRO: R$ %.2f\nTOTAL DEBITO: R$ %.2f\nTOTAL CREDITO: R$ %.2f\nTOTAL MAQUINA: R$ %.2f\n\n", totalDiario, maiorVenda, formaMaior, totalDinheiro, totalDebito, totalCredito, totalMaquina);
	fprintf(pEncerrar, "\n\tENCERRAMENTO DE VENDAS\n\t\nTOTAL VENDIDO: R$ %.2f\n\nMAIOR VENDA: R$ %.2f\nFORMA DE PAGAMENTO: %s\n\nTOTAL EM DINHEIRO: R$ %.2f\nTOTAL DEBITO: R$ %.2f\nTOTAL CREDITO: R$ %.2f\nTOTAL MAQUINA: R$ %.2f\n\n", totalDiario, maiorVenda, formaMaior, totalDinheiro, totalDebito, totalCredito, totalMaquina);
	
	fclose(pEncerrar);
}

int main(){
	
	int respostaMenu;
	FILE* pArquivo;
	FILE* pEncerrar;
	
	pArquivo = fopen("Historico.txt","a");
	printf("DATA: ");
	gets(data);
//ADIÇAO DA META DO DIA
	printf("META DO DIA: ");
	scanf("%f", &metaDia);
	fprintf(pArquivo, "\n------------------------------\n");
	fprintf(pArquivo, "\nDATA: %s\n", data);
	fprintf(pArquivo, "\n------------------------------\n");
	fclose(pArquivo);
//SESSAO DO MENU
	while(respostaMenu != 3){
		
		pArquivo = fopen("Historico.txt","a");
		printf("\n1 - VENDA\n2 - PARCIAL\n3 - ENCERRAR\n\nResposta: ");
		scanf("%d", &respostaMenu);		
	
		if(respostaMenu == 1)
			fVenda(pArquivo);
		else if (respostaMenu == 2)
			fParcial();
		else if(respostaMenu == 3)
			fEncerrar(pEncerrar);
		else printf("\nOperador Invalido!");
	
	}
//TRAVA DE SEGURACA DE ENCERRAMENTO
	system("pause");
}
