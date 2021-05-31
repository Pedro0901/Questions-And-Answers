/* PROGRAMA DE PERGUNTAS E RESPOSTAS */

#include <iostream>
#include <stdio.h>
#include <locale.h>
#include <cmath>

using namespace std;

//Função principal do programa
int main(){
	
	//Permite usar acentos
	setlocale(LC_ALL, "");
	
	//Definindo variaveis para escolhas do Usuário
	char nome[50];												//Variavel para nome do usuário
	int escolha;												//Variavel para escolha da lista de opções
	char resposta;												//Variavel para resposta das questões
	
	//Definindo variaveis para Resultados do Jogo
	int acertos = 0, erros = 0;									//Variaveis que contabilizam erros e acertos (totais)
	int acertosFacil = 0;										//Variaveis que contabilizam acertos - NIVEL FÁCIL
	int acertosMedio = 0;										//Variaveis que contabilizam acertos - NIVEL MÉDIO
	int acertosDificil;											//Variaveis que contabilizam acertos - NIVEL DIFICIL
	int perguntaRespondida = 0;									//Variavel para contabilizar cada pergunta respondida
	int perguntaspuladas = 0;									//Variavel para contabilizar cada pergunta pulada
	int pergunta = 1;											//Variavel que enumera as perguntas
	
	//Variaveis para dificuldades (Separadas por switch)
	int facil = 0;												//Variavel para switch das questões de nível FÁCIL
	int medio = 0;												//Variavel para switch das questões de nível MÉDIO
	int dificil = 0;											//Variavel para switch das questões de nível DIFICIL
	
	//Cabeçalho do Programa
	cout << "================== JOGO DE PERGUNTAS E RESPOSTAS ===============================\n";
	
	//Usuário informa seu nome
	cout << "Informe o nome do participante e em seguida pressione a tecla \"enter\".\n";
	cout << "\nNOME DO PARTICIPANTE: ";
	
	//Função gets na variavel nome lê o nome completo do usuário 
	gets(nome);
	
	//Limpa a tela após pressionar enter
	system("CLS");
	
	//Dá as boas vindas ao usuário
	cout << "================= SEJA BEM-VINDO (A) ===========================================\n";
	cout << "SEJA BEM VINDO " << nome << "!";
	
	//Explicação do jogo ao usuário
	cout << "\n\n-------------------------------------------------------------------------------\n";
	cout << "\nEste é um jogo divertido de perguntas e respostas. O jogador deverá escolher\n";
	cout << "dentre as 4 alternativas apenas uma e em seguida pressionar \"enter\".\n\n";
	cout << "-------------------------------------------------------------------------------\n";
	
	//Deseja boa sorte ao usuário
	cout << "\nBoa sorte e bom jogo!";
	cout << "\nPressione \"enter\" para prosseguir.";
	getchar();
	
	//Limpa a tela após pressionar enter
	system("CLS");
	
	//PARTE DAS PERGUNTAS - SWITCH 01 - NIVEL FÁCIL
	switch(facil){
		
		//PERGUNTA 01 - FÁCIL
		case 0:
			
			//Mostra o numero da pergunta e seu nível
			cout << "----------------------------------\n";
			cout << "   Pergunta n° " << pergunta << " Nível: Fácil.";
			cout << "\n----------------------------------";
			
			//Mostra a pergunta e alternativas ao usuário
			cout << "\n\nO que é Brexit?";
			
			//Alternativas
			cout << "\n\nA) Saída do Reino Unido da Zona Euro.";
			cout << "\nB) Saída do Reino Unido da União Européia.";
			cout << "\nC) Saída da Inglaterra do Reino Unido.";
			cout << "\nD) Fim da monarquia no Reino Unido.";
			
			//Cabeçalho lista de opções - Separação
			cout << "\n\n----------------------------------\n";
			cout << "   LISTA DE OPÇÕES";
			cout << "\n----------------------------------";
			
			//Alternativas para escolha
			cout << "\n\n1 - RESPONDER.";
			cout << "\n2 - PULAR.";
			cout << "\n\nESCOLHA UMA DAS ALTERNATIVAS: ";
			cin >> escolha;
			
			//CONDICIONAL "SE" para escolhas - RESPONDER
			if(escolha == 1){
				cout << "\nQual é a resposta correta? ";
				cin >> resposta;
				if((resposta == 'b') || (resposta == 'B')){
					cout << "\nResposta correta!";
					acertos++;
					acertosFacil++;
					
					//EXPLICAÇÃO DA RESPOSTA 
					cout << "\n\nEXPLICAÇÃO: O termo Brexit vem da junção das palavras inglesas “Britain”";
					cout << "\n(Bretanha) e “Exit” (saída). Esse processo, que teve início com o referendo de"; 
					cout << "\n23 de junho de 2016, representa a saída do Reino Unido da União Europeia. No dia 31 de janeiro de 2020, o Reino Unido definitivamente deixou a União Europeia";
					cout << "\ntornando-se o primeiro país a fazê-lo.";
					
				}else{
					cout << "\nResposta incorreta!";
					cout << "\nResposta correta: Letra B";
					erros++;
					
					//EXPLICAÇÃO DA RESPOSTA 
					cout << "\n\nEXPLICAÇÃO: O termo Brexit vem da junção das palavras inglesas “Britain”";
					cout << "\n(Bretanha) e “Exit” (saída). Esse processo, que teve início com o referendo de"; 
					cout << "\n23 de junho de 2016, representa a saída do Reino Unido da União Europeia. No dia 31 de janeiro de 2020, o Reino Unido definitivamente deixou a União Europeia";
					cout << "\ntornando-se o primeiro país a fazê-lo.";
				}
				
				//Mostra que a pergunta foi respondida
				perguntaRespondida++;
				
				//Pula para a proxima questão
				cout << "\n-------------------------------------------------------------------------------\n";
				getchar();
				cout << "\nPressione \"enter\" para continuar...";
				getchar();
				system("CLS");
			}
			
			//CONDICIONAL "SE" para escolhas - PULAR
			if(escolha == 2){
				perguntaspuladas++;
				cout << "\n\nPressione \"enter\" para pular a questão";
				getchar();
				//Para limpar a tela e ir pra proxima questão 
				getchar();
				system("CLS");
			}
			
		//PERGUNTA 02 - FÁCIL
		case 1:
			
			//Mostra o numero da pergunta e seu nível
			cout << "----------------------------------\n";
			cout << "   Pergunta n° " << (pergunta + 1) << " Nível: Fácil.";
			cout << "\n----------------------------------";
			
			//Mostra a pergunta e alternativas ao usuário
			cout << "\n\nQual a nacionalidade do sociólogo e filósofo Durkheim?";
			
			//Alternativas
			cout << "\n\nA) Alemã.";
			cout << "\nB) Norueguesa.";
			cout << "\nC) Inglesa.";
			cout << "\nD) Francesa.";
			
			//Cabeçalho lista de opções - Separação
			cout << "\n\n----------------------------------\n";
			cout << "   LISTA DE OPÇÕES";
			cout << "\n----------------------------------";
			
			//Alternativas para escolha
			cout << "\n\n1 - RESPONDER.";
			cout << "\n2 - PULAR.";
			cout << "\n\nESCOLHA UMA DAS ALTERNATIVAS: ";
			cin >> escolha;
			
			//CONDICIONAL "SE" para escolhas - RESPONDER
			if(escolha == 1){
				cout << "\nQual é a resposta correta? ";
				cin >> resposta;
				if((resposta == 'd') || (resposta == 'D')){
					cout << "\nResposta correta!";
					acertos++;
					acertosFacil++;
					
					//EXPLICAÇÃO DA RESPOSTA
					cout << "\n\nEXPLICAÇÃO: David Émile Durkheim (1858-1917) foi um dos maiores sociólogos, filó";
					cout << "sofos e antropólogos de todos os tempos. Nasceu na cidade francesa de Épinal, e faleceu em Paris.";
					
				}else{
					cout << "\nResposta incorreta!";
					cout << "\nResposta correta: Letra D";
					erros++;
					
					//EXPLICAÇÃO DA RESPOSTA
					cout << "\n\nEXPLICAÇÃO: David Émile Durkheim (1858-1917) foi um dos maiores sociólogos, filó";
					cout << "sofos e antropólogos de todos os tempos. Nasceu na cidade francesa de Épinal, e faleceu em Paris.";	
				}
				
				//Mostra que a pergunta foi respondida
				perguntaRespondida++;
				
				//Pula para a proxima questão
				cout << "\n-------------------------------------------------------------------------------\n";
				getchar();
				cout << "\nPressione \"enter\" para continuar...";
				getchar();
				system("CLS");
			}
			
			//CONDICIONAL "SE" para escolhas - PULAR
			if(escolha == 2){
				perguntaspuladas++;
				cout << "\n\nPressione \"enter\" para pular a questão";
				getchar();
				getchar();
				system("CLS");
			}
		
		//PERGUNTA 03 - FÁCIL
		case 2:
			
			//Mostra o numero da pergunta e seu nível
			cout << "----------------------------------\n";
			cout << "   Pergunta n° " << (pergunta + 2) << " Nível: Fácil.";
			cout << "\n----------------------------------";
			
			//Mostra a pergunta e alternativas ao usuário
			cout << "\n\nChernobyl e Césio-137 fazem parte dos maiores acidentes nucleares da história. \nEm que países aconteceram?";
			
			//Alternativas
			cout << "\n\nA) Rússia e Espanha.";
			cout << "\nB) Ucrânia e Brasil.";
			cout << "\nC) Estados Unidos e Ucrânia.";
			cout << "\nD) Japão e Brasil.";
			
			//Cabeçalho lista de opções - Separação
			cout << "\n\n----------------------------------\n";
			cout << "   LISTA DE OPÇÕES";
			cout << "\n----------------------------------";
			
			//Alternativas para escolha
			cout << "\n\n1 - RESPONDER.";
			cout << "\n2 - PULAR.";
			cout << "\n\nESCOLHA UMA DAS ALTERNATIVAS: ";
			cin >> escolha;
			
			//CONDICIONAL "SE" para escolhas - RESPONDER
			if(escolha == 1){
				cout << "\nQual é a resposta correta? ";
				cin >> resposta;
				if((resposta == 'b') || (resposta == 'B')){
					cout << "\nResposta correta!";
					acertos++;
					acertosFacil++;
					
					//EXPLICAÇÃO DA RESPOSTA
					cout << "\n\nEXPLICAÇÃO: O acidente de Chernobyl, cidade localizada no norte da Ucrânia,";
					cout << "\naconteceu em 26 de abril de 1986, quando um reator nuclear explodiu causando a"; 
					cout << "\nliberação de resíduos tóxicos em uma enorme área."; 
					cout << "\n\nO acidente com césio-137 aconteceu em Goiânia em 13 de setembro de 1987, quando catadores de lixo recolheram um aparelho de radioterapia em uma clínica desativada, sem ter conhecimento do que se tratava, com o intuito de vendê-la no"; 
					cout << "\nferro-velho.";
					
				}else{
					cout << "\nResposta incorreta!";
					cout << "\nResposta correta: Letra B";
					erros++;
					
					//EXPLICAÇÃO DA RESPOSTA
					cout << "\n\nEXPLICAÇÃO: O acidente de Chernobyl, cidade localizada no norte da Ucrânia,";
					cout << "\naconteceu em 26 de abril de 1986, quando um reator nuclear explodiu causando a"; 
					cout << "\nliberação de resíduos tóxicos em uma enorme área."; 
					cout << "\n\nO acidente com césio-137 aconteceu em Goiânia em 13 de setembro de 1987, quando catadores de lixo recolheram um aparelho de radioterapia em uma clínica desativada, sem ter conhecimento do que se tratava, com o intuito de vendê-la no"; 
					cout << "\nferro-velho.";
				}
				
				//Mostra que a pergunta foi respondida
				perguntaRespondida++;
				
				//Pula para a proxima questão
				cout << "\n-------------------------------------------------------------------------------\n";
				getchar();
				cout << "\nPressione \"enter\" para continuar...";
				getchar();
				system("CLS");
			}
			
			//CONDICIONAL "SE" para escolhas - PULAR
			if(escolha == 2){
				perguntaspuladas++;
				cout << "\n\nPressione \"enter\" para pular a questão";
				getchar();
				getchar();
				system("CLS");
			}
			
		//PERGUNTA 04 - FÁCIL
		case 3:
			
			//Mostra o numero da pergunta e seu nível
			cout << "----------------------------------\n";
			cout << "   Pergunta n° " << (pergunta + 3) << " Nível: Fácil.";
			cout << "\n----------------------------------";
			
			//Mostra a pergunta e alternativas ao usuário
			cout << "\n\nEm que país se localizava Auschwitz, o maior campo de concentração nazi?";
			
			//Alternativas
			cout << "\n\nA) Alemanha.";
			cout << "\nB) Estados Unidos.";
			cout << "\nC) Polônia.";
			cout << "\nD) Áustria.";
			
			//Cabeçalho lista de opções - Separação
			cout << "\n\n----------------------------------\n";
			cout << "   LISTA DE OPÇÕES";
			cout << "\n----------------------------------";
			
			//Alternativas para escolha
			cout << "\n\n1 - RESPONDER.";
			cout << "\n2 - PULAR.";
			cout << "\n\nESCOLHA UMA DAS ALTERNATIVAS: ";
			cin >> escolha;
			
			//CONDICIONAL "SE" para escolhas - RESPONDER
			if(escolha == 1){
				cout << "\nQual é a resposta correta? ";
				cin >> resposta;
				if((resposta == 'c') || (resposta == 'C')){
					cout << "\nResposta correta!";
					acertos++;
					acertosFacil++;
					
					//EXPLICAÇÃO DA RESPOSTA 
					cout << "\n\nEXPLICAÇÃO: O maior centro de extermínio da Segunda Guerra Mundial foi instalado";
					cout << "na Polônia, a 60 quilômetros da sua capital. Fundado em 1940, funcionou até ja-\nneiro de 1945.";
					
				}else{
					cout << "\nResposta incorreta!";
					cout << "\nResposta correta: Letra C";
					erros++;
					
					//EXPLICAÇÃO DA RESPOSTA 
					cout << "\n\nEXPLICAÇÃO: O maior centro de extermínio da Segunda Guerra Mundial foi instalado";
					cout << "na Polônia, a 60 quilômetros da sua capital. Fundado em 1940, funcionou até ja-\nneiro de 1945.";
				}
				
				//Mostra que a pergunta foi respondida
				perguntaRespondida++;
				
				//Pula para a proxima questão
				cout << "\n-------------------------------------------------------------------------------\n";
				getchar();
				cout << "\nPressione \"enter\" para continuar...";
				getchar();
				system("CLS");
			}
			
			//CONDICIONAL "SE" para escolhas - PULAR
			if(escolha == 2){
				perguntaspuladas++;
				cout << "\n\nPressione \"enter\" para pular a questão";
				getchar();
				getchar();
				system("CLS");
			}
				
		//PERGUNTA 05 - FÁCIL
		case 4:
			
			//Mostra o numero da pergunta e seu nível
			cout << "----------------------------------\n";
			cout << "   Pergunta n° " << (pergunta + 4) << " Nível: Fácil.";
			cout << "\n----------------------------------";
			
			//Mostra a pergunta e alternativas ao usuário
			cout << "\n\nQuais as maiores pandemias da história?";
			
			//Alternativas
			cout << "\n\nA) Gripe espanhola e câncer.";
			cout << "\nB) Varíola e Hipertensão.";
			cout << "\nC) Asma e Gripe espanhola.";
			cout << "\nD) Peste negra e Covid-19.";
			
			//Cabeçalho lista de opções - Separação
			cout << "\n\n----------------------------------\n";
			cout << "   LISTA DE OPÇÕES";
			cout << "\n----------------------------------";
			
			//Alternativas para escolha
			cout << "\n\n1 - RESPONDER.";
			cout << "\n2 - PULAR.";
			cout << "\n\nESCOLHA UMA DAS ALTERNATIVAS: ";
			cin >> escolha;
			
			//CONDICIONAL "SE" para escolhas - RESPONDER
			if(escolha == 1){
				cout << "\nQual é a resposta correta? ";
				cin >> resposta;
				if((resposta == 'd') || (resposta == 'D')){
					cout << "\nResposta correta!";
					acertos++;
					acertosFacil++;
					
					//EXPLICAÇÃO DA RESPOSTA 
					cout << "\n\nEXPLICAÇÃO: Com exceção da alternativa d), em cada uma das alternativas consta"; 
					cout << "\napenas uma pandemia. Câncer, hipertensão, e asma não podem ser pandemias, porque";
					cout << "não são doenças contagiosas.";
					
				}else{
					cout << "\nResposta incorreta!";
					cout << "\nResposta correta: Letra D";
					erros++;
					
					//EXPLICAÇÃO DA RESPOSTA 
					cout << "\n\nEXPLICAÇÃO: Com exceção da alternativa d), em cada uma das alternativas consta"; 
					cout << "\napenas uma pandemia. Câncer, hipertensão, e asma não podem ser pandemias, porque";
					cout << "não são doenças contagiosas.";
				}
				
				//Mostra que a pergunta foi respondida
				perguntaRespondida++;
				
				//Pula para a proxima questão
				cout << "\n-------------------------------------------------------------------------------\n";
				getchar();
				cout << "\nPressione \"enter\" para continuar...";
				getchar();
				system("CLS");
			}
			
			//CONDICIONAL "SE" para escolhas - PULAR
			if(escolha == 2){
				perguntaspuladas++;
				cout << "\n\nPressione \"enter\" para pular a questão";
				getchar();
				getchar();
				system("CLS");
			}
			
		//PERGUNTA 06 - FÁCIL
		case 5:
			
			//Mostra o numero da pergunta e seu nível
			cout << "----------------------------------\n";
			cout << "   Pergunta n° " << (pergunta + 5) << " Nível: Fácil.";
			cout << "\n----------------------------------";
			
			//Mostra a pergunta e alternativas ao usuário
			cout << "\n\nDe quem é a famosa frase: \"Penso, logo existo\"?";
			
			//Alternativas
			cout << "\n\nA) Descartes.";
			cout << "\nB) Platão.";
			cout << "\nC) Galileu Galilei.";
			cout << "\nD) Francis Bacon.";
			
			//Cabeçalho lista de opções - Separação
			cout << "\n\n----------------------------------\n";
			cout << "   LISTA DE OPÇÕES";
			cout << "\n----------------------------------";
			
			//Alternativas para escolha
			cout << "\n\n1 - RESPONDER.";
			cout << "\n2 - PULAR.";
			cout << "\n\nESCOLHA UMA DAS ALTERNATIVAS: ";
			cin >> escolha;
			
			//CONDICIONAL "SE" para escolhas - RESPONDER
			if(escolha == 1){
				cout << "\nQual é a resposta correta? ";
				cin >> resposta;
				if((resposta == 'a') || (resposta == 'A')){
					cout << "\nResposta correta!";
					acertos++;
					acertosFacil++;
					
					//EXPLICAÇÃO DA RESPOSTA 
					cout << "\n\nEXPLICAÇÃO: “Je pense, donc je suis” é a frase original, escrita em francês, do filósofo René Descartes (1596-1650). Ela resume o pensamento e o método de";
					cout << "\nDescartes, para quem tudo tem início na dúvida.";
	
				}else{
					cout << "\nResposta incorreta!";
					cout << "\nResposta correta: Letra A";
					erros++;
					
					//EXPLICAÇÃO DA RESPOSTA 
					cout << "\n\nEXPLICAÇÃO: “Je pense, donc je suis” é a frase original, escrita em francês, do filósofo René Descartes (1596-1650). Ela resume o pensamento e o método de";
					cout << "\nDescartes, para quem tudo tem início na dúvida.";
				}
				
				//Mostra que a pergunta foi respondida
				perguntaRespondida++;
				
				//Pula para a proxima questão
				cout << "\n-------------------------------------------------------------------------------\n";
				getchar();
				cout << "\nPressione \"enter\" para continuar...";
				getchar();
				system("CLS");
			}
			
			//CONDICIONAL "SE" para escolhas - PULAR
			if(escolha == 2){
				perguntaspuladas++;
				cout << "\n\nPressione \"enter\" para pular a questão";
				getchar();
				getchar();
				system("CLS");
			}	
				
		//PERGUNTA 07 - FÁCIL
		case 6:
			
			//Mostra o numero da pergunta e seu nível
			cout << "----------------------------------\n";
			cout << "   Pergunta n° " << (pergunta + 6) << " Nível: Fácil.";
			cout << "\n----------------------------------";
			
			//Mostra a pergunta e alternativas ao usuário
			cout << "\n\nDe onde é a invenção do chuveiro elétrico?";
			
			//Alternativas
			cout << "\n\nA) França.";
			cout << "\nB) Inglaterra.";
			cout << "\nC) Brasil.";
			cout << "\nD) Itália.";
			
			//Cabeçalho lista de opções - Separação
			cout << "\n\n----------------------------------\n";
			cout << "   LISTA DE OPÇÕES";
			cout << "\n----------------------------------";
			
			//Alternativas para escolha
			cout << "\n\n1 - RESPONDER.";
			cout << "\n2 - PULAR.";
			cout << "\n\nESCOLHA UMA DAS ALTERNATIVAS: ";
			cin >> escolha;
			
			//CONDICIONAL "SE" para escolhas - RESPONDER
			if(escolha == 1){
				cout << "\nQual é a resposta correta? ";
				cin >> resposta;
				if((resposta == 'c') || (resposta == 'C')){
					cout << "\nResposta correta!";
					acertos++;
					acertosFacil++;
					
					//EXPLICAÇÃO DA RESPOSTA 
					cout << "\n\nEXPLICAÇÃO: Francisco Canhos é o nome do homem que, na década de 40, desenvolveu";
					cout << "o primeiro chuveiro elétrico seguro em Jaú-SP. O aparelho vinha sendo desenvol-"; 
					cout << "\nvido desde os anos 30, mas apresentava riscos de curto-circuito.";
					
				}else{
					cout << "\nResposta incorreta!";
					cout << "\nResposta correta: Letra C";
					erros++;
					
					//EXPLICAÇÃO DA RESPOSTA 
					cout << "\n\nEXPLICAÇÃO: Francisco Canhos é o nome do homem que, na década de 40, desenvolveu";
					cout << "o primeiro chuveiro elétrico seguro em Jaú-SP. O aparelho vinha sendo desenvol-"; 
					cout << "\nvido desde os anos 30, mas apresentava riscos de curto-circuito.";
				}
				
				//Mostra que a pergunta foi respondida
				perguntaRespondida++;
				
				//Pula para a proxima questão
				cout << "\n-------------------------------------------------------------------------------\n";
				getchar();
				cout << "\nPressione \"enter\" para continuar...";
				getchar();
				system("CLS");
			}
			
			//CONDICIONAL "SE" para escolhas - PULAR
			if(escolha == 2){
				perguntaspuladas++;
				cout << "\n\nPressione \"enter\" para pular a questão";
				getchar();
				getchar();
				system("CLS");
			}
			
		//PERGUNTA 08 - FÁCIL
		case 7:
			
			//Mostra o numero da pergunta e seu nível
			cout << "----------------------------------\n";
			cout << "   Pergunta n° " << (pergunta + 7) << " Nível: Fácil.";
			cout << "\n----------------------------------";
			
			//Mostra a pergunta e alternativas ao usuário
			cout << "\n\nQuais o menor e maior país do mundo?";
			
			//Alternativas
			cout << "\n\nA) Vaticano e Rússia.";
			cout << "\nB) Nauru e China.";
			cout << "\nC) Mònaco e Estados Unidos.";
			cout << "\nD) São Marino e Índia.";
			
			//Cabeçalho lista de opções - Separação
			cout << "\n\n----------------------------------\n";
			cout << "   LISTA DE OPÇÕES";
			cout << "\n----------------------------------";
			
			//Alternativas para escolha
			cout << "\n\n1 - RESPONDER.";
			cout << "\n2 - PULAR.";
			cout << "\n\nESCOLHA UMA DAS ALTERNATIVAS: ";
			cin >> escolha;
			
			//CONDICIONAL "SE" para escolhas - RESPONDER
			if(escolha == 1){
				cout << "\nQual é a resposta correta? ";
				cin >> resposta;
				if((resposta == 'a') || (resposta == 'A')){
					cout << "\nResposta correta!";
					acertos++;
					acertosFacil++;
					
					//EXPLICAÇÃO DA RESPOSTA 
					cout << "\n\nEXPLICAÇÃO: O Vaticano, sede da igreja católica, tem apenas 44 hectares (0,44km quadrados). ";
					cout << "A Rússia, localizada em dois continentes (Ásia e Europa), tem 17 \nmilhões de km quadrados.";
					
				}else{
					cout << "\nResposta incorreta!";
					cout << "\nResposta correta: Letra A";
					erros++;
					
					//EXPLICAÇÃO DA RESPOSTA 
					cout << "\n\nEXPLICAÇÃO: O Vaticano, sede da igreja católica, tem apenas 44 hectares (0,44km quadrados). ";
					cout << "A Rússia, localizada em dois continentes (Ásia e Europa), tem 17 \nmilhões de km quadrados.";
				}
				
				//Mostra que a pergunta foi respondida
				perguntaRespondida++;
				
				//Pula para a proxima questão
				cout << "\n-------------------------------------------------------------------------------\n";
				getchar();
				cout << "\nPressione \"enter\" para continuar...";
				getchar();
				system("CLS");
			}
			
			//CONDICIONAL "SE" para escolhas - PULAR
			if(escolha == 2){
				perguntaspuladas++;
				cout << "\n\nPressione \"enter\" para pular a questão";
				getchar();
				getchar();
				system("CLS");
			}
			
		//PERGUNTA 09 - FÁCIL
		case 8:
			
			//Mostra o numero da pergunta e seu nível
			cout << "----------------------------------\n";
			cout << "   Pergunta n° " << (pergunta + 8) << " Nível: Fácil.";
			cout << "\n----------------------------------";
			
			//Mostra a pergunta e alternativas ao usuário
			cout << "\n\nComo se chamam os vasos que transportam sangue do coração para a periferia do corpo?";
			
			//Alternativas
			cout << "\n\nA) Veias.";
			cout << "\nB) Átrios.";
			cout << "\nC) Ventrículos.";
			cout << "\nD) Artérias.";
			
			//Cabeçalho lista de opções - Separação
			cout << "\n\n----------------------------------\n";
			cout << "   LISTA DE OPÇÕES";
			cout << "\n----------------------------------";
			
			//Alternativas para escolha
			cout << "\n\n1 - RESPONDER.";
			cout << "\n2 - PULAR.";
			cout << "\n\nESCOLHA UMA DAS ALTERNATIVAS: ";
			cin >> escolha;
			
			//CONDICIONAL "SE" para escolhas - RESPONDER
			if(escolha == 1){
				cout << "\nQual é a resposta correta? ";
				cin >> resposta;
				if((resposta == 'd') || (resposta == 'D')){
					cout << "\nResposta correta!";
					acertos++;
					acertosFacil++;
					
					//EXPLICAÇÃO DA RESPOSTA 
					cout << "\n\nEXPLICAÇÃO: As artérias são um tipo de vasos sanguíneos que transportam o sangue";
					cout << "arterial (com oxigênio e nutrientes) do coração para o corpo.";
					
				}else{
					cout << "\nResposta incorreta!";
					cout << "\nResposta correta: Letra D";
					erros++;
					
					//EXPLICAÇÃO DA RESPOSTA 
					cout << "\n\nEXPLICAÇÃO: As artérias são um tipo de vasos sanguíneos que transportam o sangue";
					cout << "arterial (com oxigênio e nutrientes) do coração para o corpo.";
				}
				
				//Mostra que a pergunta foi respondida
				perguntaRespondida++;
				
				//Pula para a proxima questão
				cout << "\n-------------------------------------------------------------------------------\n";
				getchar();
				cout << "\nPressione \"enter\" para continuar...";
				getchar();
				system("CLS");
			}
			
			//CONDICIONAL "SE" para escolhas - PULAR
			if(escolha == 2){
				perguntaspuladas++;
				cout << "\n\nPressione \"enter\" para pular a questão";
				getchar();
				getchar();
				system("CLS");
			}
			
		//PERGUNTA 10 - FÁCIL
		case 9:
			
			//Mostra o numero da pergunta e seu nível
			cout << "----------------------------------\n";
			cout << "   Pergunta n° " << (pergunta + 9) << " Nível: Fácil.";
			cout << "\n----------------------------------";
			
			//Mostra a pergunta e alternativas ao usuário
			cout << "\n\nQuais as duas datas que são comemoradas em novembro?";
			
			//Alternativas
			cout << "\n\nA) Independência do Brasil e Dia da Bandeira.";
			cout << "\nB) Proclamação da República e Dia Nacional da Consciência Negra.";
			cout << "\nC) Dia de Finados e Dia Nacional do Livro.";
			cout << "\nD) Black Friday e Dia da Árvore.";
			
			//Cabeçalho lista de opções - Separação
			cout << "\n\n----------------------------------\n";
			cout << "   LISTA DE OPÇÕES";
			cout << "\n----------------------------------";
			
			//Alternativas para escolha
			cout << "\n\n1 - RESPONDER.";
			cout << "\n2 - PULAR.";
			cout << "\n\nESCOLHA UMA DAS ALTERNATIVAS: ";
			cin >> escolha;
			
			//CONDICIONAL "SE" para escolhas - RESPONDER
			if(escolha == 1){
				cout << "\nQual é a resposta correta? ";
				cin >> resposta;
				if((resposta == 'b') || (resposta == 'B')){
					cout << "\nResposta correta!";
					acertos++;
					acertosFacil++;
					
					//EXPLICAÇÃO DA RESPOSTA 
					cout << "\n\nEXPLICAÇÃO: A Proclamação da República é comemorada no dia 15 de novembro, data em que Marechal Deodoro da Fonseca proclamou a república em 1889.";
					cout << "\n\nO Dia Nacional da Consciência Negra é comemorado no dia 20 de novembro, data em que Zumbi dos Palmares morreu, em 1695.";
					
				}else{
					cout << "\nResposta incorreta!";
					cout << "\nResposta correta: Letra B";
					erros++;
					
					//EXPLICAÇÃO DA RESPOSTA 
					cout << "\n\nEXPLICAÇÃO: A Proclamação da República é comemorada no dia 15 de novembro, data em que Marechal Deodoro da Fonseca proclamou a república em 1889.";
					cout << "\n\nO Dia Nacional da Consciência Negra é comemorado no dia 20 de novembro, data em que Zumbi dos Palmares morreu, em 1695.";
				}
				
				//Mostra que a pergunta foi respondida
				perguntaRespondida++;
				
				//Pula para a proxima questão
				cout << "\n-------------------------------------------------------------------------------\n";
				getchar();
				cout << "\nPressione \"enter\" para continuar...";
				getchar();
				system("CLS");
			}
			
			//CONDICIONAL "SE" para escolhas - PULAR
			if(escolha == 2){
				perguntaspuladas++;
				cout << "\n\nPressione \"enter\" para pular a questão";
				getchar();
				getchar();
				system("CLS");
			}
			
			/* COMO ESSA É A ULTIMA QUESTÃO DESSE NÍVEL, DEVEMOS DAR O BREAK NO SWITCH
			JA QUE CADA SWITCH CORRESPONDE A UM NÍVEL DE DIFICULDADE*/
			
			//Pula para a proxima questão / Faz a quebra do caso
			break;			
	}
	
	//Limpa a tela após o final do nível
	system("CLS");
	
	//Dá as boas vindas e parabéns ao usuário
	cout << "================= PARABÉNS, NÍVEL CONCLUÍDO ====================================\n";
	cout << "\nParabéns " << nome << "! Você acaba de superar o nível Fácil de nosso desafio.";
	
	//Torna o programa mais próximo do usuário, fazendo uma brincadeira
	cout << "\n\n-------------------------------------------------------------------------------\n";
	cout << "\nVocê acaba de concluir 1/3 de nosso desafio, e você sabe o que isso significa?\n";
	cout << "Isso não significa nada. Apenas que você respondeu 10 das 30 questões totais.\n\n";
	cout << "-------------------------------------------------------------------------------\n";
	
	//Explica a brincadeira e dá a possibilidade de prosseguir
	cout << "\nBrincadeiras à parte, parabéns, boa sorte e bom restante de jogo!";
	cout << "\nPressione \"enter\" para prosseguir.";
	getchar();
	getchar();
	
	//Limpa novamente a tela para ser direcionado ás questões de nível MÉDIO
	system("CLS");
	
	//PARTE DAS PERGUNTAS - SWITCH 02 - NIVEL MÉDIO
	switch(medio){
		
		//PERGUNTA 01 - MÉDIO
		case 0:
			
			//Mostra o numero da pergunta e seu nível
			cout << "----------------------------------\n";
			cout << "   Pergunta n° " << (pergunta) << " Nível: Médio.";
			cout << "\n----------------------------------";
			
			//Mostra a pergunta e alternativas ao usuário
			cout << "\n\nQual foi a revolução que alavancou a independência do Brasil e em 2017 completou o segundo centenário?";
			
			//Alternativas
			cout << "\n\nA) Revolução Farroupilha.";
			cout << "\nB) Revolução Federalista.";
			cout << "\nC) Revolução Praieira.";
			cout << "\nD) Revolução Pernambucana.";
			
			//Cabeçalho lista de opções - Separação
			cout << "\n\n----------------------------------\n";
			cout << "   LISTA DE OPÇÕES";
			cout << "\n----------------------------------";
			
			//Alternativas para escolha
			cout << "\n\n1 - RESPONDER.";
			cout << "\n2 - PULAR.";
			cout << "\n\nESCOLHA UMA DAS ALTERNATIVAS: ";
			cin >> escolha;
			
			//CONDICIONAL "SE" para escolhas - RESPONDER
			if(escolha == 1){
				cout << "\nQual é a resposta correta? ";
				cin >> resposta;
				if((resposta == 'd') || (resposta == 'D')){
					cout << "\nResposta correta!";
					acertos++;
					acertosMedio++;
					
					//EXPLICAÇÃO DA RESPOSTA 
					cout << "\n\nEXPLICAÇÃO: A Revolução Pernambucana, também chamada de Revolução dos Padres, o-"; 
					cout << "correu em 1817 em Pernambuco. Insatisfeitos com o aumento de impostos e gastos";
					cout << "\nda Coroa portuguesa, a população planejou a revolução que duraria cerca de 75"; 
					cout << "\ndias. Essa foi uma das mais importantes revoluções brasileiras, tendo como mote";
					cout << " a emancipação do país, e que mais tarde, culminou na Independência do Brasil.";

				}else{
					cout << "\nResposta incorreta!";
					cout << "\nResposta correta: Letra D";
					erros++;
					
					//EXPLICAÇÃO DA RESPOSTA 
					cout << "\n\nEXPLICAÇÃO: A Revolução Pernambucana, também chamada de Revolução dos Padres, o-"; 
					cout << "correu em 1817 em Pernambuco. Insatisfeitos com o aumento de impostos e gastos";
					cout << "\nda Coroa portuguesa, a população planejou a revolução que duraria cerca de 75"; 
					cout << "\ndias. Essa foi uma das mais importantes revoluções brasileiras, tendo como mote";
					cout << " a emancipação do país, e que mais tarde, culminou na Independência do Brasil.";
				}
				
				//Mostra que a pergunta foi respondida
				perguntaRespondida++;
				
				//Pula para a proxima questão
				cout << "\n-------------------------------------------------------------------------------\n";
				getchar();
				cout << "\nPressione \"enter\" para continuar...";
				getchar();
				system("CLS");
			}
			
			//CONDICIONAL "SE" para escolhas - PULAR
			if(escolha == 2){
				perguntaspuladas++;
				cout << "\n\nPressione \"enter\" para pular a questão";
				getchar();
				getchar();
				system("CLS");
			}
			
		//PERGUNTA 02 - MÉDIO
		case 1:
			
			//Mostra o numero da pergunta e seu nível
			cout << "----------------------------------\n";
			cout << "   Pergunta n° " << (pergunta + 1) << " Nível: Médio.";
			cout << "\n----------------------------------";
			
			//Mostra a pergunta e alternativas ao usuário
			cout << "\n\nQual metal cujo símbolo químico é Au?";
			
			//Alternativas
			cout << "\n\nA) Ouro.";
			cout << "\nB) Cobre.";
			cout << "\nC) Prata.";
			cout << "\nD) Magnésio.";
			
			//Cabeçalho lista de opções - Separação
			cout << "\n\n----------------------------------\n";
			cout << "   LISTA DE OPÇÕES";
			cout << "\n----------------------------------";
			
			//Alternativas para escolha
			cout << "\n\n1 - RESPONDER.";
			cout << "\n2 - PULAR.";
			cout << "\n\nESCOLHA UMA DAS ALTERNATIVAS: ";
			cin >> escolha;
			
			//CONDICIONAL "SE" para escolhas - RESPONDER
			if(escolha == 1){
				cout << "\nQual é a resposta correta? ";
				cin >> resposta;
				if((resposta == 'a') || (resposta == 'A')){
					cout << "\nResposta correta!";
					acertos++;
					acertosMedio++;
					
					//EXPLICAÇÃO DA RESPOSTA 
					cout << "\n\nEXPLICAÇÃO: O ouro é um metal de transição presente na tabela periódica, sendo"; 
					cout << "\nrepresentado pelo símbolo Au.";
					
				}else{
					cout << "\nResposta incorreta!";
					cout << "\nResposta correta: Letra A";
					erros++;
					
					//EXPLICAÇÃO DA RESPOSTA 
					cout << "\n\nEXPLICAÇÃO: O ouro é um metal de transição presente na tabela periódica, sendo"; 
					cout << "\nrepresentado pelo símbolo Au.";
				}
				
				//Mostra que a pergunta foi respondida
				perguntaRespondida++;
				
				//Pula para a proxima questão
				cout << "\n-------------------------------------------------------------------------------\n";
				getchar();
				cout << "\nPressione \"enter\" para continuar...";
				getchar();
				system("CLS");
			}
			
			//CONDICIONAL "SE" para escolhas - PULAR
			if(escolha == 2){
				perguntaspuladas++;
				cout << "\n\nPressione \"enter\" para pular a questão";
				getchar();
				getchar();
				system("CLS");
			}
			
		//PERGUNTA 03 - MÉDIO
		case 2:
			
			//Mostra o numero da pergunta e seu nível
			cout << "----------------------------------\n";
			cout << "   Pergunta n° " << (pergunta + 2) << " Nível: Médio.";
			cout << "\n----------------------------------";
			
			//Mostra a pergunta e alternativas ao usuário
			cout << "\n\nQuem pintou o teto da Capela Sistina?";
			
			//Alternativas
			cout << "\n\nA) Michelangelo.";
			cout << "\nB) Leonardo da Vinci.";
			cout << "\nC) Rafael.";
			cout << "\nD) Donatello.";
			
			//Cabeçalho lista de opções - Separação
			cout << "\n\n----------------------------------\n";
			cout << "   LISTA DE OPÇÕES";
			cout << "\n----------------------------------";
			
			//Alternativas para escolha
			cout << "\n\n1 - RESPONDER.";
			cout << "\n2 - PULAR.";
			cout << "\n\nESCOLHA UMA DAS ALTERNATIVAS: ";
			cin >> escolha;
			
			//CONDICIONAL "SE" para escolhas - RESPONDER
			if(escolha == 1){
				cout << "\nQual é a resposta correta? ";
				cin >> resposta;
				if((resposta == 'a') || (resposta == 'A')){
					cout << "\nResposta correta!";
					acertos++;
					acertosMedio++;
					
					//EXPLICAÇÃO DA RESPOSTA 
					cout << "\n\nEXPLICAÇÃO: Michelangelo (1475-1564) foi um pintor, escultor e arquiteto italia-";
					cout << "no. Ele é o responsável por pintar, durante os anos 1508 e 1512, o teto da Cape-";
					cout << "la Sistina, no Vaticano.";
					
				}else{
					cout << "\nResposta incorreta!";
					cout << "\nResposta correta: Letra A";
					erros++;
					
					//EXPLICAÇÃO DA RESPOSTA 
					cout << "\n\nEXPLICAÇÃO: Michelangelo (1475-1564) foi um pintor, escultor e arquiteto italia-";
					cout << "no. Ele é o responsável por pintar, durante os anos 1508 e 1512, o teto da Cape-";
					cout << "la Sistina, no Vaticano.";
				}
				
				//Mostra que a pergunta foi respondida
				perguntaRespondida++;
				
				//Pula para a proxima questão
				cout << "\n-------------------------------------------------------------------------------\n";
				getchar();
				cout << "\nPressione \"enter\" para continuar...";
				getchar();
				system("CLS");
			}
			
			//CONDICIONAL "SE" para escolhas - PULAR
			if(escolha == 2){
				perguntaspuladas++;
				cout << "\n\nPressione \"enter\" para pular a questão";
				getchar();
				getchar();
				system("CLS");
			}
			
		//PERGUNTA 04 - MÉDIO
		case 3:
			
			//Mostra o numero da pergunta e seu nível
			cout << "----------------------------------\n";
			cout << "   Pergunta n° " << (pergunta + 3) << " Nível: Médio.";
			cout << "\n----------------------------------";
			
			//Mostra a pergunta e alternativas ao usuário
			cout << "\n\nQual a ciência que estuda a atmosfera da Terra e a climatologia?";
			
			//Alternativas
			cout << "\n\nA) Astronomia.";
			cout << "\nB) Horologia.";
			cout << "\nC) Meteorologia.";
			cout << "\nD) Dispersão atmosférica.";
			
			//Cabeçalho lista de opções - Separação
			cout << "\n\n----------------------------------\n";
			cout << "   LISTA DE OPÇÕES";
			cout << "\n----------------------------------";
			
			//Alternativas para escolha
			cout << "\n\n1 - RESPONDER.";
			cout << "\n2 - PULAR.";
			cout << "\n\nESCOLHA UMA DAS ALTERNATIVAS: ";
			cin >> escolha;
			
			//CONDICIONAL "SE" para escolhas - RESPONDER
			if(escolha == 1){
				cout << "\nQual é a resposta correta? ";
				cin >> resposta;
				if((resposta == 'c') || (resposta == 'C')){
					cout << "\nResposta correta!";
					acertos++;
					acertosMedio++;
					
					//EXPLICAÇÃO DA RESPOSTA 
					cout << "\n\nEXPLICAÇÃO: A meteorologia é uma ciência que estuda os fenômenos que ocorrem na";
					cout << " atmosfera terrestre, com foco no clima e na previsão do tempo.";
	
				}else{
					cout << "\nResposta incorreta!";
					cout << "\nResposta correta: Letra C";
					erros++;
					
					//EXPLICAÇÃO DA RESPOSTA 
					cout << "\n\nEXPLICAÇÃO: A meteorologia é uma ciência que estuda os fenômenos que ocorrem na";
					cout << " atmosfera terrestre, com foco no clima e na previsão do tempo.";
				}
				
				//Mostra que a pergunta foi respondida
				perguntaRespondida++;
				
				//Pula para a proxima questão
				cout << "\n-------------------------------------------------------------------------------\n";
				getchar();
				cout << "\nPressione \"enter\" para continuar...";
				getchar();
				system("CLS");
			}
			
			//CONDICIONAL "SE" para escolhas - PULAR
			if(escolha == 2){
				perguntaspuladas++;
				cout << "\n\nPressione \"enter\" para pular a questão";
				getchar();
				getchar();
				system("CLS");
			}
			
		//PERGUNTA 05 - MÉDIO
		case 4:
			
			//Mostra o numero da pergunta e seu nível
			cout << "----------------------------------\n";
			cout << "   Pergunta n° " << (pergunta + 4) << " Nível: Médio.";
			cout << "\n----------------------------------";
			
			//Mostra a pergunta e alternativas ao usuário
			cout << "\n\nO etanol é produzido através de qual fonte de energia?";
			
			//Alternativas
			cout << "\n\nA) Solar.";
			cout << "\nB) Biomassa.";
			cout << "\nC) Eólica.";
			cout << "\nD) Geotérmica.";
			
			//Cabeçalho lista de opções - Separação
			cout << "\n\n----------------------------------\n";
			cout << "   LISTA DE OPÇÕES";
			cout << "\n----------------------------------";
			
			//Alternativas para escolha
			cout << "\n\n1 - RESPONDER.";
			cout << "\n2 - PULAR.";
			cout << "\n\nESCOLHA UMA DAS ALTERNATIVAS: ";
			cin >> escolha;
			
			//CONDICIONAL "SE" para escolhas - RESPONDER
			if(escolha == 1){
				cout << "\nQual é a resposta correta? ";
				cin >> resposta;
				if((resposta == 'b') || (resposta == 'B')){
					cout << "\nResposta correta!";
					acertos++;
					acertosMedio++;
					
					//EXPLICAÇÃO DA RESPOSTA 
					cout << "\n\nEXPLICAÇÃO: O etanol pode ser produzido a partir de cana-de-açúcar, beterraba e";
					cout << " milho, ou seja, energia que provém de matéria orgânica.";
	
				}else{
					cout << "\nResposta incorreta!";
					cout << "\nResposta correta: Letra B";
					erros++;
					
					//EXPLICAÇÃO DA RESPOSTA 
					cout << "\n\nEXPLICAÇÃO: O etanol pode ser produzido a partir de cana-de-açúcar, beterraba e";
					cout << " milho, ou seja, energia que provém de matéria orgânica.";
				}
				
				//Mostra que a pergunta foi respondida
				perguntaRespondida++;
				
				//Pula para a proxima questão
				cout << "\n-------------------------------------------------------------------------------\n";
				getchar();
				cout << "\nPressione \"enter\" para continuar...";
				getchar();
				system("CLS");
			}
			
			//CONDICIONAL "SE" para escolhas - PULAR
			if(escolha == 2){
				perguntaspuladas++;
				cout << "\n\nPressione \"enter\" para pular a questão";
				getchar();
				getchar();
				system("CLS");
			}
			
		//PERGUNTA 06 - MÉDIO
		case 5:
			
			//Mostra o numero da pergunta e seu nível
			cout << "----------------------------------\n";
			cout << "   Pergunta n° " << (pergunta + 5) << " Nível: Médio.";
			cout << "\n----------------------------------";
			
			//Mostra a pergunta e alternativas ao usuário
			cout << "\n\nO Dia do Fico é anualmente celebrado em que data?";
			
			//Alternativas
			cout << "\n\nA) 15 de Novembro.";
			cout << "\nB) 7 de Setembro.";
			cout << "\nC) 1° de Maio.";
			cout << "\nD) 9 de Janeiro.";
			
			//Cabeçalho lista de opções - Separação
			cout << "\n\n----------------------------------\n";
			cout << "   LISTA DE OPÇÕES";
			cout << "\n----------------------------------";
			
			//Alternativas para escolha
			cout << "\n\n1 - RESPONDER.";
			cout << "\n2 - PULAR.";
			cout << "\n\nESCOLHA UMA DAS ALTERNATIVAS: ";
			cin >> escolha;
			
			//CONDICIONAL "SE" para escolhas - RESPONDER
			if(escolha == 1){
				cout << "\nQual é a resposta correta? ";
				cin >> resposta;
				if((resposta == 'd') || (resposta == 'D')){
					cout << "\nResposta correta!";
					acertos++;
					acertosMedio++;
					
					//EXPLICAÇÃO DA RESPOSTA 
					cout << "\n\nEXPLICAÇÃO: Em 1822, Dom Pedro decidiu permanecer no Brasil, contrariando as";
					cout << "\nordens da corte portuguesa. Nessa ocasião, disse a célebre frase: “Se é para o"; 
					cout << "\nbem de todos e felicidade geral da Nação, estou pronto. Digam ao povo que fico.”";
	
				}else{
					cout << "\nResposta incorreta!";
					cout << "\nResposta correta: Letra D";
					erros++;
					
					//EXPLICAÇÃO DA RESPOSTA 
					cout << "\n\nEXPLICAÇÃO: Em 1822, Dom Pedro decidiu permanecer no Brasil, contrariando as";
					cout << "\nordens da corte portuguesa. Nessa ocasião, disse a célebre frase: “Se é para o"; 
					cout << "\nbem de todos e felicidade geral da Nação, estou pronto. Digam ao povo que fico.”";
				}
				
				//Mostra que a pergunta foi respondida
				perguntaRespondida++;
				
				//Pula para a proxima questão
				cout << "\n-------------------------------------------------------------------------------\n";
				getchar();
				cout << "\nPressione \"enter\" para continuar...";
				getchar();
				system("CLS");
			}
			
			//CONDICIONAL "SE" para escolhas - PULAR
			if(escolha == 2){
				perguntaspuladas++;
				cout << "\n\nPressione \"enter\" para pular a questão";
				getchar();
				getchar();
				system("CLS");
			}
			
		//PERGUNTA 07 - MÉDIO
		case 6:
		
			//Mostra o numero da pergunta e seu nível
			cout << "----------------------------------\n";
			cout << "   Pergunta n° " << (pergunta + 6) << " Nível: Médio.";
			cout << "\n----------------------------------";
			
			//Mostra a pergunta e alternativas ao usuário
			cout << "\n\nQual a unidade que mede a intensidade do som?";
			
			//Alternativas
			cout << "\n\nA) Decibel.";
			cout << "\nB) Frequência.";
			cout << "\nC) Hertz.";
			cout << "\nD) Compasso.";
			
			//Cabeçalho lista de opções - Separação
			cout << "\n\n----------------------------------\n";
			cout << "   LISTA DE OPÇÕES";
			cout << "\n----------------------------------";
			
			//Alternativas para escolha
			cout << "\n\n1 - RESPONDER.";
			cout << "\n2 - PULAR.";
			cout << "\n\nESCOLHA UMA DAS ALTERNATIVAS: ";
			cin >> escolha;
			
			//CONDICIONAL "SE" para escolhas - RESPONDER
			if(escolha == 1){
				cout << "\nQual é a resposta correta? ";
				cin >> resposta;
				if((resposta == 'a') || (resposta == 'A')){
					cout << "\nResposta correta!";
					acertos++;
					acertosMedio++;
					
					//EXPLICAÇÃO DA RESPOSTA 
					cout << "\n\nEXPLICAÇÃO: Em todo o mundo, os decibéis são usados para medir o nível do som, o";
					cout << "que é feito mediante uma escala logarítmica.";
	
				}else{
					cout << "\nResposta incorreta!";
					cout << "\nResposta correta: Letra A";
					erros++;
					
					//EXPLICAÇÃO DA RESPOSTA 
					cout << "\n\nEXPLICAÇÃO: Em todo o mundo, os decibéis são usados para medir o nível do som, o";
					cout << "que é feito mediante uma escala logarítmica.";
				}
				
				//Mostra que a pergunta foi respondida
				perguntaRespondida++;
				
				//Pula para a proxima questão
				cout << "\n-------------------------------------------------------------------------------\n";
				getchar();
				cout << "\nPressione \"enter\" para continuar...";
				getchar();
				system("CLS");
			}
			
			//CONDICIONAL "SE" para escolhas - PULAR
			if(escolha == 2){
				perguntaspuladas++;
				cout << "\n\nPressione \"enter\" para pular a questão";
				getchar();
				getchar();
				system("CLS");
			}

		//PERGUNTA 08 - MÉDIO
		case 7:
			
			//Mostra o numero da pergunta e seu nível
			cout << "----------------------------------\n";
			cout << "   Pergunta n° " << (pergunta + 7) << " Nível: Médio.";
			cout << "\n----------------------------------";
			
			//Mostra a pergunta e alternativas ao usuário
			cout << "\n\nSegundo Pitágoras, a que é igual A2 + B2?";
			
			//Alternativas
			cout << "\n\nA) AB.";
			cout << "\nB) B3.";
			cout << "\nC) C2.";
			cout << "\nD) B4.";
			
			//Cabeçalho lista de opções - Separação
			cout << "\n\n----------------------------------\n";
			cout << "   LISTA DE OPÇÕES";
			cout << "\n----------------------------------";
			
			//Alternativas para escolha
			cout << "\n\n1 - RESPONDER.";
			cout << "\n2 - PULAR.";
			cout << "\n\nESCOLHA UMA DAS ALTERNATIVAS: ";
			cin >> escolha;
			
			//CONDICIONAL "SE" para escolhas - RESPONDER
			if(escolha == 1){
				cout << "\nQual é a resposta correta? ";
				cin >> resposta;
				if((resposta == 'c') || (resposta == 'C')){
					cout << "\nResposta correta!";
					acertos++;
					acertosMedio++;
					
					//EXPLICAÇÃO DA RESPOSTA 
					cout << "\n\nEXPLICAÇÃO: Segundo o Teorema de Pitágoras: “a soma dos quadrados de seus catetos corresponde ao quadrado de sua hipotenusa.“";
					cout << "\n\nA fórmula que representa esse conceito é A2 = B2 + C2 (sendo “a” a hipotenusa e “b” e “c” os catetos de um triângulo retângulo).";
	
				}else{
					cout << "\nResposta incorreta!";
					cout << "\nResposta correta: Letra C";
					erros++;
					
					//EXPLICAÇÃO DA RESPOSTA 
					cout << "\n\nEXPLICAÇÃO: Segundo o Teorema de Pitágoras: “a soma dos quadrados de seus catetos corresponde ao quadrado de sua hipotenusa.“";
					cout << "\n\nA fórmula que representa esse conceito é A2 = B2 + C2 (sendo “a” a hipotenusa e “b” e “c” os catetos de um triângulo retângulo).";
				}
				
				//Mostra que a pergunta foi respondida
				perguntaRespondida++;
				
				//Pula para a proxima questão
				cout << "\n-------------------------------------------------------------------------------\n";
				getchar();
				cout << "\nPressione \"enter\" para continuar...";
				getchar();
				system("CLS");
			}
			
			//CONDICIONAL "SE" para escolhas - PULAR
			if(escolha == 2){
				perguntaspuladas++;
				cout << "\n\nPressione \"enter\" para pular a questão";
				getchar();
				getchar();
				system("CLS");
			}

		//PERGUNTA 09 - MÉDIO
		case 8:
			
			//Mostra o numero da pergunta e seu nível
			cout << "----------------------------------\n";
			cout << "   Pergunta n° " << (pergunta + 8) << " Nível: Médio.";
			cout << "\n----------------------------------";
			
			//Mostra a pergunta e alternativas ao usuário
			cout << "\n\nQuanto tempo a luz do Sol demora para chegar à Terra?";
			
			//Alternativas
			cout << "\n\nA) 12 minutos.";
			cout << "\nB) 1 dia.";
			cout << "\nC) 8 minutos.";
			cout << "\nD) 12 horas.";
			
			//Cabeçalho lista de opções - Separação
			cout << "\n\n----------------------------------\n";
			cout << "   LISTA DE OPÇÕES";
			cout << "\n----------------------------------";
			
			//Alternativas para escolha
			cout << "\n\n1 - RESPONDER.";
			cout << "\n2 - PULAR.";
			cout << "\n\nESCOLHA UMA DAS ALTERNATIVAS: ";
			cin >> escolha;
			
			//CONDICIONAL "SE" para escolhas - RESPONDER
			if(escolha == 1){
				cout << "\nQual é a resposta correta? ";
				cin >> resposta;
				if((resposta == 'c') || (resposta == 'C')){
					cout << "\nResposta correta!";
					acertos++;
					acertosMedio++;
					
					//EXPLICAÇÃO DA RESPOSTA 
					cout << "\n\nEXPLICAÇÃO: Essa é uma questão que se fundamenta na ótica. Ela é calculada com";
					cout << "\nbase na distância do Sol em relação à Terra, que é de aprox. 150 000 000 km,";
					cout << "\nconsiderando que a velocidade da luz no vácuo é 300 000 Km/s.";
					cout << "\n\n150 000 000 dividido por 300 000 é igual a 500 segundos, ou seja, 8,33 minutos.";
	
				}else{
					cout << "\nResposta incorreta!";
					cout << "\nResposta correta: Letra C";
					erros++;
					
					//EXPLICAÇÃO DA RESPOSTA 
					cout << "\n\nEXPLICAÇÃO: Essa é uma questão que se fundamenta na ótica. Ela é calculada com";
					cout << "\nbase na distância do Sol em relação à Terra, que é de aprox. 150 000 000 km,";
					cout << "\nconsiderando que a velocidade da luz no vácuo é 300 000 Km/s.";
					cout << "\n\n150 000 000 dividido por 300 000 é igual a 500 segundos, ou seja, 8,33 minutos.";
				}
				
				//Mostra que a pergunta foi respondida
				perguntaRespondida++;
				
				//Pula para a proxima questão
				cout << "\n-------------------------------------------------------------------------------\n";
				getchar();
				cout << "\nPressione \"enter\" para continuar...";
				getchar();
				system("CLS");
			}
			
			//CONDICIONAL "SE" para escolhas - PULAR
			if(escolha == 2){
				perguntaspuladas++;
				cout << "\n\nPressione \"enter\" para pular a questão";
				getchar();
				getchar();
				system("CLS");
			}

		//PERGUNTA 10 - MÉDIO
		case 9:
		
			//Mostra o numero da pergunta e seu nível
			cout << "----------------------------------\n";
			cout << "   Pergunta n° " << (pergunta + 9) << " Nível: Médio.";
			cout << "\n----------------------------------";
			
			//Mostra a pergunta e alternativas ao usuário
			cout << "\n\nÉ um dos maiores nomes da literatura brasileira. Ucraniana, em 2020 faria 100";
			cout << "\nanos. De quem estamos falando?";
			
			//Alternativas
			cout << "\n\nA) Lygia Fagundes Telles.";
			cout << "\nB) Clarice Lispector.";
			cout << "\nC) Cecília Meireles.";
			cout << "\nD) Rachel de Queiroz.";
			
			//Cabeçalho lista de opções - Separação
			cout << "\n\n----------------------------------\n";
			cout << "   LISTA DE OPÇÕES";
			cout << "\n----------------------------------";
			
			//Alternativas para escolha
			cout << "\n\n1 - RESPONDER.";
			cout << "\n2 - PULAR.";
			cout << "\n\nESCOLHA UMA DAS ALTERNATIVAS: ";
			cin >> escolha;
			
			//CONDICIONAL "SE" para escolhas - RESPONDER
			if(escolha == 1){
				cout << "\nQual é a resposta correta? ";
				cin >> resposta;
				if((resposta == 'b') || (resposta == 'B')){
					cout << "\nResposta correta!";
					acertos++;
					acertosMedio++;
					
					//EXPLICAÇÃO DA RESPOSTA 
					cout << "\n\nEXPLICAÇÃO: Clarice Lispector nasceu na Ucrânia, no dia 10 de dezembro de 1920. Com um estilo inconfundível, a obra de Clarice é considerada um marco na litera-";
					cout << "tura.";
	
				}else{
					cout << "\nResposta incorreta!";
					cout << "\nResposta correta: Letra B";
					erros++;
					
					//EXPLICAÇÃO DA RESPOSTA 
					cout << "\n\nEXPLICAÇÃO: Clarice Lispector nasceu na Ucrânia, no dia 10 de dezembro de 1920. Com um estilo inconfundível, a obra de Clarice é considerada um marco na litera-";
					cout << "tura.";
				}
				
				//Mostra que a pergunta foi respondida
				perguntaRespondida++;
				
				//Pula para a proxima questão
				cout << "\n-------------------------------------------------------------------------------\n";
				getchar();
				cout << "\nPressione \"enter\" para continuar...";
				getchar();
				system("CLS");
			}
			
			//CONDICIONAL "SE" para escolhas - PULAR
			if(escolha == 2){
				perguntaspuladas++;
				cout << "\n\nPressione \"enter\" para pular a questão";
				getchar();
				getchar();
				system("CLS");
			}

			//Faz o break (quebra) do caso
			break;
	}
	
	//Limpa a tela
	system("CLS");
	
	//Dá as boas vindas e parabéns ao usuário
	cout << "================= PARABÉNS, NÍVEL CONCLUÍDO ====================================\n";
	cout << "\nParabéns " << nome << "! Você acaba de superar o nível Médio de nosso desafio.";
	
	//Torna o programa mais próximo do usuário, fazendo uma brincadeira
	cout << "\n\n-------------------------------------------------------------------------------\n";
	cout << "\nEstá preparado para o próximo nível?\n";
	cout << "Eu espero que esteja! Ah, e você já concluiu 66,66...% de nosso Desafio.\n\n";
	cout << "-------------------------------------------------------------------------------\n";
	
	//Explica a brincadeira e dá a possibilidade de prosseguir
	cout << "\nParabéns, boa sorte e bom restante de jogo! (Falta pouco!)";
	cout << "\nPressione \"enter\" para prosseguir.";
	getchar();
	getchar();
	
	//Limpa a tela
	system("CLS");
	
	//PARTE DAS PERGUNTAS - SWITCH 03 - NIVEL DIFÍCIL
	switch(dificil){
		
		//PERGUNTA 01 - DIFÍCIL
		case 0:
			
			//Mostra o numero da pergunta e seu nível
			cout << "----------------------------------\n";
			cout << "   Pergunta n° " << (pergunta) << " Nível: Difícil.";
			cout << "\n----------------------------------";
			
			//Mostra a pergunta e alternativas ao usuário
			cout << "\n\nQuando mede um hectare?";
			
			//Alternativas
			cout << "\n\nA) 100 metros quadrados.";
			cout << "\nB) 10 mil quilômetros quadrados.";
			cout << "\nC) 24.200 metros.";
			cout << "\nD) 48.400 metros quadrados.";
			
			//Cabeçalho lista de opções - Separação
			cout << "\n\n----------------------------------\n";
			cout << "   LISTA DE OPÇÕES";
			cout << "\n----------------------------------";
			
			//Alternativas para escolha
			cout << "\n\n1 - RESPONDER.";
			cout << "\n2 - PULAR.";
			cout << "\n\nESCOLHA UMA DAS ALTERNATIVAS: ";
			cin >> escolha;
			
			//CONDICIONAL "SE" para escolhas - RESPONDER
			if(escolha == 1){
				cout << "\nQual é a resposta correta? ";
				cin >> resposta;
				if((resposta == 'b') || (resposta == 'B')){
					cout << "\nResposta correta!";
					acertos++;
					acertosDificil++;
					
					//EXPLICAÇÃO DA RESPOSTA 
					cout << "\n\nEXPLICAÇÃO: Um hectare de terra é equivalente a um hectômetro quadrado. Mas como";
					cout << "muitas pessoas não se lembram qual é o valor de um hectômetro, lembramos que um hectômetro quadrado equivale a 10 mil metros quadrados.";
					cout << "\n\nIMPORTANTE: As medidas agrárias utilizadas no Brasil equivalem a medidas em me-";
					cout << "\ntros e são as reconhecidas pelo SI (Sistema Internacional de Unidades).";
	
				}else{
					cout << "\nResposta incorreta!";
					cout << "\nResposta correta: Letra B";
					erros++;
					
					//EXPLICAÇÃO DA RESPOSTA 
					cout << "\n\nEXPLICAÇÃO: Um hectare de terra é equivalente a um hectômetro quadrado. Mas como";
					cout << "muitas pessoas não se lembram qual é o valor de um hectômetro, lembramos que um hectômetro quadrado equivale a 10 mil metros quadrados.";
					cout << "\n\nIMPORTANTE: As medidas agrárias utilizadas no Brasil equivalem a medidas em me-";
					cout << "\ntros e são as reconhecidas pelo SI (Sistema Internacional de Unidades).";
				}
				
				//Mostra que a pergunta foi respondida
				perguntaRespondida++;
				
				//Pula para a proxima questão
				cout << "\n-------------------------------------------------------------------------------\n";
				getchar();
				cout << "\nPressione \"enter\" para continuar...";
				getchar();
				system("CLS");
			}
			
			//CONDICIONAL "SE" para escolhas - PULAR
			if(escolha == 2){
				perguntaspuladas++;
				cout << "\n\nPressione \"enter\" para pular a questão";
				getchar();
				getchar();
				system("CLS");
			}
		
		//PERGUNTA 02 - DIFÍCIL
		case 1:
			
			//Mostra o numero da pergunta e seu nível
			cout << "----------------------------------\n";
			cout << "   Pergunta n° " << (pergunta + 1) << " Nível: Difícil.";
			cout << "\n----------------------------------";
			
			//Mostra a pergunta e alternativas ao usuário
			cout << "\n\nQual foi o matemático e geógrafo que calculou o perímetro da Terra em 240 a.C.?";
			
			//Alternativas
			cout << "\n\nA) Sócrates.";
			cout << "\nB) Sófocles.";
			cout << "\nC) Descartes.";
			cout << "\nD) Erastótenes.";
			
			//Cabeçalho lista de opções - Separação
			cout << "\n\n----------------------------------\n";
			cout << "   LISTA DE OPÇÕES";
			cout << "\n----------------------------------";
			
			//Alternativas para escolha
			cout << "\n\n1 - RESPONDER.";
			cout << "\n2 - PULAR.";
			cout << "\n\nESCOLHA UMA DAS ALTERNATIVAS: ";
			cin >> escolha;
			
			//CONDICIONAL "SE" para escolhas - RESPONDER
			if(escolha == 1){
				cout << "\nQual é a resposta correta? ";
				cin >> resposta;
				if((resposta == 'd') || (resposta == 'D')){
					cout << "\nResposta correta!";
					acertos++;
					acertosDificil++;
					
					//EXPLICAÇÃO DA RESPOSTA 
					cout << "\n\nEXPLICAÇÃO: Se baseando nos equinócios e solstícios, durante o período em que";
					cout << "\nmorou em Alexandria, Erastótenes conseguiu fazer um calculo se baseando na posi-";
					cout << "ção do Sol e do zênite.";
	
				}else{
					cout << "\nResposta incorreta!";
					cout << "\nResposta correta: Letra D";
					erros++;
					
					//EXPLICAÇÃO DA RESPOSTA 
					cout << "\n\nEXPLICAÇÃO: Se baseando nos equinócios e solstícios, durante o período em que";
					cout << "\nmorou em Alexandria, Erastótenes conseguiu fazer um calculo se baseando na posi-";
					cout << "ção do Sol e do zênite.";
				}
				
				//Mostra que a pergunta foi respondida
				perguntaRespondida++;
				
				//Pula para a proxima questão
				cout << "\n-------------------------------------------------------------------------------\n";
				getchar();
				cout << "\nPressione \"enter\" para continuar...";
				getchar();
				system("CLS");
			}
			
			//CONDICIONAL "SE" para escolhas - PULAR
			if(escolha == 2){
				perguntaspuladas++;
				cout << "\n\nPressione \"enter\" para pular a questão";
				getchar();
				getchar();
				system("CLS");
			}
			
		//PERGUNTA 03 - DIFÍCIL
		case 2:
			
			//Mostra o numero da pergunta e seu nível
			cout << "----------------------------------\n";
			cout << "   Pergunta n° " << (pergunta + 2) << " Nível: Difícil.";
			cout << "\n----------------------------------";
			
			//Mostra a pergunta e alternativas ao usuário
			cout << "\n\nNormalmente, quantos litros de sangue uma pessoa tem? Em média, quantos são re-";
			cout << "\ntirados numa doação de sangue?";
			
			//Alternativas
			cout << "\n\nA) Tem entre 2 a 4 litros. São retirados 450 mililitros.";
			cout << "\nB) Tem entre 4 a 6 litros. São retirados 450 mililitros.";
			cout << "\nC) Tem 10 litros. São retirados 2 litros.";
			cout << "\nD) Tem 7 litros. São retirados 1,5 litros.";
			
			//Cabeçalho lista de opções - Separação
			cout << "\n\n----------------------------------\n";
			cout << "   LISTA DE OPÇÕES";
			cout << "\n----------------------------------";
			
			//Alternativas para escolha
			cout << "\n\n1 - RESPONDER.";
			cout << "\n2 - PULAR.";
			cout << "\n\nESCOLHA UMA DAS ALTERNATIVAS: ";
			cin >> escolha;
			
			//CONDICIONAL "SE" para escolhas - RESPONDER
			if(escolha == 1){
				cout << "\nQual é a resposta correta? ";
				cin >> resposta;
				if((resposta == 'b') || (resposta == 'B')){
					cout << "\nResposta correta!";
					acertos++;
					acertosDificil++;
					
					//EXPLICAÇÃO DA RESPOSTA 
					cout << "\n\nEXPLICAÇÃO: O volume de sangue é entre 7% e 8% o peso corporal. Assim, um adulto"; 
					cout << "com 50 e 80 quilos, pode ter entre 4 e 6 litros de sangue, respectivamente.";
	
				}else{
					cout << "\nResposta incorreta!";
					cout << "\nResposta correta: Letra B";
					erros++;
					
					//EXPLICAÇÃO DA RESPOSTA 
					cout << "\n\nEXPLICAÇÃO: O volume de sangue é entre 7% e 8% o peso corporal. Assim, um adulto"; 
					cout << "com 50 e 80 quilos, pode ter entre 4 e 6 litros de sangue, respectivamente.";
				}
				
				//Mostra que a pergunta foi respondida
				perguntaRespondida++;
				
				//Pula para a proxima questão
				cout << "\n-------------------------------------------------------------------------------\n";
				getchar();
				cout << "\nPressione \"enter\" para continuar...";
				getchar();
				system("CLS");
			}
			
			//CONDICIONAL "SE" para escolhas - PULAR
			if(escolha == 2){
				perguntaspuladas++;
				cout << "\n\nPressione \"enter\" para pular a questão";
				getchar();
				getchar();
				system("CLS");
			}
			
		//PERGUNTA 04 - DIFÍCIL
		case 3:
			
			//Mostra o numero da pergunta e seu nível
			cout << "----------------------------------\n";
			cout << "   Pergunta n° " << (pergunta + 3) << " Nível: Difícil.";
			cout << "\n----------------------------------";
			
			//Mostra a pergunta e alternativas ao usuário
			cout << "\n\nQuais os nomes dos três Reis Magos?";
			
			//Alternativas
			cout << "\n\nA) Belchior, Gaspar e Baltazar.";
			cout << "\nB) Gaspar, Nicolau e Natanael.";
			cout << "\nC) Melchior, Noé e Galileu.";
			cout << "\nD) Gabriel, Benjamim e Melchior.";
			
			//Cabeçalho lista de opções - Separação
			cout << "\n\n----------------------------------\n";
			cout << "   LISTA DE OPÇÕES";
			cout << "\n----------------------------------";
			
			//Alternativas para escolha
			cout << "\n\n1 - RESPONDER.";
			cout << "\n2 - PULAR.";
			cout << "\n\nESCOLHA UMA DAS ALTERNATIVAS: ";
			cin >> escolha;
			
			//CONDICIONAL "SE" para escolhas - RESPONDER
			if(escolha == 1){
				cout << "\nQual é a resposta correta? ";
				cin >> resposta;
				if((resposta == 'a') || (resposta == 'A')){
					cout << "\nResposta correta!";
					acertos++;
					acertosDificil++;
					
					//EXPLICAÇÃO DA RESPOSTA 
					cout << "\n\nEXPLICAÇÃO: Os três reis magos são personalidades que visitaram Jesus após o seu";
					cout << "nascimento. Eles ofereceram alguns itens como forma de presentear a chegada do";
					cout << "\nSalvador. Assim, Belchior levou ouro, Gaspar, incenso, e Baltazar, mirra.";
	
				}else{
					cout << "\nResposta incorreta!";
					cout << "\nResposta correta: Letra A";
					erros++;
					
					//EXPLICAÇÃO DA RESPOSTA 
					cout << "\n\nEXPLICAÇÃO: Os três reis magos são personalidades que visitaram Jesus após o seu";
					cout << "nascimento. Eles ofereceram alguns itens como forma de presentear a chegada do";
					cout << "\nSalvador. Assim, Belchior levou ouro, Gaspar, incenso, e Baltazar, mirra.";
				}
				
				//Mostra que a pergunta foi respondida
				perguntaRespondida++;
				
				//Pula para a proxima questão
				cout << "\n-------------------------------------------------------------------------------\n";
				getchar();
				cout << "\nPressione \"enter\" para continuar...";
				getchar();
				system("CLS");
			}
			
			//CONDICIONAL "SE" para escolhas - PULAR
			if(escolha == 2){
				perguntaspuladas++;
				cout << "\n\nPressione \"enter\" para pular a questão";
				getchar();
				getchar();
				system("CLS");
			}

		//PERGUNTA 05 - DIFÍCIL
		case 4:
			
			//Mostra o numero da pergunta e seu nível
			cout << "----------------------------------\n";
			cout << "   Pergunta n° " << (pergunta + 4) << " Nível: Difícil.";
			cout << "\n----------------------------------";
			
			//Mostra a pergunta e alternativas ao usuário
			cout << "\n\nQuem foi o primeiro homem a pisar na Lua? Em que ano aconteceu?";
			
			//Alternativas
			cout << "\n\nA) Yuri Gagarin, em 1961.";
			cout << "\nB) Buzz Aldrin, em 1969.";
			cout << "\nC) Neil Armstrong, em 1969.";
			cout << "\nD) Charles Duke, em 1971.";
			
			//Cabeçalho lista de opções - Separação
			cout << "\n\n----------------------------------\n";
			cout << "   LISTA DE OPÇÕES";
			cout << "\n----------------------------------";
			
			//Alternativas para escolha
			cout << "\n\n1 - RESPONDER.";
			cout << "\n2 - PULAR.";
			cout << "\n\nESCOLHA UMA DAS ALTERNATIVAS: ";
			cin >> escolha;
			
			//CONDICIONAL "SE" para escolhas - RESPONDER
			if(escolha == 1){
				cout << "\nQual é a resposta correta? ";
				cin >> resposta;
				if((resposta == 'c') || (resposta == 'C')){
					cout << "\nResposta correta!";
					acertos++;
					acertosDificil++;
					
					//EXPLICAÇÃO DA RESPOSTA 
					cout << "\n\nEXPLICAÇÃO: Neil Armstrong (1930-2012) foi um engenheiro e astronauta, sendo o";
					cout << "\nprimeiro homem a pisar na lua em 1969 na missão Apollo 11, ao lado dos astronau-";
					cout << "tas: Michael Collins e Edwin 'Buzz' Aldrian.";
	
				}else{
					cout << "\nResposta incorreta!";
					cout << "\nResposta correta: Letra C";
					erros++;
					
					//EXPLICAÇÃO DA RESPOSTA 
					cout << "\n\nEXPLICAÇÃO: Neil Armstrong (1930-2012) foi um engenheiro e astronauta, sendo o";
					cout << "\nprimeiro homem a pisar na lua em 1969 na missão Apollo 11, ao lado dos astronau-";
					cout << "tas: Michael Collins e Edwin 'Buzz' Aldrian.";
				}
				
				//Mostra que a pergunta foi respondida
				perguntaRespondida++;
				
				//Pula para a proxima questão
				cout << "\n-------------------------------------------------------------------------------\n";
				getchar();
				cout << "\nPressione \"enter\" para continuar...";
				getchar();
				system("CLS");
			}
			
			//CONDICIONAL "SE" para escolhas - PULAR
			if(escolha == 2){
				perguntaspuladas++;
				cout << "\n\nPressione \"enter\" para pular a questão";
				getchar();
				getchar();
				system("CLS");
			}

		//PERGUNTA 06 - DIFÍCIL
		case 5:
			
			//Mostra o numero da pergunta e seu nível
			cout << "----------------------------------\n";
			cout << "   Pergunta n° " << (pergunta + 5) << " Nível: Difícil.";
			cout << "\n----------------------------------";
			
			//Mostra a pergunta e alternativas ao usuário
			cout << "\n\nQuantos graus são necessário para que dois ângulos sejam complementares?";
			
			//Alternativas
			cout << "\n\nA) 45°.";
			cout << "\nB) 60°.";
			cout << "\nC) 90°.";
			cout << "\nD) 180°.";
			
			//Cabeçalho lista de opções - Separação
			cout << "\n\n----------------------------------\n";
			cout << "   LISTA DE OPÇÕES";
			cout << "\n----------------------------------";
			
			//Alternativas para escolha
			cout << "\n\n1 - RESPONDER.";
			cout << "\n2 - PULAR.";
			cout << "\n\nESCOLHA UMA DAS ALTERNATIVAS: ";
			cin >> escolha;
			
			//CONDICIONAL "SE" para escolhas - RESPONDER
			if(escolha == 1){
				cout << "\nQual é a resposta correta? ";
				cin >> resposta;
				if((resposta == 'c') || (resposta == 'C')){
					cout << "\nResposta correta!";
					acertos++;
					acertosDificil++;
					
					//EXPLICAÇÃO DA RESPOSTA 
					cout << "\n\nEXPLICAÇÃO: Os ângulos complementares são ângulos que juntos somam 90º.";
	
				}else{
					cout << "\nResposta incorreta!";
					cout << "\nResposta correta: Letra C";
					erros++;
					
					//EXPLICAÇÃO DA RESPOSTA 
					cout << "\n\nEXPLICAÇÃO: Os ângulos complementares são ângulos que juntos somam 90º.";
				}
				
				//Mostra que a pergunta foi respondida
				perguntaRespondida++;
				
				//Pula para a proxima questão
				cout << "\n-------------------------------------------------------------------------------\n";
				getchar();
				cout << "\nPressione \"enter\" para continuar...";
				getchar();
				system("CLS");
			}
			
			//CONDICIONAL "SE" para escolhas - PULAR
			if(escolha == 2){
				perguntaspuladas++;
				cout << "\n\nPressione \"enter\" para pular a questão";
				getchar();
				getchar();
				system("CLS");
			}

		//PERGUNTA 07 - DIFÍCIL
		case 6:
			
			//Mostra o numero da pergunta e seu nível
			cout << "----------------------------------\n";
			cout << "   Pergunta n° " << (pergunta + 6) << " Nível: Difícil.";
			cout << "\n----------------------------------";
			
			//Mostra a pergunta e alternativas ao usuário
			cout << "\n\nQual o maior animal terrestre?";
			
			//Alternativas
			cout << "\n\nA) Elefante Africano.";
			cout << "\nB) Girafa.";
			cout << "\nC) Dinossauro.";
			cout << "\nD) Tubarão Branco.";
			
			//Cabeçalho lista de opções - Separação
			cout << "\n\n----------------------------------\n";
			cout << "   LISTA DE OPÇÕES";
			cout << "\n----------------------------------";
			
			//Alternativas para escolha
			cout << "\n\n1 - RESPONDER.";
			cout << "\n2 - PULAR.";
			cout << "\n\nESCOLHA UMA DAS ALTERNATIVAS: ";
			cin >> escolha;
			
			//CONDICIONAL "SE" para escolhas - RESPONDER
			if(escolha == 1){
				cout << "\nQual é a resposta correta? ";
				cin >> resposta;
				if((resposta == 'a') || (resposta == 'A')){
					cout << "\nResposta correta!";
					acertos++;
					acertosDificil++;
					
					//EXPLICAÇÃO DA RESPOSTA 
					cout << "\n\nEXPLICAÇÃO: O elefante africano é o maior animal terrestre. Ele pode medir até 4";
					cout << "metros de altura e 7 de comprimento. Seu peso pode chegar até 8 toneladas.";
	
				}else{
					cout << "\nResposta incorreta!";
					cout << "\nResposta correta: Letra A";
					erros++;
					
					//EXPLICAÇÃO DA RESPOSTA 
					cout << "\n\nEXPLICAÇÃO: O elefante africano é o maior animal terrestre. Ele pode medir até 4";
					cout << "metros de altura e 7 de comprimento. Seu peso pode chegar até 8 toneladas.";
				}
				
				//Mostra que a pergunta foi respondida
				perguntaRespondida++;
				
				//Pula para a proxima questão
				cout << "\n-------------------------------------------------------------------------------\n";
				getchar();
				cout << "\nPressione \"enter\" para continuar...";
				getchar();
				system("CLS");
			}
			
			//CONDICIONAL "SE" para escolhas - PULAR
			if(escolha == 2){
				perguntaspuladas++;
				cout << "\n\nPressione \"enter\" para pular a questão";
				getchar();
				getchar();
				system("CLS");
			}

		//PERGUNTA 08 - DIFÍCIL
		case 7:
			
			//Mostra o numero da pergunta e seu nível
			cout << "----------------------------------\n";
			cout << "   Pergunta n° " << (pergunta + 7) << " Nível: Difícil.";
			cout << "\n----------------------------------";
			
			//Mostra a pergunta e alternativas ao usuário
			cout << "\n\nO que é um algoritmo?";
			
			//Alternativas
			cout << "\n\nA) É o mesmo que algarismo.";
			cout << "\nB) Um conjunto numérico.";
			cout << "\nC) Um tipo de cálculo.";
			cout << "\nD) Conjunto de regras necessárias à resolução de um problema ou cálculo.";
			
			//Cabeçalho lista de opções - Separação
			cout << "\n\n----------------------------------\n";
			cout << "   LISTA DE OPÇÕES";
			cout << "\n----------------------------------";
			
			//Alternativas para escolha
			cout << "\n\n1 - RESPONDER.";
			cout << "\n2 - PULAR.";
			cout << "\n\nESCOLHA UMA DAS ALTERNATIVAS: ";
			cin >> escolha;
			
			//CONDICIONAL "SE" para escolhas - RESPONDER
			if(escolha == 1){
				cout << "\nQual é a resposta correta? ";
				cin >> resposta;
				if((resposta == 'd') || (resposta == 'D')){
					cout << "\nResposta correta!";
					acertos++;
					acertosDificil++;
					
					//EXPLICAÇÃO DA RESPOSTA 
					cout << "\n\nEXPLICAÇÃO: Um algoritmo é um conjunto de regras necessárias à resolução de um";
					cout << "\nproblema ou cálculo.";
					cout << "\n\nEXEMPLO: Por trás de todo esse jogo, há um algoritmo, que é um conjunto de códi-";
					cout << "gos.";
	
				}else{
					cout << "\nResposta incorreta!";
					cout << "\nResposta correta: Letra D";
					erros++;
					
					//EXPLICAÇÃO DA RESPOSTA 
					cout << "\n\nEXPLICAÇÃO: Um algoritmo é um conjunto de regras necessárias à resolução de um";
					cout << "\nproblema ou cálculo.";
					cout << "\n\nEXEMPLO: Por trás de todo esse jogo, há um algoritmo, que é um conjunto de códi-";
					cout << "gos.";
				}
				
				//Mostra que a pergunta foi respondida
				perguntaRespondida++;
				
				//Pula para a proxima questão
				cout << "\n-------------------------------------------------------------------------------\n";
				getchar();
				cout << "\nPressione \"enter\" para continuar...";
				getchar();
				system("CLS");
			}
			
			//CONDICIONAL "SE" para escolhas - PULAR
			if(escolha == 2){
				perguntaspuladas++;
				cout << "\n\nPressione \"enter\" para pular a questão";
				getchar();
				getchar();
				system("CLS");
			}
			
		//PERGUNTA 09 - DIFÍCIL
		case 8:
			
			//Mostra o numero da pergunta e seu nível
			cout << "----------------------------------\n";
			cout << "   Pergunta n° " << (pergunta + 8) << " Nível: Difícil.";
			cout << "\n----------------------------------";
			
			//Mostra a pergunta e alternativas ao usuário
			cout << "\n\nQuantas casas decimais tem o número pi?";
			
			//Alternativas
			cout << "\n\nA) Duas.";
			cout << "\nB) Centenas.";
			cout << "\nC) Infinitas.";
			cout << "\nD) Milhares.";
			
			//Cabeçalho lista de opções - Separação
			cout << "\n\n----------------------------------\n";
			cout << "   LISTA DE OPÇÕES";
			cout << "\n----------------------------------";
			
			//Alternativas para escolha
			cout << "\n\n1 - RESPONDER.";
			cout << "\n2 - PULAR.";
			cout << "\n\nESCOLHA UMA DAS ALTERNATIVAS: ";
			cin >> escolha;
			
			//CONDICIONAL "SE" para escolhas - RESPONDER
			if(escolha == 1){
				cout << "\nQual é a resposta correta? ";
				cin >> resposta;
				if((resposta == 'c') || (resposta == 'C')){
					cout << "\nResposta correta!";
					acertos++;
					acertosDificil++;
					
					//EXPLICAÇÃO DA RESPOSTA 
					cout << "\n\nEXPLICAÇÃO: Ao longo dos tempos, vários estudiosos têm se dedicado a calcular";
					cout << " o número pi e já chegaram ao número de 5 bilhões de casas.";
	
				}else{
					cout << "\nResposta incorreta!";
					cout << "\nResposta correta: Letra C";
					erros++;
					
					//EXPLICAÇÃO DA RESPOSTA 
					cout << "\n\nEXPLICAÇÃO: Ao longo dos tempos, vários estudiosos têm se dedicado a calcular";
					cout << " o número pi e já chegaram ao número de 5 bilhões de casas.";
				}
				
				//Mostra que a pergunta foi respondida
				perguntaRespondida++;
				
				//Pula para a proxima questão
				cout << "\n-------------------------------------------------------------------------------\n";
				getchar();
				cout << "\nPressione \"enter\" para continuar...";
				getchar();
				system("CLS");
			}
			
			//CONDICIONAL "SE" para escolhas - PULAR
			if(escolha == 2){
				perguntaspuladas++;
				cout << "\n\nPressione \"enter\" para pular a questão";
				getchar();
				getchar();
				system("CLS");
			}

		//PERGUNTA 10 - DIFÍCIL
		case 9:
			
			//Mostra o numero da pergunta e seu nível
			cout << "----------------------------------\n";
			cout << "   Pergunta n° " << (pergunta + 9) << " Nível: Difícil.";
			cout << "\n----------------------------------";
			
			//Mostra a pergunta e alternativas ao usuário
			cout << "\n\nQual foi a primeira pergunta desse jogo?";
			
			//Alternativas
			cout << "\n\nA) \"Quais o menor e maior país do mundo?\".";
			cout << "\nB) \"Nome do Participante\".";
			cout << "\nC) \"O Dia do Fico é anualmente celebrado em que data?\".";
			cout << "\nD) \"O que é Brexit?\".";
			
			//Cabeçalho lista de opções - Separação
			cout << "\n\n----------------------------------\n";
			cout << "   LISTA DE OPÇÕES";
			cout << "\n----------------------------------";
			
			//Alternativas para escolha
			cout << "\n\n1 - RESPONDER.";
			cout << "\n2 - PULAR.";
			cout << "\n\nESCOLHA UMA DAS ALTERNATIVAS: ";
			cin >> escolha;
			
			//CONDICIONAL "SE" para escolhas - RESPONDER
			if(escolha == 1){
				cout << "\nQual é a resposta correta? ";
				cin >> resposta;
				if((resposta == 'b') || (resposta == 'B')){
					cout << "\nResposta correta!";
					acertos++;
					acertosDificil++;
					
					//EXPLICAÇÃO DA RESPOSTA 
					cout << "\n\nEXPLICAÇÃO: A 1ª pergunta feita nesse jogo foi a do \"Nome do Participante\".";
	
				}else{
					cout << "\nResposta incorreta!";
					cout << "\nResposta correta: Letra B";
					erros++;
					
					//EXPLICAÇÃO DA RESPOSTA 
					cout << "\n\nEXPLICAÇÃO: A 1ª pergunta feita nesse jogo foi a do \"Nome do Participante\".";
				}
				
				//Mostra que a pergunta foi respondida
				perguntaRespondida++;
				
				//Pula para a proxima questão
				cout << "\n-------------------------------------------------------------------------------\n";
				getchar();
				cout << "\nPressione \"enter\" para continuar...";
				getchar();
				system("CLS");
			}
			
			//CONDICIONAL "SE" para escolhas - PULAR
			if(escolha == 2){
				perguntaspuladas++;
				cout << "\n\nPressione \"enter\" para pular a questão";
				getchar();
				getchar();
				system("CLS");
			}
			
			//Faz o break (quebra) do caso
			break;		
	}
	
	//Agradecimentos ao usuário
	cout << "================ MUITO OBRIGADO (A) =================\n";
	cout << "\nAqui fica o agradecimento do \"criador\" desse Jogo.";
	cout << "\nEspero que esse jogo possa ter sido divertido, e que";
	cout << " ele sirva para algo maior \ne mais importante que isso, ganhar conhecimento!";
	
	//Opção para jogador pular pro placar
	cout << "\n-------------------------------------------------------------------------------\n";
	cout << "\nPressione \"enter\" para continuar...";
	getchar();
	system("CLS");
	
	//Mostra os resultados ao usuário
	cout << "================ RESULTADOS DO JOGO =================\n";
	cout << "\nParticipante: " << nome;
	cout << "\nPerguntas respondidas: " << perguntaRespondida;
	cout << "\nPerguntas puladas:...: " << perguntaspuladas;
	cout << "\nTotal de acertos.....: " << acertos;
	cout << "\nTotal de erros.......: " << erros;
	cout << "\nPontuação total......: " << (acertosFacil * 2) + (acertosMedio * 3) + (acertosDificil * 5);
	
	
	//Créditos
	cout << "\n\nCriado por: Pedro Dantas";
	cout << "\n\nGithub: https://github.com/Pedro0901";
	
	getchar();
	getchar();
	
	//Faz o retorno da função
	return 0;
}
