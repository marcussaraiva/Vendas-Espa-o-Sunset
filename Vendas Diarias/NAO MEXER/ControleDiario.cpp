#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

float totalDiario, maiorVenda=1, metaDia, totalDinheiro, totalDebito, totalCredito, totalCreditoTaxa;
char formaMaior[20];

float fVenda(){
	
	float valorProduto, valorTotal, valorAcrescimo;
	int quantidadeProduto, respostaVenda;
	char formaPagamento[20];
	
	system("cls");
	
	while(respostaVenda != 2){
		
		printf("\nValor: ");
		scanf("%f", &valorProduto);
		printf("\nQuantidade: ");
		scanf("%d", &quantidadeProduto);
		
		valorProduto *= quantidadeProduto;
		valorTotal += valorProduto;
		printf("\nParcial: R$%.2f\n", valorTotal);
		
		printf("\n1 - Continuar\n2 - Encerrar\n\nResposta: ");
		scanf("%d", &respostaVenda);
	}
	
	printf("Valor Total: R$ %.2f\nForma de Pagamento: ", valorTotal);
	scanf("%s", &formaPagamento);
	
	if(strcmp(formaPagamento,"dinheiro")==0|strcmp(formaPagamento,"Dinheiro")==0|strcmp(formaPagamento,"DINHEIRO")==0){
		totalDinheiro += valorTotal;
	}
	
	if(strcmp(formaPagamento,"debito")==0|strcmp(formaPagamento,"Debito")==0|strcmp(formaPagamento,"DEBITO")==0){
		totalDebito += valorTotal;
	}
	
	if(strcmp(formaPagamento,"credito")==0|strcmp(formaPagamento,"Credito")==0|strcmp(formaPagamento,"CREDITO")==0){
		totalCredito += valorTotal;
		valorAcrescimo = (valorTotal*0.05);
		totalCreditoTaxa += (valorTotal + valorAcrescimo);
	}
	
	if(valorTotal > maiorVenda){
		
		maiorVenda = valorTotal;
		strcpy(formaMaior,formaPagamento);
			
	}

	totalDiario += valorTotal;
}

void fParcial(){
	
	float restanteMeta, extraMeta;
	
	system("cls");
	
	restanteMeta = metaDia - totalDiario;
	
	if(restanteMeta <= metaDia)
		printf("\nParcial Diaria: R$ %.2f\nFaltam R$ %.2f para META\n", totalDiario, restanteMeta); 	
	else{
		extraMeta = restanteMeta*-1;
		printf("\t\nParcial Diaria: R$ %.2f\nPassou em R$ %.2f a META\n", totalDiario, extraMeta);
	}
		

}

int fEncerrar(){
	float totalMaquina;
	system("cls");
	
	totalMaquina = totalDebito + totalCreditoTaxa;
	
	printf("\n\tENCERRAMENTO DE VENDAS\n\t");
	printf("\nTOTAL VENDIDO: R$ %.2f\n\nMAIOR VENDA: R$ %.2f\nFORMA DE PAGAMENTO: %s\n\nTOTAL EM DINHEIRO: R$ %.2f\nTOTAL DEBITO: R$ %.2f\nTOTAL CREDITO: R$ %.2f\nTOTAL CREDITO (COM TAXA): R$ %.2f\nTOTAL MAQUINA: R$ %.2f\n\n", totalDiario, maiorVenda, formaMaior, totalDinheiro, totalDebito, totalCredito, totalCreditoTaxa, totalMaquina);
	
	if(totalDiario >= metaDia) {
		printf("PARABENS VOCE BATEU A META!\n\n");
	}
}

// Menu
int main(){
	
	int respostaMenu;
	
	printf("META DO DIA: ");
	scanf("%f", &metaDia);
	while(respostaMenu != 3){
		
		printf("\n1 - VENDA\n2 - PARCIAL\n3 - ENCERRAR\n\nResposta: ");
		scanf("%d", &respostaMenu);		
	
		if(respostaMenu == 1)
			fVenda();
		else if (respostaMenu == 2)
			fParcial();
		else if(respostaMenu == 3)
			fEncerrar();
		else printf("\nOperador Invalido!");
	
	}
	system("pause");
	system("pause");
	system("pause");
}
