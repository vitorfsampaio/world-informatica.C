#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main(){
	setlocale (LC_ALL, "Portuguese");
	
	float valor;
	int i, dec, opc, pag, per, tec, qtd;
	char sen[3] = "123", nome[40], tel[30], end[30], cor[20];
	
	printf("Bem-vindo a World Informática!\n");
	
	//Sistema de senha.	
	for(i=2; i>=0;i--){
		printf("Digite a senha para continuar:\n");
		scanf("%s", sen);
		system("cls");
		if(strcmp(sen, "123") == 1){
			printf("Senha incorreta!\n");
			printf("Tentativas restantes: %d\n", i);
			if(i == 0){
				printf("Limite de tentativas atingido. Acesso negado!\n");
				exit(-1);
			}
		} else{
			printf("Acesso liberado!\n");
			break;		
		}	
	}
	
	//Looping de menu
	for(i=0;i<=50;i++){
		printf("O que gostaria de fazer?\n\n");
		printf("1 - Cadastro de cliente.\n2 - Compra de computadores.\n3 - Compra de periféricos.\n4 - Sair do programa.\n");
		scanf("%d", &dec);
		system("cls");
		fflush(stdin);
		
		//Cadastro de clientes.
		switch(dec){
			case 1:
				printf("-------Cadastro de clientes-------\n\n");
				printf("Insira o nome do cliente:\n");
				fgets(nome, 40, stdin);
				printf("Insira o telefone do cliente:\n");
				fgets(tel, 30, stdin);
				printf("Insira o endereço do cliente:\n");
				fgets(end, 30, stdin);
				system("cls");
				printf("Cliente cadastrado!\n");
				printf("Nome: %s", nome);
				printf("Telefone: %s", tel);
				printf("Endereço: %s", end);
				system("pause");
				system("cls");
			break;
			//Compra de computadores.
			case 2:
				printf("-------Compra de computadores-------\n\n");
				printf("Opções disponíveis:\n");
				printf("---------------------\n");
				printf("1 - PC MasterRace:\n\nPlaca de vídeo: RTX 4090TI\nProcessador: i9 9900kf\nMemória: 32GB RAM Corsair DDR4\nArmazenamento: 10TB SSD\nAlimentação: Fonte 1000W Corsair\n\nPreço: R$12750,77\n---------------------\n");
				printf("2 - PC MediumRace:\n\nPlaca de vídeo: RTX 2070 Super\nProcessador: i7 7700k\nMemória: 16GB RAM AlienWare DDR4\nArmazenamento: 2TB SSD\nAlimentação: Fonte 750W CoolerMaster\n\nPreço: R$7234,61\n---------------------\n");
				printf("3 - PC da Xuxa:\n\nPlaca de vídeo: Gráficos integrados\nProcessador: Pentium G4560\nMemória: 4GB RAM Piratebay DDR1\nArmazenamento: 500MB HDD\nAlimentação: Fonte 150W NeoEnergia\n\nPreço: R$250,21\n---------------------\n");
				printf("Qual opção gostaria?\n");
				fflush(stdin);
				scanf("%d", &opc);
				system("cls");
				switch(opc){
					case 1:
						printf("PC MasterRace!\n");
						fflush(stdin);
						printf("Digite a cor do seu gabinete:\n");
						fgets(cor, 20, stdin);
						system("cls");
						printf("Qual a forma de pagamento?\n1 - Débito\n2 - Crédito\n3 - Pix\n");
						scanf("%d", &pag);
						system("cls");
						if(pag == 1){
							printf("Compra: PC MasterRace\n");
							printf("Cor do gabinete: %s", cor);
							printf("Valor final: R$12750,77\n");
							printf("Forma de pagamento: Débito\n");
							system("pause");
							system("cls");
							break;
						} else if(pag == 2){
							printf("Compra: PC MasterRace\n");
							printf("Cor do gabinete: %s", cor);
							printf("Valor final: R$12750,77\n");
							printf("Forma de pagamento: Crédito\n");
							system("pause");
							system("cls");
						} else if(pag == 3){
							printf("Compra: PC MasterRace\n");
							printf("Cor do gabinete: %s", cor);
							printf("Valor final: R$12750,77\n");
							printf("Forma de pagamento: Pix\n");
							system("pause");
							system("cls");
						} else{
							printf("Opção Indisponível!\n");
							system("pause");
							system("cls");
						}
					break;
					case 2:
						printf("PC MediumRace!\n");
						fflush(stdin);
						printf("Digite a cor do seu gabinete:\n");
						fgets(cor, 20, stdin);
						system("cls");
						printf("Qual a forma de pagamento?\n1 - Débito\n2 - Crédito\n3 - Pix\n");
						scanf("%d", &pag);
						system("cls");
						if(pag == 1){
							printf("Compra: PC MediumRace\n");
							printf("Cor do gabinete: %s", cor);
							printf("Valor final: R$7234,61\n");
							printf("Forma de pagamento: Débito\n");
							system("pause");
							system("cls");
							break;
						} else if(pag == 2){
							printf("Compra: PC MediumRace\n");
							printf("Cor do gabinete: %s", cor);
							printf("Valor final: R$7234,61\n");
							printf("Forma de pagamento: Crédito\n");
							system("pause");
							system("cls");
						} else if(pag == 3){
							printf("Compra: PC MediumRace\n");
							printf("Cor do gabinete: %s", cor);
							printf("Valor final: R$7234,61\n");
							printf("Forma de pagamento: Pix\n");
							system("pause");
							system("cls");
						} else{
							printf("Opção Indisponível!\n");
							system("pause");
							system("cls");
						}
					break;
					case 3:
						printf("PC da Xuxa!\n");
						fflush(stdin);
						printf("Digite a cor do seu gabinete:\n");
						fgets(cor, 20, stdin);
						system("cls");
						printf("Qual a forma de pagamento?\n1 - Débito\n2 - Crédito\n3 - Pix\n");
						scanf("%d", &pag);
						system("cls");
						if(pag == 1){
							printf("Compra: PC da Xuxa\n");
							printf("Cor do gabinete: %s", cor);
							printf("Valor final: R$250,21\n");
							printf("Forma de pagamento: Débito\n");
							system("pause");
							system("cls");
							break;
						} else if(pag == 2){
							printf("Compra: PC da Xuxa\n");
							printf("Cor do gabinete: %s", cor);
							printf("Valor final: R$250,21\n");
							printf("Forma de pagamento: Crédito\n");
							system("pause");
							system("cls");
						} else if(pag == 3){
							printf("Compra: PC da Xuxa\n");
							printf("Cor do gabinete: %s", cor);
							printf("Valor final: R$250,21\n");
							printf("Forma de pagamento: Pix\n");
							system("pause");
							system("cls");
						} else{
							printf("Opção Indisponível!\n");
							system("pause");
							system("cls");
						}
					break;
					default:
						printf("Opção indisponível. Tente novamente mais tarde!\n");
						system("pause");
						system("cls");
					break;	
				}
			break;
			//Compra de periféricos.
			case 3:
				printf("-------Compra de Periféricos-------\n\n");
				printf("O que está buscando?\n");
				printf("1 - Teclado Mecânico\n");
				printf("2 - Mouse Gamer\n");
				printf("3 - Monitor\n");
				printf("4 - Fone de ouvido\n");
				scanf("%d", &per);
				system("cls");
				switch(per){
					case 1:
						printf("Opções disponíveis:\n\n");
						printf("1 - Teclado Redragon Kumara - R$360,55\n");
						printf("2 - Teclado Razer BlackWidow - R$992,71\n");
						printf("3 - Teclado Corsair A500 - R$662,15\n");
						scanf("%d", &tec);
						if(tec == 1){
							printf("Selecione a quantidade:\n");
							scanf("%d", &qtd);
							system("cls");
							printf("Compra finalizada:\n\n");
							printf("Teclado: Redragon Kumara\n");
							printf("Quantidade: %d\n", qtd);
							valor = qtd*360,55;
							printf("Valor final: R$%.2f\n", valor);
							system("pause");
							system("cls");
						} else if(tec == 2){
							printf("Selecione a quantidade:\n");
							scanf("%d", &qtd);
							system("cls");
							printf("Compra finalizada:\n\n");
							printf("Teclado: Razer BlackWidow\n");
							printf("Quantidade: %d\n", qtd);
							valor = qtd*992,71;
							printf("Valor final: R$%.2f\n", valor);
							system("pause");
							system("cls");
						} else if(tec == 3){
							printf("Selecione a quantidade:\n");
							scanf("%d", &qtd);
							system("cls");
							printf("Compra finalizada:\n\n");
							printf("Teclado: Corsair A500\n");
							printf("Quantidade: %d\n", qtd);
							valor = qtd*662,15;
							printf("Valor final: R$%.2f\n", valor);
							system("pause");
							system("cls");
						} else{
							printf("Opção indisponível\n");
							system("pause");
							system("cls");
						}
					break;
					case 2:
						printf("Opções disponíveis:\n\n");
						printf("1 - Mouse Redragon King Cobra - R$260,55\n");
						printf("2 - Mouse Razer DeathAdder - R$792,71\n");
						printf("3 - Mouse Corsair Scimitar Elite - R$562,15\n");
						scanf("%d", &tec);
						if(tec == 1){
							printf("Selecione a quantidade:\n");
							scanf("%d", &qtd);
							system("cls");
							printf("Compra finalizada:\n\n");
							printf("Mouse: Redragon King Cobra\n");
							printf("Quantidade: %d\n", qtd);
							valor = qtd*260,55;
							printf("Valor final: R$%.2f\n", valor);
							system("pause");
							system("cls");
						} else if(tec == 2){
							printf("Selecione a quantidade:\n");
							scanf("%d", &qtd);
							system("cls");
							printf("Compra finalizada:\n\n");
							printf("Mouse: Razer DeathAdder\n");
							printf("Quantidade: %d\n", qtd);
							valor = qtd*792,71;
							printf("Valor final: R$%.2f\n", valor);
							system("pause");
							system("cls");
						} else if(tec == 3){
							printf("Selecione a quantidade:\n");
							scanf("%d", &qtd);
							system("cls");
							printf("Compra finalizada:\n\n");
							printf("Mouse: Corsair Scimitar Elite\n");
							printf("Quantidade: %d\n", qtd);
							valor = qtd*562,15;
							printf("Valor final: R$%.2f\n", valor);
							system("pause");
							system("cls");
						} else{
							printf("Opção indisponível\n");
							system("pause");
							system("cls");
						}
					break;	
					case 3:
						printf("Opções disponíveis:\n\n");
						printf("1 - Monitor LG. UltraWide Pro Gamer - R$1.060,55\n");
						printf("2 - Monitor Alienware. AW2521HF - R$1.792,71\n");
						printf("3 - Monitor Samsung. Série T350 Elite - R$2.562,15\n");
						scanf("%d", &tec);
						if(tec == 1){
							printf("Selecione a quantidade:\n");
							scanf("%d", &qtd);
							system("cls");
							printf("Compra finalizada:\n\n");
							printf("Monitor: LG. UltraWide Pro Gamer\n");
							printf("Quantidade: %d\n", qtd);
							valor = qtd*1060,55;
							printf("Valor final: R$%.2f\n", valor);
							system("pause");
							system("cls");
						} else if(tec == 2){
							printf("Selecione a quantidade:\n");
							scanf("%d", &qtd);
							system("cls");
							printf("Compra finalizada:\n\n");
							printf("Monitor: Alienware. AW2521HF\n");
							printf("Quantidade: %d\n", qtd);
							valor = qtd*1792,71;
							printf("Valor final: R$%.2f\n", valor);
							system("pause");
							system("cls");
						} else if(tec == 3){
							printf("Selecione a quantidade:\n");
							scanf("%d", &qtd);
							system("cls");
							printf("Compra finalizada:\n\n");
							printf("Monitor: Samsung. Série T350 Elite\n");
							printf("Quantidade: %d\n", qtd);
							valor = qtd*2562,15;
							printf("Valor final: R$%.2f\n", valor);
							system("pause");
							system("cls");
						} else{
							printf("Opção indisponível\n");
							system("pause");
							system("cls");
						}
					break;
					case 4:
						printf("Opções disponíveis:\n\n");
						printf("1 - Headset Gamer Redragon Zeus X RGB - R$359,55\n");
						printf("2 - Headset Gamer Astro Gaming A40 TR - R$999,71\n");
						printf("3 - Headset Gamer Sem Fio Logitech G733 - R$1.523,15\n");
						scanf("%d", &tec);
						if(tec == 1){
							printf("Selecione a quantidade:\n");
							scanf("%d", &qtd);
							system("cls");
							printf("Compra finalizada:\n\n");
							printf("Headset: Redragon Zeus X RGB\n");
							printf("Quantidade: %d\n", qtd);
							valor = qtd*359,55;
							printf("Valor final: R$%.2f\n", valor);
							system("pause");
							system("cls");
						} else if(tec == 2){
							printf("Selecione a quantidade:\n");
							scanf("%d", &qtd);
							system("cls");
							printf("Compra finalizada:\n\n");
							printf("Headset: Astro Gaming A40 TR\n");
							printf("Quantidade: %d\n", qtd);
							valor = qtd*999,71;
							printf("Valor final: R$%.2f\n", valor);
							system("pause");
							system("cls");
						} else if(tec == 3){
							printf("Selecione a quantidade:\n");
							scanf("%d", &qtd);
							system("cls");
							printf("Compra finalizada:\n\n");
							printf("Headset: Sem Fio Logitech G733\n");
							printf("Quantidade: %d\n", qtd);
							valor = qtd*1523,15;
							printf("Valor final: R$%.2f\n", valor);
							system("pause");
							system("cls");
						} else{
							printf("Opção indisponível\n");
							system("pause");
							system("cls");
						}
					break;	
					default:
						printf("Opção indisponível. Tente novamente!\n");
						system("pause");
						system("cls");
					break;		
				}
			break;
			case 4:
				printf("Programa finalizado!\n");
				system("pause");
				exit(-1);
			break;
			default:
				printf("Opção indisponível. Tente novamente!\n");
				system("pause");
				system("cls");
			break;	
		}	
	}
	return 0;
}
